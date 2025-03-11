#include <iostream>
using namespace std;

int main() {
    //inisialisasi - hanya dilakukan sekali
    string item = "", item_sblm = "", terhebat = "", terlemah = "";
    int stat = 0, stat_sblm = 0, terhebat_stat = 0, terlemah_stat = 0;
    char repeat = 'y';
    bool first = true;

    while (repeat == 'y')
    {
        // input item dan stat
        cout << "input item : ";
        cin >> item;
        cout << "input stat : ";
        cin >> stat;

        //  output item dan stat
        cout << "item yang diinputkan adalah " << item << endl;
        cout << "stat yang diinputkan adalah " << stat << endl;
        
        if(first == true){
            item_sblm = "Tidak ada";
            stat_sblm = 0;
            first = false;
            terhebat = item;
            terhebat_stat = stat;
            terlemah = item;
            terlemah_stat = stat;
        } else {
            if(stat > terhebat_stat){
                terhebat_stat = stat;
                terhebat = item;
            } 
            if(stat < terlemah_stat){
                terlemah_stat = stat;
                terlemah = item;
            }
        }

        // item sebelumnya
        cout << "=====================" << endl;
        cout << "item sebelumnya adalah " << item_sblm << endl;
        cout << "stat sebelumnya adalah " << stat_sblm << endl;
        
        item_sblm = item;
        stat_sblm = stat;

        // output terhebat dan terlemah
        cout << "=====================" << endl;
        cout << "Terhebat   : " << terhebat << endl;
        cout << "Terlemah   : " << terlemah <<endl;

        // loop
        cout << "ulangi input item ? (y/n) : ";
        cin >> repeat;
    }
    
    cout << "Program selesai" << endl;
    return 0;
}