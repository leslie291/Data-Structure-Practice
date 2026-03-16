#include <iostream>
using namespace std;

// pass by value，change heap data
void changeValue1(int* p) { *p = 99; }

// pass by reference, change heap data and change address
void changeValue2(int*& p) {
    delete p; //or delete a to free old memory
    p = new int(999); // allocate new memory and assign new value
}

int main() {
    int* a = new int(5);
    changeValue1(a);
    cout << *a << endl; // print *a → 99

    changeValue2(a);
    cout << *a << endl; // print *a → 999

    delete a;
}
