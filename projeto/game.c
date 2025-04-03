#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

// largura barra
#define LARGURA_BARRA 66
// maximo de jogadores
#define MAX_JOGADORES 4
// maximo de rodadas
#define MAX_RODADAS 10

int main()
{
    // primeiro passo - > limpa terminal e imprime o logo do jogo

    system("clear");

    printf("   ██████   █████  ███    ███ ███████      ██████   █████  ██████  ██████  \n");
    printf("  ██       ██   ██ ████  ████ ██          ██       ██   ██ ██   ██ ██   ██ \n");
    printf("  ██   ███ ███████ ██ ████ ██ █████       ██       ███████ ██   ██ ██████  \n");
    printf("  ██    ██ ██   ██ ██  ██  ██ ██          ██       ██   ██ ██   ██ ██   ██ \n");
    printf("   ██████  ██   ██ ██      ██ ███████      ██████  ██   ██ ██████  ██   ██ \n");
    printf("\033[0m");

    printf("   ");
    for (int i = 0; i <= LARGURA_BARRA; i++)
    {
        printf("\r   ");
        for (int j = 0; j < i; j++)
        {
            printf("█");
        }
        for (int j = i; j < LARGURA_BARRA; j++)
        {
            printf(" ");
        }
        printf(" %d%%", (i * 100) / LARGURA_BARRA);
        fflush(stdout);
        usleep(20000);
    }

    system("clear");

    srand(time(NULL));

    const char *valores[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
    const char *naipes[] = {"♠", "♣", "♥", "♦"};
    const char *cores[] = {"\033[1;37m", "\033[1;37m", "\033[1;31m", "\033[1;31m"};

    int num_jogadores, num_rodadas;
    int pontos[MAX_JOGADORES] = {0};

    // qtd de jogadores
    do
    {
        printf("Quantos jogadores? (2 a 4): ");
        scanf("%d", &num_jogadores);
        system("clear");
    } while (num_jogadores < 2 || num_jogadores > MAX_JOGADORES);

    // qtd de rodadas
    do
    {
        printf("Quantas rodadas? (1 a 10): ");
        scanf("%d", &num_rodadas);
        system("clear");
    } while (num_rodadas < 1 || num_rodadas > MAX_RODADAS);

    printf("Iniciando o jogo com %d jogadores e %d rodadas!\n", num_jogadores, num_rodadas);

    int rodada = 1;
    while (1)
    {

        system("clear");

        printf("RODADA %d!\n", rodada);

        int valores_cartas[MAX_JOGADORES];
        int maior_valor = -1;
        int vencedor = -1;
        int empate = 0;
        const char *cores_cartas[MAX_JOGADORES];

        // Sorteia cartas e define cores para cada jogador
        for (int i = 0; i < num_jogadores; i++)
        {
            valores_cartas[i] = rand() % 13;
            cores_cartas[i] = cores[rand() % 4];
        }

        // Exibir as cartas lado a lado
        printf("\n");
        for (int i = 0; i < num_jogadores; i++)
            printf("%s┌─────────┐   ", cores_cartas[i]);
        printf("\n");

        for (int i = 0; i < num_jogadores; i++)
            printf("│ %-2s      │   ", valores[valores_cartas[i]]);
        printf("\n");

        for (int i = 0; i < num_jogadores; i++)
            printf("│         │   ");
        printf("\n");

        for (int i = 0; i < num_jogadores; i++)
            printf("│    %s    │   ", naipes[rand() % 4]);
        printf("\n");

        for (int i = 0; i < num_jogadores; i++)
            printf("│         │   ");
        printf("\n");

        for (int i = 0; i < num_jogadores; i++)
            printf("│      %-2s │   ", valores[valores_cartas[i]]);
        printf("\n");

        for (int i = 0; i < num_jogadores; i++)
            printf("└─────────┘   \033[0m"); // Resetando a cor aqui
        printf("\n");

        // Verifica quem tem a maior carta
        for (int i = 0; i < num_jogadores; i++)
        {
            if (valores_cartas[i] > maior_valor)
            {
                maior_valor = valores_cartas[i];
                vencedor = i;
                empate = 0;
            }
            else if (valores_cartas[i] == maior_valor)
            {
                empate = 1;
            }
        }

        // Se houve empate, repete a rodada
        if (empate)
        {
            printf("\n Empate! Repetindo a rodada...\n");
            sleep(2);
            continue;
        }

        // Atribui ponto ao vencedor
        pontos[vencedor]++;
        printf("\nJogador %d venceu esta rodada!\n", vencedor + 1);

        // Exibe pontuação atual antes de limpar
        printf("\nPontuação Atual: \n");
        for (int i = 0; i < num_jogadores; i++)
        {
            printf("Jogador %d: %d pontos\n", i + 1, pontos[i]);
        }

        // Verifica se alguém ganhou
        if (pontos[vencedor] == num_rodadas)
        {
            printf("\nJOGADOR %d É O GRANDE VENCEDOR! \n", vencedor + 1);
            break;
        }

        // Espera 2 segundos antes da próxima rodada e limpa a tela
        sleep(2);
        system("clear");

        rodada++;
    }

    return 0;
}
