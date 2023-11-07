#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char jogador[35];
    char posicao;
    int forca;
} Jogador;

void obterInformacoes(const char *jogadorInfo, char *posicao, int *forca) {
    char *token = strtok((char*)jogadorInfo, ";");
    token = strtok(NULL, ";"); // Move para o segundo token (posição)

    if (token != NULL) {
        *posicao = token[0]; // Atribui a posição
        token = strtok(NULL, ";"); // Move para o terceiro token (força)
        if (token != NULL) {
            *forca = atoi(token); // Atribui a força
        }
    }
}

double calcularForcaTotal(Jogador *jogadores) {
    int forcaTotal = 0;
    int G = 0, L = 0, Z = 0, V = 0, M = 0, A = 0;

    for (int i = 0; i < 11; i++) {
        switch (jogadores[i].posicao) {
            case 'G':
                G += jogadores[i].forca;
                break;
            case 'L':
                L += jogadores[i].forca;
                break;
            case 'Z':
                Z += jogadores[i].forca;
                break;
            case 'V':
                V += jogadores[i].forca;
                break;
            case 'M':
                M += jogadores[i].forca;
                break;
            case 'A':
                A += jogadores[i].forca;
                break;
            default:
                break;
        }
    }

    forcaTotal = (8 * G + 10 * L + 5 * Z + 8 * V + 11 * M + 12 * A);
    double forcaTotalComDecimais = (double)forcaTotal / 100.0;
    return forcaTotalComDecimais;
}

int main() {
    Jogador time1[11];
    Jogador time2[11];
    char timelido1[31];
    char timelido2[31];

    fgets(timelido1, 31, stdin);
  timelido1[strcspn(timelido1, "\n")] = '\0';

    for (int i = 0; i < 11; i++) {
        fgets(time1[i].jogador, 35, stdin);
        obterInformacoes(time1[i].jogador, &time1[i].posicao, &time1[i].forca);
    }
     fgets(timelido2, 31, stdin);
    timelido2[strcspn(timelido2, "\n")] = '\0';
    for (int i = 0; i < 11; i++) {
        fgets(time2[i].jogador, 35, stdin);
        obterInformacoes(time2[i].jogador, &time2[i].posicao, &time2[i].forca);
    }

    double forcaTotalTime1 = calcularForcaTotal(time1);
    double forcaTotalTime2 = calcularForcaTotal(time2);

    printf("%s: %.2lf de forca\n",timelido1, forcaTotalTime1);
    printf("%s: %.2lf de forca\n",timelido2, forcaTotalTime2);

  if (forcaTotalTime1 > forcaTotalTime2) {
          printf("%s eh mais forte\n",timelido1);
      } else if (forcaTotalTime1 < forcaTotalTime2) {
          printf("%s eh mais forte\n",timelido2);
      } else {
          printf("Os times tem a mesma força!\n");
      }

      return 0;
  }
