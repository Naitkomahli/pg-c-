#include <iostream>
#include <vector>
#include <random>

using namespace std;

int acak(int a, int b);
void viewItems(vector<string> inv);
void addItems(vector<string>& inv, vector<string> pl);
void delItems(vector<string>& inv);

int main() {
    vector<string> item {"Sword", "Shield"};
    vector<string> pool {"Bow", "Dual Blade", "Potion", "Herb"};
    char pilihan = ' ';
    char ulang = 'y';

    while(ulang == 'y'){
        cout << "Inventory menu" << endl;
        cout << "1. view items" << endl;
        cout << "2. add item" << endl;
        cout << "3. remove item" << endl;
        cout << "pilihan anda (1/2/3): ";
        cin >> pilihan;

        switch (pilihan) {
            case '1': {
                viewItems(item);
                break;
            }
            case '2': {
                addItems(item, pool);
                break;
            }
            case '3': {
                delItems(item);
                break;
            }
            default: {
                cout << "pilihan tidak valid" << endl;
                break;
            }
        }
        cout << "ulang program? (y/n): "; 
        cin >> ulang;
    }
    return 0;
}

void viewItems(vector<string> inv){
    vector<string>::iterator penunjuk;
    for (penunjuk = inv.begin(); penunjuk != inv.end(); ++penunjuk){
        cout << *penunjuk << endl;
    }
}

int acak(int a, int b){
    random_device rd;
    mt19937 gen(rd()); //caranya/modenya
    uniform_int_distribution<> distrib(a,b); //sebarkan/membagi
    int hasilAcak = distrib(gen);
    return hasilAcak;
}

void addItems(vector<string>& inv, vector<string> pl){
    int senjata = acak(0,pl.size()-1);
    inv.push_back(pl[senjata]);
    cout << "Item " << pl[senjata] << " telah ditambah." << endl;
}

void delItems(vector<string>& inv){
    int hps = 0;
    cout << "Hapus item ke berapa?" <<endl;
    cin >> hps;
    inv.erase(inv.begin() + (hps-1)); //hps-1 karena itungan user dan komputer berbeda
}