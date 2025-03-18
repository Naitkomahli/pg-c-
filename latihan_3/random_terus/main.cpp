#include <iostream>
#include <random>

using namespace std;

int main() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(10, 50);
    int acak = distrib(gen);
    cout << "Acak   : " << acak << endl;
    return 0;
}