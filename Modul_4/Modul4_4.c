#include <stdio.h>

int main() {
    // Deklarasi variabel
    int durasi;
    int tarif_per_jam_pertama = 15000;
    int tarif_jam_berikutnya;
    int total_bayar;

    // Input durasi menonton
    printf("Masukkan durasi menonton film (jam): ");
    scanf("%d", &durasi);

    // Hitung tarif jam berikutnya (50% dari tarif pertama)
    tarif_jam_berikutnya = tarif_per_jam_pertama * 0.5;

    // Menghitung total biaya
    if (durasi == 1) {
        total_bayar = tarif_per_jam_pertama;
    } else {
        total_bayar = tarif_per_jam_pertama + (durasi - 1) * tarif_jam_berikutnya;
    }

    // Menampilkan total yang harus dibayar
    printf("Total yang harus dibayar: Rp %d\n", total_bayar);

    return 0;
}
