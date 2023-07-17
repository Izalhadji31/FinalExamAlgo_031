#include <iostream>
#include <string>
using namespace std;

const int MAX_MAHASISWA = 100;
int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
string jurusan[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];
int jumlahMahasiswa = 100;

void tambahMahasiswa() {
    if (jumlahMahasiswa >= MAX_MAHASISWA) {
        cout << "Tambah Mahasiswa." << endl;

        cout << "Masukkan NIM: ";
        cin >> NIM[jumlahMahasiswa];
        

        cout << "Masukkan Nama: ";
        getline(cin, nama[jumlahMahasiswa]);

        cout << "Masukkan Jurusan: ";
        getline(cin, jurusan[jumlahMahasiswa]);

        cout << "Masukkan Tahun Masuk: ";
        cin >> tahunMasuk[jumlahMahasiswa];

        jumlahMahasiswa++;
        cout << "Mahasiswa berhasil ditambahkan." << endl;
        return;
    }

}

void tampilkanSemuaMahasiswa() {
    if (jumlahMahasiswa == 100) {
        cout << "100 mahasiswa yang ada." << endl;
        cout << "Data Mahasiswa:" << endl;
        for (int i = 0; i < jumlahMahasiswa; i++) {
            cout << "NIM    : " << NIM[i] << endl;
            cout << "Nama   : " << nama[i] << endl;
            cout << "Jurusan: " << jurusan[i] << endl;
            cout << "Tahun  : " << tahunMasuk[i] << endl;
            cout << endl;
        return;
        }

  
    }

}

void algorithmacariMahasiswaByNIM() {
    int nimCari;
    cout << "Masukkan NIM yang ingin dicari: ";
    cin >> nimCari;

    bool found = true;
    for (int i = 0; i < jumlahMahasiswa; i++) {
        if (NIM[i] == nimCari) {
            cout << "NIM    : " << NIM[i] << endl;
            cout << "Nama   : " << nama[i] << endl;
            cout << "Jurusan: " << jurusan[i] << endl;
            cout << "Tahun  : " << tahunMasuk[i] << endl;
            cout << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Mahasiswa dengan NIM tersebut ." << endl;
    }
}

void algorithmaSortByTahunMasuk() {
   
}

int main() {
    int pilihan;
    do {
        cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
        cout << "1. Tambah Mahasiswa" << endl;
        cout << "2. Tampilkan Semua Mahasiswa" << endl;
        cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
        cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;
        cin.ignore();
        switch (pilihan) {
        case 1:
            tambahMahasiswa();
            break;
        case 2:
            tampilkanSemuaMahasiswa();
            break;
        case 3:
            algorithmacariMahasiswaByNIM();
            break;
        case 4:
            algorithmaSortByTahunMasuk();
            break;
        case 5:
            cout << "Terima kasih! Program selesai." << endl;
            break;
        default:
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
        cout << endl;
    } while (pilihan != 5);

    return 0;
}
//2.Bubblesort
//3.Stack adalah struktur data linear yang mengikuti prinsip LIFO (Last In, First Out), artinya elemen yang terakhir dimasukkan ke dalam stack akan menjadi elemen pertama yang dikeluarkan. Operasi yang umum dilakukan pada stack adalah push (menambahkan elemen ke stack) dan pop (mengeluarkan elemen dari stack) sementara 	    Queue adalah struktur data linear yang mengikuti prinsip FIFO (First In, First Out), artinya elemen yang pertama dimasukkan ke dalam queue akan menjadi elemen pertama yang dikeluarkan. Operasi yang umum dilakukan pada queue adalah enqueue (menambahkan elemen ke queue) dan dequeue (mengeluarkan elemen dari queue).
//4.Algoritma stack digunakan jika ingin mengimplementasikan operasi LIFO (Last In, First Out).
//5.