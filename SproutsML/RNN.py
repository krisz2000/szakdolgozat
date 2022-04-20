from typing import Dict, List, Tuple
import torch
import torch.nn as nn
from torch import optim
import numpy as np
from SproutsML import sprouts

device = torch.device("cuda" if torch.cuda.is_available() else "cpu")
soft_max = nn.Softmax(0)


class RNN(nn.Module):
    def __init__(
        self,
        input_size: int,
        embedding_dim: int,
        output_size: int,
        hidden_size: int,
        num_layers: int,
    ):
        super(RNN, self).__init__()
        self.hidden_size = hidden_size
        self.num_layers = num_layers
        self.embedding = nn.Embedding(input_size, embedding_dim)
        self.rnn = nn.LSTM(
            input_size=embedding_dim, hidden_size=hidden_size, num_layers=num_layers
        )
        self.decoder = nn.Linear(hidden_size, output_size)
        self.optimizer = optim.Adam(self.parameters())
        self.loss_function = nn.BCEWithLogitsLoss()
        self.data_seen_count = 0

    def forward(self, input_seq):
        input_seq = torch.IntTensor([ord(char) for char in input_seq])
        embedding = self.embedding(input_seq)
        output, hidden_state = self.rnn(embedding)
        output = self.decoder(output)
        score = output[-1]
        return score

    def train(self, data: List[Tuple[str, float]]):
        for state, reward in data:
            # print(state, reward)
            self.optimizer.zero_grad()
            score = self(state)
            loss = self.loss_function(score, torch.Tensor([reward]))
            loss.backward()
            self.optimizer.step()
            self.data_seen_count += 1
        # print(self.embedding(torch.IntTensor([ord("!")])))
        # print(self.embedding(torch.IntTensor([ord("a")])))
        # print(self.embedding(torch.IntTensor([ord("A")])))
        # print(self.embedding(torch.IntTensor([ord("|")])))

    def choose_state(self, children, debug=False):
        values = []
        states = []
        pos_strings = []
        for child in children:
            pos = sprouts.Position(child)
            pos.canonize()
            pos_string = pos.export_to_string()
            if pos_string not in pos_strings:
                pos_strings.append(pos_string)
                states.append(pos)
        with torch.no_grad():
            for pos_string in pos_strings:
                values.append(self(pos_string).item())
            # values.append(np.random.random())
        distribution = soft_max(torch.Tensor(values) * 10).detach().numpy()
        choice = np.random.choice(range(len(distribution)), p=distribution)
        if debug:
            print(f"Pozíciók: {pos_strings}")
            print(f"Értékek: {values}")
            print(f"Valószínűségi eloszlás: {distribution}")
            print(f"Választott állapot száma: {choice}")
            print()

        return choice, states