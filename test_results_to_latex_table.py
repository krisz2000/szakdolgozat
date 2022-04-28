import numpy as np

results = np.load("models/testing_results_7.npy")
models = ["modell 2", "modell 3", "modell 5", "modell 7", "Véletlenszerű"]
print("\\begin{table}[H]")
print(f"\\begin{{tabular}}{{{'c'*(len(models)+1)}}}")
for model in models:
    print(" & " + model, end="")
print("\\\\")
for i, model in enumerate(models):
    print(model, end="")
    for result in results[i]:
        print(" & " + str(result), end="")
    print("\\\\")
print("\\end{tabular}")
print("\\end{table}")
