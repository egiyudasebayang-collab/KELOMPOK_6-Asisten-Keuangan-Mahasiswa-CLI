#include <stdio.h>

// deklarasi fungsi per fitur
void diskon();        // tugas yuki
void splitBill();    // tugas naura
void bunga();         // tugas rafael
void sisaUang();     // tugas tika

// fungsi main dan tampilan -> tugas Egi dan Hilal
int main(){

     // tempat kerja hilal - membuat tampilan UI
    int pilihan;
        
        do {
            printf("\n====================================\n");
            printf("  ASISTEN KEUANGAN MAHASISWA CLI\n");
            printf("====================================\n");
            printf("1. Kalkulator Diskon\n");
            printf("2. Split Bill\n");
            printf("3. Bunga Tabungan\n");
            printf("4. Sisa Uang Harian\n");
            printf("0. Keluar\n");
            printf("====================================\n");
    
            // ===== INPUT + VALIDASI TAMBAHAN =====
            printf("Pilih menu: ");

            if (scanf("%d", &pilihan) != 1) {
            printf("Input harus berupa angka!\n");

            // bersihkan buffer
            while (getchar() != '\n');

            pilihan = -1; // supaya masuk default
            continue;
        }

    //Tugas EGI
    // validasi rentang input
    if (pilihan < 0 || pilihan > 4) {
        printf("Menu tidak tersedia!\n");
        continue;
    }

// logika pilihan menu utama 
        switch(pilihan) {
            case 1:
                diskon();
                break;
            case 2:
                splitBill();
                break;
            case 3:
                bunga();
                break;
            case 4:
                sisaUang();
                break;
            case 0:
                printf("\nTerima kasih telah menggunakan program!\n");
                break;
            default:
                printf("\nPilihan tidak valid

    } while(pilihan != 0);

       
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
    float total, patungan;
    int orang;

    printf("\n=== SPLIT BILL ===\n ");

    printf("Masukkan total tagihan: ");
    scanf("%f", &total);

    printf("Masukkan jumlah orang: ");
    scanf("%d", &orang);

    //validasi
    if (orang <= 0) {
        printf("Jumlah orang harus lebih dari 0.\n");
        return; 
    }
  
    patungan = total / orang;
  
    printf("Tiap orang harus membayar: %.0f\n", patungan);   
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
