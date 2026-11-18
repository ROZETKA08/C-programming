#include <stdio.h>

#define N 20

int main() {
    double E = 0.0;
    short iq[N] = {575, -451, -12345, -13987, -3, 8675, -451, -12345, -13987, -3, 100, 22308, 32000, -9323, 12, 100, 22308, 32000, -9323, 12};
    for(int i = 0; i < N/2; i++) {
        printf("s[%d] = %.1f + j*(%.1f)\n", i, (double)iq[i], (double)iq[i]);
        E += ((double)iq[i*2] * iq[i*2] + (double)iq[i*2+1] * iq[i*2+1]);
    }
    printf("Energy E = %.1f\n", E);
    short max = iq[0];
    int g = 0;
    for(int z = 1; z < N/2; z++) {
        if (iq[z] > max) {
            max = iq[z];
            g = z;
        }
    }
    printf("max = %hd, index = %d\n", max, g);
    return 0;
}