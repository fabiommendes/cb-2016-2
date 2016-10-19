caminho = "C:\\Users\\igor_\\Desktop\\pnad.dat"
F = open(caminho, "r")
dados = F.read()
linhas = dados.split("\n")
del linhas[-1]

# Converte todas as strings para variaveis inteiras
N = len(linhas)
for i in range(N):
    linha = linhas[i]
    valores = linha.split(',')
    for j in range(4):
        valores[j] = int(valores[j])
    linhas[i] = valores
pessoas = linhas

# Mostra fracao de homens e mulheres
sexo1 = 0
sexo2 = 0
for pessoa in pessoas:
    if pessoa[0] == 1:
        sexo1 += 1
    else:
        sexo2 += 1
print(100 * sexo1/N, 100 * sexo2/N)

# Fracao de cada raca
raca = [0, 0, 0, 0, 0, 0]
for pessoa in pessoas:
    R = pessoa[1]
    raca[R] += 1
print([(100 * x / N) for x in raca])

# Salario medio homens vs mulheres
salario = sum([x[3] for x in pessoas]) / N
salario_m = sum([x[3] for x in pessoas if x[0] == 2]) / sexo2
salario_h = sum([x[3] for x in pessoas if x[0] == 1]) / sexo1
print(salario, salario_m, salario_h, 100 * salario_m / salario_h)

# Salario medio brancos vs negros
salario = sum([x[3] for x in pessoas]) / N
g = 2
for i in range(6):
    m = len([x for x in pessoas if (x[0] == g and x[1] == i)])
    salario = sum([x[3] for x in pessoas if (x[1] == i and x[0] == g)]) / m
    print(i, salario)

# Salario medio brancos vs negros
print('-' * 80)
salario = sum([x[3] for x in pessoas]) / N
g = 1
for i in range(16):
    salarios = [x[3] for x in pessoas if (x[0] == g and x[2] == i and x[3] != 0)]
    print(i, sum(salarios) / len(salarios))
