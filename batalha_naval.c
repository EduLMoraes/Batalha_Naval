#include <stdio.h>
#include <time.h>

// Verdadeiro
#define true 1

// Falso
#define false 0

// Pra ajudar no desenvolvimento, tipo booliano.
#define bool int

void menu();
void limpar_terminal();
void game();
void instruir();

int main()
{
    bool jogando = false;
    int escolha;

    while (true)
    {
        if (jogando == false)
        {

            menu();
            scanf("\n%d", &escolha);
        }

        if (escolha == 1)
        {
            jogando = true;
            game(&jogando);
        }
        else if (escolha == 2)
        {
            instruir();
        }
        else
        {
            return 0;
        }
    }
}

void menu()
{

    printf(" _______________________________\n");
    printf("/<<<<<<<< Batalha Naval >>>>>>>>\\\n");
    printf("|-------------------------------|\n");
    printf("|\t[1] Jogar\t\t|\n");
    printf("|\t[2] Instruções\t\t|\n");
    printf("|\t[3] Sair\t\t|\n");
}

void instruir()
{
    char next;
    limpar_terminal();

    printf("Batalha    naval    é    jogado    por    turnos.\n");
    printf("Você irá jogar contra a  máquina, o seu  objetivo\n");
    printf("é destruir todos os barcos inimigos antes que ele\n");
    printf("destrua os seus.\n\n");

    printf("---Barcos---\n");
    printf("a = Porta-Aviões;\n");
    printf("n = Navios-tanque;\n");
    printf("c = Contratorpedeiros;\n");
    printf("s = Submarino\n\n");

    printf("Seguem algumas regras do jogo abaixo:\n");
    printf("\p1) Escolha uma posição  para  colocar  o barco,\n");
    printf("\tapós, informe a direção que ele ficará apontado.\n");

    printf("Pág 01: Digite 1 e pressione ENTER para continuar...");
    scanf("\n%c", &next);

    limpar_terminal();

    printf("\nExemplo de entrada aceitável:\n");
    printf("Aeroporto\n");
    printf("Ponto inicial: B5\n");
    printf("Virado para: B0\n");

    printf("\nSaída:\n");
    printf("+ |0 1 2 3 4 5 6 7 8 9 |\n");
    printf("==|====================|\n");
    printf("A |. . . . . . . . . . |\n");
    printf("B |a a a a a a . . . . |\n");
    printf("C |. . . . . . . . . . |\n");
    printf("D |. . . . . . . . . . |\n");
    printf("E |. . . . . . . . . . |\n");
    printf("F |. . . . . . . . . . |\n");
    printf("G |. . . . . . . . . . |\n");
    printf("H |. . . . . . . . . . |\n");
    printf("I |. . . . . . . . . . |\n");
    printf("J |. . . . . . . . . . |\n");

    printf("Pág 02: Digite 1 e pressione ENTER para continuar...");
    scanf("\n%c", &next);

    limpar_terminal();

    printf("\nExemplo de entrada aceitável:\n");
    printf("Porta-aviões:\n");
    printf("Ponto inicial: B1\n");
    printf("Virado para: A1\n");

    printf("\nSaída:\n");
    printf("+ |0 1 2 3 4 5 6 7 8 9 |\n");
    printf("==|====================|\n");
    printf("A |. a . . . . . . . . |\n");
    printf("B |. a . . . . . . . . |\n");
    printf("C |. a . . . . . . . . |\n");
    printf("D |. a . . . . . . . . |\n");
    printf("E |. a . . . . . . . . |\n");
    printf("F |. . . . . . . . . . |\n");
    printf("G |. . . . . . . . . . |\n");
    printf("H |. . . . . . . . . . |\n");
    printf("I |. . . . . . . . . . |\n");
    printf("J |. . . . . . . . . . |\n");
    printf("Pág 03: Digite 1 e pressione ENTER para continuar...");
    scanf("\n%c", &next);

    limpar_terminal();

    printf("\n2) Após posicionar todos os barcos, chega a hora\n");
    printf("de jogar, para dar o tiro, basta informar o  ponto\n");
    printf("que deseja acertar, em caso de acerto, no teu mapa\n");
    printf("de referência (de cima) mostrará o ponto com um X,\n");
    printf("já em caso de errar, mostrará um '*'.\n");
    printf("\n");
    
    printf("Pág 04: Digite 1 e pressione ENTER para continuar...");
    scanf("\n%c", &next);

    limpar_terminal();

    printf("Segue um exemplo:\n");
    printf("Posição do tiro: B1\n");
    printf("\nSaída:\n");
    printf("+ |0 1 2 3 4 5 6 7 8 9 |\n");
    printf("==|====================|\n");
    printf("A |. . . . . . . . . . |\n");
    printf("B |. X . . . . . . . . |\n");
    printf("C |. . . . . . . . . . |\n");
    printf("D |. . . . . . . . . . |\n");
    printf("E |. . . . . . . . . . |\n");
    printf("F |. . . . . . . . . . |\n");
    printf("G |. . . . . . . . . . |\n");
    printf("H |. . . . . . . . . . |\n");
    printf("I |. . . . . . . . . . |\n");
    printf("J |. . . . . . . . . . |\n");
    printf("+ |0 1 2 3 4 5 6 7 8 9 |\n");
    printf("==|====================|\n");
    printf("A |. a . . . . . . . . |\n");
    printf("B |. a . . . . . . . . |\n");
    printf("C |. a . . . . . . . . |\n");
    printf("D |. a . . . . . . . . |\n");
    printf("E |. a . . . . . . . . |\n");
    printf("F |. . . . . . . . . . |\n");
    printf("G |. . . . . . . . . . |\n");
    printf("H |. . . . . . . . . . |\n");
    printf("I |. . . . . . . . . . |\n");
    printf("J |. . . . . . . . . . |\n");
    printf("Pág 05: Digite 1 e pressione ENTER para continuar...");
    scanf("\n%c", &next);

    limpar_terminal();

    printf("Posição do tiro: B9\n");
    printf("\nSaída:\n");
    printf("+ |0 1 2 3 4 5 6 7 8 9 |\n");
    printf("==|====================|\n");
    printf("A |. . . . . . . . . . |\n");
    printf("B |. X . . . . . . . * |\n");
    printf("C |. . . . . . . . . . |\n");
    printf("D |. . . . . . . . . . |\n");
    printf("E |. . . . . . . . . . |\n");
    printf("F |. . . . . . . . . . |\n");
    printf("G |. . . . . . . . . . |\n");
    printf("H |. . . . . . . . . . |\n");
    printf("I |. . . . . . . . . . |\n");
    printf("J |. . . . . . . . . . |\n");
    printf("+ |0 1 2 3 4 5 6 7 8 9 |\n");
    printf("==|====================|\n");
    printf("A |. a . . . . . . . . |\n");
    printf("B |. a . . . . . . . . |\n");
    printf("C |. a . . . . . . . . |\n");
    printf("D |. a . . . . . . . . |\n");
    printf("E |. a . . . . . . . . |\n");
    printf("F |. . . . . . . . . . |\n");
    printf("G |. . . . . . . . . . |\n");
    printf("H |. . . . . . . . . . |\n");
    printf("I |. . . . . . . . . . |\n");
    printf("J |. . . . . . . . . . |\n");
    printf("Pág 06: Digite 1 e pressione ENTER para continuar...");
    scanf("\n%c", &next);

    limpar_terminal();

    printf("\n3) O  mesmo valerá  para  a  máquina,  caso  ela\n");
    printf("o acerte,  aparecerá  um  'X'  no  seu  barco,  do\n");
    printf("contrário, aparecerá um '*'.\n");
    printf("Pág 07: Digite 1 e pressione ENTER para voltar ao menu...");
    scanf("\n%c", &next);

    limpar_terminal(); 
}

