#include <stdio.h>

int main() {
    char nama[100];
    printf("Hello, siapa nama lengkapmu? \n");                   // Menampilkan pesan awal
    fgets(nama, sizeof(nama), stdin);                                   // Mengambil input nama lengkap dari pengguna
    printf("Selamat Datang %s dalam Pemrograman C!\n", nama);           // Menampilkan pesan selamat datang
    return 0;
}
 