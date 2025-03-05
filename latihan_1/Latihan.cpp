#include <iostream>
using namespace std;

string item1, item0;
int stat1, stat0;
char repeat;

int main ()
{
        cout << "Nama item  : ";
        cin >> item0;

        //stat1
        cout << "stat item  : ";
        cin >> stat0;

        cout << "Item   :" << item0 <<endl;
        cout << "Stat   :" << stat0 <<endl;
        cout << "Item sebelumnya : " << item0 <<endl;
        cout << "Stat sebelumnya : " << stat0 <<endl;
        cout << "input lagi ?(y/n)   : ";
        cin >> repeat;
        if(repeat == 'y'){
            do{
        //item 1
        cout << "Nama item  : ";
        cin >> item1;

        //stat1
        cout << "stat item  : ";
        cin >> stat1;

        cout << "Item   :" << item1 <<endl;
        cout << "Stat   :" << stat1 <<endl;

        cout << "Item sebelumnya : " << item0 <<endl;
        cout << "Stat sebelumnya : " << stat0 <<endl;

        if (stat0>stat1){
            cout << "Item terhebat  : " << item0 <<endl;
        } else {
            cout << "Item terhebat  : " << item1 <<endl;
        }

        if (stat0>stat1){
            cout << "Item terlemah  : " << item1 <<endl;
        } else {
            cout << "Item terlemah  : " << item0 <<endl;
        }

        cout << "input lagi ?(y/n)   : ";
        cin >> repeat;
        } while (repeat == 'y' || repeat == 'n');

        cout << "Program selesai";

        } else {
            cout << " Program selesai ";
        }

    return 0;
}
