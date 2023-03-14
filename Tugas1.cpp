#include <iostream>
using namespace std;

int jumlah(int a, int b) {
    return a + b;
}

int kurang(int a, int b) {
    return a - b;
}

int sum(int arr[], int size) {
    int x;
    for (int i = 0; i < size; i++) {
        x = x + arr[i];
    }
    return x;
}

float avg(float arr[], float size) {
    float x;
    for (int i = 0; i < size; i++) {
        x = x + arr[i];
    }
    return x / size;
}

int main() {
    cout << jumlah(3, 5) << endl;
    cout << kurang(5, 3) << endl;
    int arr[] = {1, 3, 4, 5};
    cout << sum(arr, 4) << endl;
    float arrr[] = {1, 3, 4, 5};
    cout << avg(arrr, 4);
}