#include <stdio.h>

int main() {
    // Deklarasi variabel
    float rupiah, dollar;
    const float kurs = 14250.0;  // Kurs konversi 1 Dollar = Rp. 14.250

    // Input jumlah rupiah dari pengguna
    printf("Masukkan jumlah Rupiah (Rp): ");
    scanf("%f", &rupiah);

    // Konversi Rupiah ke Dollar
    dollar = rupiah / kurs;

    // Output hasil konversi
    printf("Jumlah Dollar ($) yang diterima: %.2f\n", dollar);

    return 0;
}
