#include <stdio.h>
#include "function.h"

int main()
{
    int numero1, numero2;
    int escolha;
    int op = 0;

    while (op != 2)
    {
        printf("\n----- Calculadora Simples -----\n");
        printf("1. Somar\n");
        printf("2. Subtrair\n");
        printf("3. Dividir\n");
        printf("4. Multiplicar\n");
        printf("5. Sair\n");

        printf("\nEscolha uma opcao: ");
        scanf("%d", &escolha);

        if (escolha == 5)
        {
            printf("Saindo...\n");
            op = 1;
        }
        else
        {
            printf("Digite o primeiro numero: ");
            scanf("%d", &numero1);

            printf("Digite o segundo numero: ");
            scanf("%d", &numero2);

            if (escolha == 1)
            {
                printf("Resultado: %d\n", soma(numero1, numero2));
            }
            else if (escolha == 2)
            {
                printf("Resultado: %d\n", subtrair(numero1, numero2));
            }
            else if (escolha == 3)
            {
                if (numero2 == 0)
                {
                    printf("Nao e possivel dividir por zero!\n");
                }
                else
                {
                    printf("Resultado: %d\n", dividir(numero1, numero2));
                }
            }
            else if (escolha == 4)
            {
                printf("Resultado: %d\n", multiplicar(numero1, numero2));
            }
            else
            {
                printf("Opcao invalida!\n");
            }
        }
    }

    return 0;
}