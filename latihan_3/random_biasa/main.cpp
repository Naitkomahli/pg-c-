#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int maxRandom = 10;
    cout << rand() % maxRandom << endl;
    return 0;
}