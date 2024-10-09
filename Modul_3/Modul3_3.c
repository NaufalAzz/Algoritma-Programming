#include <stdio.h>
#define PHI 3.14159265359  // Definisikan konstanta nilai Phi

int main() {
    // Deklarasi variabel
    float diameter = 12.0;
    float radius = diameter / 2;
    float volume, luas_permukaan;

    // Rumus volume bola
    volume = (4.0 / 3.0) * PHI * (radius * radius * radius);

    // Rumus luas permukaan bola
    luas_permukaan = 4 * PHI * (radius * radius);

    // Output hasil
    printf("Diameter bola basket: %.2f cm\n", diameter);
    printf("Jari-jari bola basket: %.2f cm\n", radius);
    printf("Volume bola: %.2f cm^3\n", volume);
    printf("Luas permukaan bola: %.2f cm^2\n", luas_permukaan);

    return 0;
}