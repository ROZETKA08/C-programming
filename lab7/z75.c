#include <stdio.h>
#include <string.h>

int razb(char text[], char *words[]) {
    int c = 0;
    char *r;
    r = strtok(text, " \n");
    while (r != NULL) {
        words[c] = r;
        c++;
        r = strtok(NULL, " \n");
    }
    return c;
}

int sravn(char *a, char *b) {
    return strcmp(a, b);
}

void smena(char *words[], int j) {
    char *p;
    p = words[j];
    words[j] = words[j + 1];
    words[j + 1] = p;
}

void sortirovka(char *words[], int c) {
    int i;
    int j;
    for (i = 0; i < c - 1; i++) {
        for (j = 0; j < c - 1 - i; j++) {
            if (sravn(words[j], words[j + 1]) > 0) {
                smena(words, j);
            }
        }
    }
}

int main() {
    char text[100] = "";
    char *words[100];
    int c;
    int i;
    printf("Введите слова: ");
    fgets(text, sizeof(text), stdin);
    c = razb(text, words);
    sortirovka(words, c);
    printf("Слова по алфавиту:");
    for (i = 0; i < c; i++) {
        printf(" %s", words[i]);
    }
    printf("\n");
    printf("Количество слов: %d\n", c);
    return 0;
}