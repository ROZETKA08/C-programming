// функция сортировки из 7-ой лабораторной работы

void sortirovka(char *words[], int c) {
    int i;
    int j;
    for (i = 0; i < c - 1; i++) {
        for (j = 0; j < c - 1 - i; j++) {
            if (sravn(words[j], words[j + 1]) > 0) {
                // добавили комментарий в этот же файл по заданию 9
                smena(words, j);
            }
        }
    }
}
