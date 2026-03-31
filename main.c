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



















}

// ================== FITUR 2 ============================
// tugas naura
void splitBill() {




    














    
}

// ================== FITUR 3 ============================
// tugas rafael
void bunga() {
    float saldo, bunga, hasil;

    printf("\n=== BUNGA TABUNGAN ===\n");

    printf("Masukkan saldo awal: ");
    scanf("%f", &saldo);

    printf("Masukkan bunga (%%): ");
    scanf("%f", &bunga);

    // Validasi
    if (bunga < 0) {
        printf("Bunga tidak valid!\n");
        return;
    }

    hasil = saldo + (saldo * bunga / 100);

    printf("Saldo akhir: %.2f\n", hasil);
}

// ================== FITUR 4 ============================
// tugas tika
void sisaUang() {












    

}
