#ifndef JOGO_H_INCLUDED
#define JOGO_H_INCLUDED



#endif // JOGO_H_INCLUDED



void jogo(int x, int y)
{

    int i, j, opcao;
    int matrizCampo[10][10];
    int matrizTela[10][10];



    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            matrizTela[i][j] = 254; // 254 = quadrado
        }
    }
    // Coordenadas da matriz do campo minado
    // 9 = * = bomba

    matrizCampo[0][0] = 2;
    matrizCampo[0][1] = 9;
    matrizCampo[0][2] = 2;
    matrizCampo[0][3] = 1;
    matrizCampo[0][4] = 1;
    matrizCampo[0][5] = 2;
    matrizCampo[0][6] = 3;
    matrizCampo[0][7] = 9;
    matrizCampo[0][8] = 1;
    matrizCampo[0][9] = 0;


    matrizCampo[1][0] = 9;
    matrizCampo[1][1] = 3;
    matrizCampo[1][2] = 9;
    matrizCampo[1][3] = 2;
    matrizCampo[1][4] = 2;
    matrizCampo[1][5] = 9;
    matrizCampo[1][6] = 9;
    matrizCampo[1][7] = 3;
    matrizCampo[1][8] = 2;
    matrizCampo[1][9] = 1;

    matrizCampo[2][0] = 2;
    matrizCampo[2][1] = 2;
    matrizCampo[2][2] = 2;
    matrizCampo[2][3] = 9;
    matrizCampo[2][4] = 3;
    matrizCampo[2][5] = 3;
    matrizCampo[2][6] = 3;
    matrizCampo[2][7] = 2;
    matrizCampo[2][8] = 9;
    matrizCampo[2][9] = 1;

    matrizCampo[3][0] = 9;
    matrizCampo[3][1] = 1;
    matrizCampo[3][2] = 1;
    matrizCampo[3][3] = 1;
    matrizCampo[3][4] = 2;
    matrizCampo[3][5] = 9;
    matrizCampo[3][6] = 1;
    matrizCampo[3][7] = 2;
    matrizCampo[3][8] = 2;
    matrizCampo[3][9] = 2;

    matrizCampo[4][0] = 2;
    matrizCampo[4][1] = 2;
    matrizCampo[4][2] = 1;
    matrizCampo[4][3] = 0;
    matrizCampo[4][4] = 1;
    matrizCampo[4][5] = 2;
    matrizCampo[4][6] = 2;
    matrizCampo[4][7] = 2;
    matrizCampo[4][8] = 9;
    matrizCampo[4][9] = 1;

    matrizCampo[5][0] = 1;
    matrizCampo[5][1] = 9;
    matrizCampo[5][2] = 2;
    matrizCampo[5][3] = 1;
    matrizCampo[5][4] = 1;
    matrizCampo[5][5] = 1;
    matrizCampo[5][6] = 9;
    matrizCampo[5][7] = 3;
    matrizCampo[5][8] = 2;
    matrizCampo[5][9] = 2;

    matrizCampo[6][0] = 1;
    matrizCampo[6][1] = 1;
    matrizCampo[6][2] = 2;
    matrizCampo[6][3] = 9;
    matrizCampo[6][4] = 1;
    matrizCampo[6][5] = 1;
    matrizCampo[6][6] = 1;
    matrizCampo[6][7] = 3;
    matrizCampo[6][8] = 9;
    matrizCampo[6][9] = 2;

    matrizCampo[7][0] = 0;
    matrizCampo[7][1] = 1;
    matrizCampo[7][2] = 2;
    matrizCampo[7][3] = 2;
    matrizCampo[7][4] = 1;
    matrizCampo[7][5] = 0;
    matrizCampo[7][6] = 1;
    matrizCampo[7][7] = 3;
    matrizCampo[7][8] = 9;
    matrizCampo[7][9] = 2;

    matrizCampo[8][0] = 0;
    matrizCampo[8][1] = 1;
    matrizCampo[8][2] = 9;
    matrizCampo[8][3] = 2;
    matrizCampo[8][4] = 1;
    matrizCampo[8][5] = 1;
    matrizCampo[8][6] = 1;
    matrizCampo[8][7] = 9;
    matrizCampo[8][8] = 2;
    matrizCampo[8][9] = 1;

    matrizCampo[9][0] = 0;
    matrizCampo[9][1] = 1;
    matrizCampo[9][2] = 1;
    matrizCampo[9][3] = 2;
    matrizCampo[9][4] = 9;
    matrizCampo[9][5] = 1;
    matrizCampo[9][6] = 1;
    matrizCampo[9][7] = 1;
    matrizCampo[9][8] = 1;
    matrizCampo[9][9] = 0;


    printf("\n\n--- CAMPO MINADO --- \n");

    for(i=0; i<10; i++)
    {
        for(j=0; j<10; j++)
        {
            printf("| %c | ", matrizTela[i][j]);
        }
        printf("\n");
    }
    printf("Informe a posicao da linha (x): ");
    scanf(" %d", &x);
    printf("Informe a posicao da coluna (y): ");
    scanf(" %d", &y);


    while(opcao)
    {

        if (matrizCampo[x][y] == 9)
        {
            matrizTela[x][y] = 42;

            system("cls");
            system("color 0C");
            printf("\n--- CAMPO MINADO --- \n");
            for(i=0; i<10; i++)
            {
                for(j=0; j<10; j++)
                {

                    if (matrizTela[i][j] >= 9)
                    {
                        printf("| %c | ", matrizTela[i][j]);
                    }

                    else
                    {
                        printf("| %d | ", matrizTela[i][j]);
                    }

                }

                printf("\n");

}
            printf("\n  ### GAME OVER ###");

            printf("\n\n\n ---- RANKING ----\n");
            printf("\n Nome: %s /// Pontos: %d", jogador.usuario, jogador.pontos);
            getche();

            return 0;

        }

        else
        {
            matrizTela[x][y] = matrizCampo[x][y];
            jogador.pontos++;

        }


        printf("\n--- CAMPO MINADO --- \n");
        for(i=0; i<10; i++)
        {
            for(j=0; j<10; j++)
            {

                if (matrizTela[i][j] >= 9)
                {
                    printf("| %c | ", matrizTela[i][j]);
                }

                else
                {
                    printf("| %d | ", matrizTela[i][j]);
                }

            }

            printf("\n");

        }


        printf("Informe a posicao da linha (x): ");
        scanf(" %d", &x);
        printf("Informe a posicao da coluna (y): ");
        scanf(" %d", &y);
    }




    return;
}
