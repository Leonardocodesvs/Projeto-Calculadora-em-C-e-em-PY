# - CALCULADORA EM PY - 
from function import soma, subtrair, dividir, multiplicar 


while True:

    print("-----CALCULADORA SIMPLES-----")
    print("1. Somar -")
    print("2. Subtratir -")
    print("3. Dividir -")
    print("4. Multiplicar -")
    print("5. Sair -")

    choose = int(input("Escolha uma opção: "))

    if choose == 5:
        print("Saindo...")
        break
    
    num1 = int(input("Digite o primeiro numero: "))
    num2 = int(input("Digite o segundo numero: "))


    if choose == 1: 
        resultado = soma(num1,num2)
        print("Resultado: ", resultado)

    elif choose == 2:
        resultado = subtrair(num1,num2) 
        print("Resultado: ", resultado)

    elif choose == 3:
        resultado = dividir(num1,num2) 
        print("Resultado: ", resultado)

    elif choose == 4:
        resultado = multiplicar(num1,num2)
        print("Resultado: ", resultado)  


    else:
        print("Opção inválida..")
        
