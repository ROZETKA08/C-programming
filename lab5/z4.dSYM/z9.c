#include <stdio.h>

int pokoy(int hr[]) {
    int pokoy = 0;
    for (int i = 0; i < 24; i++) {
        if (hr[i] < 100) {
            pokoy++;
        }
    }
    return pokoy;
}

int razminka(int hr[]) {
    int razminka = 0;
    for (int i = 0; i < 24; i++) {
        if (hr[i] >= 100 && hr[i] < 139) {
            razminka++;
        }
    }
    return razminka;
}

int kardio(int hr[]) {
    int kardio = 0;
    for (int i = 0; i < 24; i++) {
        if (hr[i] >= 140 && hr[i] < 169) {
            kardio++;
        }
    }
    return kardio;
}

int pik(int hr[]) {
    int pik = 0;
    for (int i = 0; i < 24; i++) {
        if (hr[i] >= 170) {
            pik++;
        }
    }
    return pik;
}

int srpuls(int hr[]) {
    int sum = 0;
    for (int i = 0; i < 24; i++) {
        sum += hr[i];
    }
    return sum / 24;
}

void seriya(int hr[]) {
    int dlina = 0;
    int maxdlina = 0;
    int nach = 0;
    int maxnach = 0;
    int maxkon = 0;

    for (int i = 0; i < 24; i++) {
        if (hr[i] >= 140) {
            if (dlina == 0) {
                nach = i;
            }
            dlina++;
            if (dlina > maxdlina) {
                maxdlina = dlina;
                maxnach = nach;
                maxkon = i;
            }
        } else {
            dlina = 0;
        }
    }
    printf("Максимальная длина серии: %d\n", maxdlina);
    printf("Начало серии: %d\n", maxnach);
    printf("Конец серии: %d\n", maxkon);
}

int main() {
    int hr[24] = {85, 92, 98, 105, 118, 130, 142, 148, 151, 147, 150, 160, 165, 158, 143, 138, 120, 110, 104, 96, 90, 88, 150, 152};
    printf("Сколько секунд пульс был в зонах:\n");
    printf("Покой: %d\n", pokoy(hr));
    printf("Разминка: %d\n", razminka(hr));
    printf("Кардио: %d\n", kardio(hr));
    printf("Пик: %d\n", pik(hr));
    printf("Средний пульс: %d\n", srpuls(hr));
    seriya(hr); 
    return 0;
}