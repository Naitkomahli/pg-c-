#include <iostream>

using namespace std;

class Pet {
public:
    Pet(string nama, int energi, int fun); //constructor, untuk menginisialisasi nama, energi, dan kesenangan
    void makan(int makanan);
    void bermain(int mainan);
    virtual void bicara();
protected: 
    string m_nama; // Ada m karena member dari suatu class
    int m_energi;
    int m_fun;
};

Pet::Pet(string nama, int energi, int fun) : m_nama(nama), m_energi(energi), m_fun(fun){
    cout << "Pet " << m_nama << " telah dibuat" << endl;
}

void Pet::makan(int makanan) {  
    cout << "Nyam !!" << endl;
    m_energi = m_energi + makanan;
    m_fun = m_fun - 5; 
}

void Pet::bermain(int mainan) {
    cout << "Yay !!" << endl;
    m_fun = m_fun + mainan;
    m_energi = m_energi - 5;
}

void Pet::bicara(){
    cout << "Halo nama saya " << m_nama << endl;
    cout << "Energi saya " << m_energi << endl;
    cout << "Kesenangan saya " << m_fun << endl;
}

//=========================================================================================================================================
class Leviathan : public Pet {
public:
    Leviathan(string nama, int energi, int fun, int sp);
    void swim();
    void bicara() override; // Override untuk fungsi bicara agar bisa menampilkan sp
private:
    int m_sp;
};

Leviathan::Leviathan(string nama, int energi, int fun, int sp) : Pet(nama, energi, fun), m_sp(sp) {
    cout << "New Leviathan :3" << endl;
}

void Leviathan::swim(){
    cout << "Swim !!" << endl;
    m_sp = m_sp - 3;
    m_energi = m_energi - 2;
}

void Leviathan::bicara() {
    cout << "Halo nama saya " << m_nama << endl;
    cout << "Energi saya " << m_energi << endl;
    cout << "Kesenangan saya " << m_fun << endl;
    cout << "Swim power saya " << m_sp << endl;
}

// =========================================================================================================================================
int main(){
    //instansiasi - membuat objek
    Pet pet1("Winstead", 10, 9);

    pet1.makan(5);
    pet1.bermain(3);
    pet1.bicara();
    cout << "=====================" << endl;

    //instansiasi - leviathan
    Leviathan leviathan1("Levi", 20, 15, 10);
    leviathan1.makan(10);
    leviathan1.bermain(5);
    leviathan1.swim();
    leviathan1.bicara();
    cout << "=====================" << endl;
    return 0;
}