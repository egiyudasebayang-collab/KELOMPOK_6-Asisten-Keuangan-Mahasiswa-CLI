#include <stdio.h>

// deklarasi fungsi per fitur
void diskon();        // tugas yuki
void splitBill();    // tugas naura
void bunga();         // tugas rafael
void sisaUang();     // tugas tika

// fungsi main dan tampilan -> tugas Egi dan Hilal
int main(){

     // tempat kerja hilal - membuat tampilan UI


























     //Tugas EGI





























    return 0;
}


// ================== FITUR 1 ============================
// tugas yuki
void diskon() {
    float harga, diskon, total;

    printf("\n=== KALKULATOR DISKON ===\n");

    printf("Masukkan harga awal: ");
    scanf("%f", &harga);

    printf("Masukkan persen diskon: ");
    scanf("%f", &diskon);

    // Validasi input
    if (diskon < 0 || diskon > 100) {
        printf("Diskon tidak valid!\n");
        return;
    }

    total = harga - (harga * diskon / 100);

    printf("Harga akhir: %.2f\n", total);
}


// ================== FITUR 2 ============================
// tugas naura
void splitBill() {




    














    
}

// ================== FITUR 3 ============================
// tugas rafael
void bunga() {
        


















}

// ================== FITUR 4 ============================
// tugas tika
void sisaUang() {












    

}