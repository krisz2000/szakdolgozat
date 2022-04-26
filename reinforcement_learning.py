import os
import sys
from typing import Any, List, Tuple

import numpy as np
import torch
from SproutsML import sprouts
from SproutsML.RNN import RNN

EPSILON = 0.15
NUMBER_OF_EPISODES = 200
NUM_OF_DOTS = 2
TRAINING_ROUNDS = 5
first_player_wins = 0
second_player_wins = 0


def epsilon_state(
    choosen_state_index: int,
    number_of_states: int,
    eps: float = 0.1,
) -> int:
    p = np.random.random()
    if p >= eps:
        return choosen_state_index
    else:
        return np.random.randint(0, number_of_states)


def play_game(state: Any, model: RNN, debug=False) -> List[str]:
    visited_states = []
    while not state.is_terminal_position():
        state.compute_children()
        children = state.get_children()
        choosen_state_index, states = model.choose_state(children, debug)
        number_of_states = len(states)
        state_num = epsilon_state(choosen_state_index, number_of_states, EPSILON)
        state = states[state_num]
        if debug:
            print(f"A jelenlegi állapot: {state.export_to_string()}")
        visited_states.append(state.export_to_string())
    if debug:
        print("Végállapot elérve\n"
    return visited_states


def calculate_state_rewards(visited_states: List[str]) -> List[Tuple[Any, int]]:
    global first_player_wins, second_player_wins
    state_rewards = []
    for i, state_string in enumerate(reversed(visited_states)):
        if i % 2 == 1:
            state_rewards.append((state_string, 0))
        else:
            state_rewards.append((state_string, 1))

    if len(visited_states) % 2 == 0:
        second_player_wins += 1
    else:
        first_player_wins += 1

    return state_rewards


def training(starting_pos: Any, model: RNN) -> None:
    all_state_rewards = []
    for t in range(NUMBER_OF_EPISODES):
        # if t % (NUMBER_OF_EPISODES / 10) == 0:
        #     print(f"Epizódok száma: {t} / {NUMBER_OF_EPISODES}")

        visited_states = play_game(starting_pos, model)
        state_rewards = calculate_state_rewards(visited_states)
        all_state_rewards.extend(state_rewards)

    model.train(all_state_rewards)


def main():
    global NUM_OF_DOTS, EPSILON, first_player_wins, second_player_wins
    if len(sys.argv) > 1:
        NUM_OF_DOTS = int(sys.argv[1])
    model_path = f"models/sprouts_model_{NUM_OF_DOTS}"
    if os.path.exists(model_path):
        model = torch.load(model_path)
    else:
        model = RNN(
            input_size=128,
            embedding_dim=16,
            output_size=1,
            hidden_size=32,
            num_layers=3,
        )

    for i in range(TRAINING_ROUNDS):
        pos = sprouts.Position(sprouts.Position.start_position(NUM_OF_DOTS, 0))
        training(pos, model)
        print(f"Tanítási körök száma: {i+1} / {TRAINING_ROUNDS}")
        print(
            f"Első játékos győzelmei: {first_player_wins}, "
            f"Második játékos győzelmei: {second_player_wins}"
        )
        print()
        first_player_wins = 0
        second_player_wins = 0
        torch.save(model, f=model_path)

    print("=" * 50)
    EPSILON = 0
    pos = sprouts.Position(sprouts.Position.start_position(NUM_OF_DOTS, 0))
    states = play_game(pos, model, debug=True)
    training(pos, model)
    print(
        f"Első játékos győzelmei: {first_player_wins}, "
        f"Második játékos győzelmei: {second_player_wins}"
    )


if __name__ == "__main__":
    EPSILON = 0.15
    NUM_OF_DOTS = 2
    TRAINING_ROUNDS = 10
    main()
    EPSILON = 0.15
    NUM_OF_DOTS = 3
    TRAINING_ROUNDS = 50
    main()
    EPSILON = 0.15
    NUM_OF_DOTS = 5
    TRAINING_ROUNDS = 100
    main()
    EPSILON = 0.15
    NUM_OF_DOTS = 7
    main()
    EPSILON = 0.15
    NUM_OF_DOTS = 11
    main()
    EPSILON = 0.15
    NUM_OF_DOTS = 30
    main()
