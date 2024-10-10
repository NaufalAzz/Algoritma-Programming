#include <stdio.h>

int main() {
    int detik, jam, menit, sisa_detik;

    printf("Masukkan jumlah detik: ");
    scanf("%d", &detik);

    // Hitung jumlah jam
    jam = detik / 3600;

    // Hitung sisa detik setelah dikonversi menjadi jam
    sisa_detik = detik % 3600;

    // Hitung jumlah menit dari sisa detik
    menit = sisa_detik / 60;

    // Hitung sisa detik setelah dikonversi menjadi menit
    sisa_detik = sisa_detik % 60;

    // Tampilkan hasil
    printf("%d detik sama dengan %d jam %d menit %d detik\n", detik, jam, menit, sisa_detik);

    return 0;
}