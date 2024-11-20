#include <iostream>
#include <string>

using namespace std;

int main() {
    string inputNilai;
    float nilai;

    // Input dari pengguna
    cout << "Masukkan nilai ujian yang diperoleh siswa: ";
    cin >> inputNilai;

    // Mengonversi string ke float
    try {
        nilai = stof(inputNilai); // Mengonversi string ke float
    } catch (const invalid_argument& e) {
        cout << "Input tidak valid. Harap masukkan angka." << endl;
        return 1; // Keluar dari program jika input tidak valid
    }

    // Menentukan status kelulusan
    if (nilai >= 70) {
        cout << "Selamat! Anda Lulus." << endl;
    } else if (nilai >= 50) {
        cout << "Anda belum lulus. Silakan mengikuti ujian remedial." << endl;
    } else {
        cout << "Anda tidak lulus dan harus mengikuti ujian remedial." << endl;
    }

    return 0;
}
