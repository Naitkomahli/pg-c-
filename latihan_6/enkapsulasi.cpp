#include <iostream>

using namespace std;

class Pet {
public: //constructor
    Pet(string nama);
    void talk();

private:
    string m_nama = "";
};

Pet::Pet(string nama):m_nama(nama) {
    cout << "New pet !" << endl;
}

void Pet::talk() {
    cout << "Hello, my name is " << m_nama << endl;
}

int main() {
    Pet pet1("Mul");
    Pet pet2("Yo");

    pet1.talk();
    pet2.talk();
    return 0;
}