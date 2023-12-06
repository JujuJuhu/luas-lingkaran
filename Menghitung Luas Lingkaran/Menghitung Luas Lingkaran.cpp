// Menghitung Luas Lingkaran.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath> // Untuk menggunakan fungsi pow dan M_PI
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

int main() {
    double jariJari, luas;

    // Meminta pengguna memasukkan jari-jari lingkaran
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> jariJari;

    // Menghitung luas lingkaran menggunakan rumus: luas = π * r^2
    luas = M_PI * pow(jariJari, 2);

    // Menampilkan hasil perhitungan
    cout << "Luas lingkaran dengan jari-jari " << jariJari << " adalah: " << luas << endl;

    return 0;
}


