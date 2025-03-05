#include <iostream>
using namespace std;

int main() {
    string item0, item1;
    int stat0 = 0, stat1 = 0;
    char repeat = 'y', repeat2 = 'y';

    cout << "Nama item  : ";
    cin >> item0;

    cout << "stat item  : ";
    cin >> stat0;

    cout << "Item   : " << item0 << endl;
    cout << "Stat   : " << stat0 << endl;
    cout << "Item sebelumnya : " << item0 << endl;
    cout << "Stat sebelumnya : " << stat0 << endl;
    cout << "input lagi ?(y/n)   : ";
    cin >> repeat;

    if (repeat == 'y') {
        do {
            cout << "Nama item  : ";
            cin >> item1;

            cout << "stat item  : ";
            cin >> stat1;

            cout << "Item   : " << item1 << endl;
            cout << "Stat   : " << stat1 << endl;

            cout << "Item sebelumnya : " << item0 << endl;
            cout << "Stat sebelumnya : " << stat0 << endl;

            if (stat0 > stat1) {
                cout << "Item terhebat  : " << item0 << endl;
            } else {
                cout << "Item terhebat  : " << item1 << endl;
            }

            if (stat0 > stat1) {
                cout << "Item terlemah  : " << item1 << endl;
            } else {
                cout << "Item terlemah  : " << item0 << endl;
            }

            cout << "input lagi ?(y/n)   : ";
            cin >> repeat2;

            // Update item0 and stat0 for the next iteration
            item0 = item1;
            stat0 = stat1;

        } while (repeat2 == 'y');
    }

    cout << "Program selesai" << endl;

    return 0;
}