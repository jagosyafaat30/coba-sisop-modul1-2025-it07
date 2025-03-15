#include <stdio.h>

int main() {
    // Nama file yang akan dibaca
    const char *filename = "tugasnilai.txt";

    // Pointer ke file
    FILE *file = fopen(filename, "r");

    // Periksa apakah file berhasil dibuka
    if (file == NULL) {
        printf("Gagal membuka file %s\n", filename);
        return 1;
    }

    // Buffer untuk menyimpan setiap baris dari file
    char line[256];

    int icount = 0;
    //int jummhs = 0;	

    // Baca setiap baris dari file hingga mencapai akhir file (EOF)
    while (fgets(line, sizeof(line), file)) {
	icount++;

        // Tampilkan baris yang dibaca
        printf("%d %s", icount, line);
    }

    // Tutup file setelah selesai membaca
    fclose(file);

    return 0;
}

