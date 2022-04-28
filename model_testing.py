from typing import Any, List, Tuple, Union
import numpy as np
from SproutsML import sprouts
from SproutsML.models import SproutsModel, RandomModel
import torch

NUMBER_OF_EPISODES = 200


def play_game(
    state: sprouts.Position, models: List[SproutsModel], debug: bool = False
) -> int:
    visited_states_number = 0
    while not state.is_terminal_position():
        model_number = visited_states_number % 2
        state.compute_children()
        children = state.get_children()
        choosen_state_index, states = models[model_number].choose_state(children, debug)
        state = states[choosen_state_index]
        if debug:
            print(f"A jelenlegi állapot: {state.export_to_string()}")
        visited_states_number += 1
    if debug:
        print("Végállapot elérve\n")
    return model_number


def testing(
    starting_pos: sprouts.Position, models: List[SproutsModel]
) -> Tuple[int, int]:
    winning_model_nums: List[int] = []
    for t in range(NUMBER_OF_EPISODES):
        if t % (NUMBER_OF_EPISODES / 10) == 0:
            print(f"Epizódok száma: {t} / {NUMBER_OF_EPISODES}")
            sum_of_model_nums = sum(winning_model_nums)
            print(
                f"Első játékos győzelmei: {len(winning_model_nums)-sum_of_model_nums}, "
                f"Második játékos győzelmei: {sum_of_model_nums}"
            )
        winning_model_num = play_game(starting_pos, models)
        winning_model_nums.append(winning_model_num)
    sum_of_model_nums = sum(winning_model_nums)
    first_player_wins = len(winning_model_nums) - sum_of_model_nums
    second_player_wins = sum_of_model_nums
    print(
        f"Első játékos győzelmei: {first_player_wins}, "
        f"Második játékos győzelmei: {second_player_wins}"
    )
    return first_player_wins, second_player_wins


def main(numbers_of_dots: List[int], models: List[SproutsModel]) -> None:
    results = np.zeros([len(models), len(models)], int)
    for number_of_dots in numbers_of_dots:
        pos = sprouts.Position(sprouts.Position.start_position(number_of_dots, 0))
        for i, model1 in enumerate(models):
            for j, model2 in enumerate(models):
                first_player_wins, _ = testing(pos, [model1, model2])
                results[i, j] = first_player_wins

        print(results)
        np.save(f"models/testing_results_{number_of_dots}", results)


if __name__ == "__main__":
    numbers_of_dots = [2]  # , 3, 5, 7]
    models = []
    models.append(torch.load("models/sprouts_model_2"))
    # models.append(torch.load("models/sprouts_model_3"))
    # models.append(torch.load("models/sprouts_model_5"))
    # models.append(torch.load("models/sprouts_model_7"))
    models.append(RandomModel())
    main(numbers_of_dots, models)
