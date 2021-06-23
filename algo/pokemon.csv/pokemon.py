import pandas as pd
# obteniendo datos
data = pd.read_csv("data_pokemon.csv")
# discretizando los datos
temp = pd.cut(data['Generation'], bins=[0, 2, 4, 5])
# mostrando los límites
print(pd.cut(data['Generation'], bins=[0, 2, 4, 5]).value_counts())

