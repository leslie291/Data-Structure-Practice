#include <iostream>
using namespace std;

double average(const int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i ++){
        sum += arr[i];
    }
        double average = (double)sum / size;
        return average;
}

int main() {
    int a[5] = {2, 4, 6, 7, 9};
    cout << average(a, 5) << endl;  
}
