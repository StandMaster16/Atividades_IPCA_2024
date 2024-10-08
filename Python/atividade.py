#Atividade - Convocação de Alunos para o Futebol da EST-UEA

#Disclaimer: Embora o código esteja diferente do que fiz em sala de aula quinta-feira (22/08),
#aprendi recentemente sobre: while True, try, except, ValueError e raise,
#então resolvi complementar com todas as possibilidades possíveis.

print("Para iniciar a convocação digite 1, para terminar digite FIM quando for pedido o nome")
def convocacao():
    n_alunos = 0
    nome = ""
    mulheres = 0
    homens = 0
    total_idades = 0
    media = 0
    while nome != "FIM":
        while True:
            try:
                nome = str(input("Digite o nome: "))
                break
            except ValueError:
                print("Formato inválido")
        if nome == "FIM":
            break
        else:
            n_alunos += 1
        while True:
            try:
                sexo = str(input("Digite o sexo: "))
                if sexo == "masculino" or sexo == "Masculino":
                    homens += 1
                elif sexo == "feminino" or sexo == "Feminino":
                    mulheres += 1
                else:
                    raise ValueError
                break
            except ValueError:
                print("Formato inválido")
        while True:
            try:
                idade = int(input("Digite a sua idade: "))
                if idade < 0:
                    raise ValueError
                break
            except ValueError:
                print("Digite uma idade válida")
        total_idades = total_idades + idade
        if n_alunos != 0:
            media = total_idades/n_alunos
        print("Aluno cadastrado com sucesso!")
    print("Alunos cadastrados:", n_alunos, "\nQuantidade de Mulheres:", mulheres, "\nQuantidade de Homens:", homens, "\nMédia das idades:", media)
while True:
    try:
        iniciar = int(input())
        if iniciar == 1:
            convocacao()
        else:
            raise ValueError
        break
    except ValueError:
        print("Digite 1 para iniciar")