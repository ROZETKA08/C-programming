#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define pustota 0
#define derevo 1
#define ogon 2
#define voda 3

void zapolneniye(int *tekkadr, int n, int m) {
    for(int k = 0; k < n * m; k++) {
        int random = rand() % 100;
        if(random < 5) {
            tekkadr[k] = voda;
        } else if(random < 15) {
            tekkadr[k] = pustota;
        } else {
            tekkadr[k] = derevo;
        }
    }
    tekkadr[0] = ogon;
}

void vivodkartinki(int *tekkadr, int n, int m) {
    printf("\033[H\033[J");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            int simvol = tekkadr[i * m + j];
            if(simvol == pustota) {
                printf(". ");
            } else if(simvol == derevo) {
                printf("T ");
            } else if(simvol == ogon) {
                printf("t ");
            } else if(simvol == voda) {
                printf("~ ");
            }
        }
        printf("\n");
    }
}

void shag(int *tekkadr, int *sledkadr, int n, int m, int veroyatnost, int *gorit, int *sgorelo) {
    *gorit = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            sledkadr[i * m + j] = tekkadr[i * m + j];
            if(tekkadr[i * m + j] == ogon) {
                sledkadr[i * m + j] = pustota;
                (*sgorelo)++;
            } else if(tekkadr[i * m + j] == derevo) {
                    int ryadom = 0;
                    if(i > 0 && tekkadr[(i - 1) * m + j] == ogon) {
                        ryadom = 1;
                    }
                    if(j > 0 && tekkadr[i * m + (j - 1)] == ogon) {
                    ryadom = 1;
                    }
                    if(ryadom && rand() % 100 < veroyatnost) {
                    sledkadr[i * m + j] = ogon;
                    (*gorit)++;
                }
            }
        }
    }
}

static double now_s(void) {
    struct timespec ts;
    clock_gettime(CLOCK_MONOTONIC, &ts);
    return (double)ts.tv_sec + (double)ts.tv_nsec / 1e9;
}

int main(int argc, char *argv[]) {
    if argc < 4
    int n = atoi(argv[1]);
    int m = atoi(argv[2]);
    int tiks = atoi(argv[3]);
    int veroyatnost = atoi(argv[4]);
    int *tekkadr = calloc(n * m, sizeof(int));
    int *sledkadr = calloc(n * m, sizeof(int));
    srand(time(NULL));
    zapolneniye(tekkadr, n, m);
    vivodkartinki(tekkadr, n, m);

    int gorit = 1;
    int sgorelo = 0;
    double t = 0;

    printf("tick: 0  gorit: %d  sgorelo: %d\n", gorit, sgorelo);
    fflush(stdout); 
    usleep(50000);

    for(int k = 1; k <= tiks && gorit > 0; k++) {
        double t0 = now_s();
        shag(tekkadr, sledkadr, n, m, veroyatnost, &gorit, &sgorelo);
        t = t + (now_s() - t0);

        int *tmp = tekkadr;
        tekkadr = sledkadr;
        sledkadr = tmp;

        vivodkartinki(tekkadr, n, m);
        printf("тик: %d  горит: %d  сгорело: %d\n", k, gorit, sgorelo);
        fflush(stdout);
        usleep(50000);
    }
    printf("Время: %.6f с\n", t);

    free(tekkadr);
    free(sledkadr);
    return 0;
}