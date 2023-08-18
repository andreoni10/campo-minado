#include <stdio.h>
#include <stdlib.h>
#include "ranking.h"
#include "jogo.h"





int main()
{




    int a;
    int matrizCampo[10][10];
    int matrizTela[10][10];
    int i, j, x, y, opcao;








    printf("            **********         *********         ***        ***   ********   **********  \n");
    printf("            **********        ***********        *** *    * ***   **    **   **********  \n");
    printf("            ***              ****     ****       ***  *  *  ***   **    **   ***    ***  \n");
    printf("            ***             ***************      ***   **   ***   ********   ***    ***  \n");
    printf("            ***            ****         ****     ***        ***   ***        ***    ***  \n");
    printf("            **********    ****           ****    ***        ***   ***        **********  \n");
    printf("            **********   ****             ****   ***        ***   ***        **********  \n");

    printf("\n/////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n\n");

    printf("        ***        ***   ***   ***       ***         *********         *******      **********  \n");
    printf("        *** *    * ***   ***   *** *     ***        ***********        ***    *     **********  \n");
    printf("        ***  *  *  ***   ***   ***  *    ***       ****     ****       ***     *    ***    ***  \n");
    printf("        ***   **   ***   ***   ***   *   ***      ***************      ***      *   ***    ***  \n");
    printf("        ***        ***   ***   ***    *  ***     ****         ****     ***     *    ***    ***  \n");
    printf("        ***        ***   ***   ***     * ***    ****           ****    ***    *     **********  \n");
    printf("        ***        ***   ***   ***       ***   ****             ****   *******      **********  \n");

    do
    {
        system("color 1E");


        printf("\n\n---- MENU ----");
        printf("\n\n1. INICIAR\n");
        printf("2. INSTRUCOES\n");
        printf("3. SAIR");


        printf("\n\nInforme a opcao desejada: ");
        scanf(" %d", &a);

        system("cls");

        switch(a)
        {

        case 1:

            system("cls");
            fflush(stdin);
            printf("Digite seu nome: ");
            gets(jogador.usuario);


            jogo(x,y);

            system("cls");

            break;


        case 2:

            system("cls");
            printf("Instrucoes: ");
            printf("\n\nTente escolher os espacos de forma que nao acione nenhuma bomba.\n");
            printf("As coordenadas vao de (0,0) ate (9,9).\n");
            printf("Caso o espaco escolhido nao possua uma bomba, o numero mostrado indica o numero de bombas em volta daquele espaco.\n");
            printf("Encontre todos os espacos vazios para vencer o jogo!\n\n\n");


            break;

        case 3:

            system("cls");
            printf("Deseja mesmo sair?\n\n");
            printf("1. SIM\n");
            printf("2. NAO\n");
            printf("\nDigite a opcao desejada: ");
            scanf(" %d", &a);

            if(a == 1)
            {

                return 0;
            }

            break;

        default:
            printf("Erro - Reinicie o jogo");
            return 0;

        }


    }
    while(opcao);




    return 0;
}