void game(bool *jogando)
{
    // Declarando as matrizes
    char maq[10][10];
    char player[10][10];
    char refer[10][10];
    char ponto_inicial[2];
    char direcao[2];
    char tiro[2];
    char nome_barco[5] = {' ', 'a', 'n', 'c', 's', ' '};
    int barcos[4] = {5, 4, 3, 2};
    int barco = 0;
    int indice = 1;
    bool posicionando = true;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            maq[i][j] = '.';
            player[i][j] = '.';
            refer[i][j] = '.';
        }
    }

    // Posicionamento player
    while(posicionando){
        if (indice > 4){
            break;
        }
        switch(barco){
            case (0): printf("Porta-aviões:\n"); break;
            case (1): printf("Navios-tanque:\n"); break;
            case (2): printf("Contratorpedeiros:\n"); break;
            case (3): printf("Submarino:\n"); break;
        }

        printf("Ponto inicial: ");
        scanf("\n%s", ponto_inicial);
        printf("\nVirado para: ");
        scanf("\n%s", direcao);
        

        int p_i1 = ponto_inicial[0] - 48;
        int dir1 = direcao[0] - 48;
        int p_i2 = ponto_inicial[1] - 48;
        int dir2 = direcao[1] - 48;

        if (p_i1 > 9)
        {
            if (p_i1 > 48)
            {
                p_i1 -= 49;
            }
            else if (p_i1 > 16)
            {
                p_i1 -= 17;
            }
        }
        if (dir1 > 9)
        {
            if (dir1 > 48)
            {
                dir1 -= 49;
            }
            else if (dir1 > 16)
            {
                dir1 -= 17;
            }
        }

        if (p_i2 > 9)
        {
            if (p_i2 > 48)
            {
                p_i2 -= 49;
            }
            else if (p_i2 > 16)
            {
                p_i2 -= 17;
            }
        }
        if (dir2 > 9)
        {
            if (dir2 > 48)
            {
                dir2 -= 49;
            }
            else if (dir2 > 16)
            {
                dir2 -= 17;
            }
        }
        posicionar(player, dir1, dir2, p_i1, p_i2, barcos[barco], nome_barco[indice], &barco, &indice);
        limpar_terminal();
        exibir_tabuleiro(player);
    }
    
    barco = 0;
    indice = 1;
    // Posicionamento máquina
    while(posicionando){
        if (indice > 4){
            break;
        }
        
        int p_i1 = rand() % 9;
        int p_i2 = rand() % 9;
        int dir1 = p_i1;
        int dir2 = rand() % 9;
    
        posicionar(maq, dir1, dir2, p_i1, p_i2, barcos[barco], nome_barco[indice], &barco, &indice);
    }

    printf("Vamos jogar >:)\n");

    while(*jogando){
        if(ha_barco(maq) == false){
            printf("VITÓRIA!!!\n");
            exit(0);
        }else if(ha_barco(player) == false){
            printf("DERROTA!!!\n");
            exit(0);
        }

        printf("\nPosição do tiro: ");
        scanf("\n%s", tiro);
        

        int pos_x = tiro[0] - 48;
        int pos_y = tiro[1] - 48;

        if (pos_x > 9)
        {
            if (pos_x > 48)
            {
                pos_x -= 49;
            }
            else if (pos_x > 16)
            {
                pos_x -= 17;
            }
        }
        if (pos_y > 9)
        {
            if (pos_y > 48)
            {
                pos_y -= 49;
            }
            else if (pos_y > 16)
            {
                pos_y -= 17;
            }
        }

        if(maq[pos_x][pos_y] != '.' && maq[pos_x][pos_y] != '*' && maq[pos_x][pos_y] != 'x'){
            maq[pos_x][pos_y] = 'x';
            refer[pos_x][pos_y] = 'x';
        }else if(maq[pos_x][pos_y] == '.'){
            maq[pos_x][pos_y] = '*';
            refer[pos_x][pos_y] = '*';
        }

        pos_x = rand() % 9;
        pos_y = rand() % 9;

        if(player[pos_x][pos_y] != '.' && player[pos_x][pos_y] != '*' && player[pos_x][pos_y] != 'x'){
            player[pos_x][pos_y] = 'x';
        }else if(player[pos_x][pos_y] == '.'){
            player[pos_x][pos_y] = '*';
        }

        limpar_terminal();
        exibir_tabuleiro(refer);
        exibir_tabuleiro(player);

    }
}

