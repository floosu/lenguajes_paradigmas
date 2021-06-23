import pandas as pd
import matplotlib.pyplot as plt
from sklearn.decomposition import PCA
from sklearn.preprocessing import StandardScaler

url = "https://archive.ics.uci.edu/ml/machine-learning-databases/iris/iris.data"

# Cargamos el dataset
df = pd.read_csv(url, names=['sepal length', 'sepal width',
                             'petal length', 'petal width', 'target'])
print(df.head())

# Estandarización
features = ['sepal length', 'sepal width', 'petal length', 'petal width']
# Sacamos sólo las features
x = df.loc[:, features].values
# Sacamos sólo los targets
y = df.loc[:, ['target']].values
# Estandarizamos las features
x = StandardScaler().fit_transform(x)
# PCA de 2 componentes
pca = PCA(n_components=2)
# Aplicamos PCA
principalComponents = pca.fit_transform(x)
# Creamos otro dataframe con las componentes principales obtenidas; columns es un arreglo con los nombres para las columnas del dataframe
principalDf = pd.DataFrame(data=principalComponents, columns=[
                           'principal component 1', 'principal component 2'])
# Imprimimos el nuevo dataframe
print(principalDf.head())

# Concatenamos las 2 componentes principales con los targets para hacer el gráfico
finalDf = pd.concat([principalDf, df[['target']]], axis=1)
# Creamos el gráfico
# Definimos una cuadricula de 8x8
fig = plt.figure(figsize=(8, 8))
ax = fig.add_subplot(1, 1, 1)
ax.set_xlabel('Principal Component 1', fontsize=15)
ax.set_ylabel('Principal Component 2', fontsize=15)
ax.set_title('2 component PCA', fontsize=20)
targets = ['Iris-setosa', 'Iris-versicolor', 'Iris-virginica']
colors = ['r', 'g', 'b']
# Creamos tuplas de targets y colores. Recorremos un for para cada tupla
for target, color in zip(targets, colors):
    indicesToKeep = finalDf['target'] == target
    ax.scatter(finalDf.loc[indicesToKeep, 'principal component 1'],
               finalDf.loc[indicesToKeep, 'principal component 2'], c=color, s=50)
ax.legend(targets)
ax.grid()
plt.show()

# Imprimimos la varianza explicada por cada componente
print(pca.explained_variance_ratio_)
# Imprimimos la varianza total explicada por las componentes
print(sum(pca.explained_variance_ratio_))

