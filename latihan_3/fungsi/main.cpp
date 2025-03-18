#include <iostream>

using namespace std;

// deklarasi fungsi
void tambah(int aa, int bb, int& c);
void kali(int aa, int bb, int& c);

int main() {
    int a = 0, b = 0;
    int hasilTambah = 0;
    int hasilKali = 0;
    a = 2;
    b = 3;
    tambah(a,b, hasilTambah);
    kali(a,b, hasilKali);
    cout << "Hasil penjumlahan : " << hasilTambah << endl;
    cout << "Hasil perkalian   : " << hasilKali << endl;
    return 0;
}

// definisi fungsi
void tambah(int a, int b, int& c){
    c = a + b;
}

void kali(int a, int b, int& c){
    c = a * b;
}
