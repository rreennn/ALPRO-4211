#include <iostream>
using namespace std;

int max (int a, int b);
int min (int a, int b);
int maxArray(int arr[], int size);
int minArray(int arr[], int size);
bool isEven(int a);
bool isOdd(int b);
bool isFactor(int a, int b);
int sumEven(int arr[], int size);
int sumOdd(int arr[], int size);

int main() {
    cout << max(80, 81) << endl;
    cout << min(78, 77) << endl;
    
    int arr[] = {53, 78, 24, 90};

    cout << maxArray(arr, 4) << endl;
    cout << minArray(arr, 4) << endl;
    cout << isEven(7) << endl;
    cout << isOdd(7) << endl;

    cout << isFactor(9, 3) << endl;
    cout << sumEven(arr, 4) << endl;
    cout << sumOdd(arr, 4) << endl;
    return 0;
}

int max(int a, int b) {
    int n;
    if (a > b){
        n = a;
    } else {
        n = b;
    }
    return n;
}

int min(int a, int b) {
    int n;
    if(a < b){
        n = a;
    } else {
        n = b;
    }
    return n;
}

int maxArray(int arr[], int size) {
    int max = 0;
    for (int i = 0; i < size; i++){
        if (arr[i] > max){
            max = arr[i];
        } else {
            max = max;
        }
    }
    return max;
}

int minArray(int arr[], int size) {
    int min = 9999;
    for (int i = 0; i < size; i++) {
        if (arr[i] < min){
            min = arr[i];
        } else {
            min = min;
        }
    }
    return min;
}

bool isEven(int a) {
    return a % 2 == 0;
}

bool isOdd(int b) {
    return b % 2 != 0;
}

bool isFactor(int a, int b) {
    return a % b == 0;
}

int sumEven(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        } else {
            sum = sum;
        }
    }
    return sum;
}

int sumOdd(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        } else {
            sum = sum;
        }
    }
    return sum;
}