void posicionar(char matriz[10][10], int pos_direcao1, int pos_direcao2, int pos_inicial1, int pos_inicial2, int casas, char letra, int *barco, int*indice)
{
    if ((pos_direcao1 == pos_inicial1) && ((pos_direcao2 != pos_inicial2) && (pos_direcao2 >= pos_inicial2)))
    {
        for (int i = pos_inicial2; i < (casas+pos_inicial2); i++)
        {
            if(matriz[pos_inicial1][i] == '.'){
                matriz[pos_inicial1][i] = letra;
            }else{
                (*barco)--;
                if (*indice > 0){
                    (*indice)--;
                }
                break;
                
            }
        }
        (*barco)++;
        (*indice)++;
    }
    else if (((pos_direcao1 != pos_inicial1) && (pos_direcao1 >= pos_inicial1)) && (pos_direcao2 == pos_inicial2))
    {
        for (int i = pos_inicial1; i < (casas+pos_inicial1); i++)
        {
            if(matriz[i][pos_inicial2] == '.'){
                matriz[i][pos_inicial2] = letra;
            }else{
                (*barco)--;
                if (*indice > 0){
                    (*indice)--;
                }
                break;
            }
        }
        (*barco)++;
        (*indice)++;
    }else if ((pos_direcao1 == pos_inicial1) && ((pos_direcao2 != pos_inicial2) && (pos_direcao2 <= pos_inicial2)))
    {
        for (int i = pos_direcao2; i < (casas+pos_direcao2); i++)
        {
            if(matriz[pos_direcao1][i] == '.'){
                matriz[pos_direcao1][i] = letra;
            }else{
                (*barco)--;
                if (*indice > 0){
                    (*indice)--;
                }
                break;
            }
        }
        (*barco)++;
        (*indice)++;
    }
    else if (((pos_direcao1 != pos_inicial1) && (pos_direcao1 <= pos_inicial1)) && (pos_direcao2 == pos_inicial2))
    {
        for (int i = pos_direcao1; i < (casas+pos_direcao1); i++)
        {
            if(matriz[i][pos_direcao2] == '.'){
                matriz[i][pos_direcao2] = letra;
            }else{
                (*barco)--;
                if (*indice > 0){
                    (*indice)--;
                }
                break;
            }
        }
        (*barco)++;
        (*indice)++;
    }

    
}

void exibir_tabuleiro(char matriz[10][10]){
    char linhas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    printf(" |");
    for(int i = 0; i < 10; i++){
        printf(" %i", i);
    }
    printf("\n=|=====================|");

    for (int i = 0; i < 10; i++)
    {
        printf("\n%c| ", linhas[i]);
        for (int j = 0; j < 10; j++)
        {
            printf("%c ", matriz[i][j]);
        }
        printf("|");
    }
    printf("\n=|=====================|\n");

}

bool ha_barco(char matriz[10][10]){
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if(matriz[i][j] != '.' && matriz[i][j] != '*' && matriz[i][j] != 'x'){
                return true;
            }
        }
    }
    return false;
}

void limpar_terminal()
{
    if (__linux__)
    {
        system("clear");
    }
    else
    {
        system("cls");
    }
}