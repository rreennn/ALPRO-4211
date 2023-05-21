#include <iostream>
using namespace std;

void inputArr(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << "Masukkan bilangan ke-" << i+1 << " : ";
        cin >> arr[i];
    }
}

void outputArr(int arr[], int size) {
    cout << "[";
    for(int i = 0; i < size; i++) {
        if (i+1 == size) {
            cout << arr[i] << "]";
        } else {
            cout << arr[i] << ", ";
        }
    }
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for(int j = 0; j < size-i; j++) {
            if (arr[j] < arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void insertionSort(int arr[], int size) {
    for(int step = 1; step < size; step++) {
        int key = arr[step];
        int j = step - 1;
        while(key > arr[j] && j >= 0) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main() {
    int size, arr[99];
    cout << "Masukkan jumlah angka dalam array! " << endl;
    cin >> size;
    inputArr(arr, size);
    cout << "Array yang sudah diinput" << endl;
    outputArr(arr, size);
    cout << " Sorting array dengan bubble sort" << endl;
    bubbleSort(arr, size);
    cout << "Hasil : ";
    outputArr(arr, size);
    cout << "\n===============================================" << endl;
    cout << "Masukkan jumlah angka dalam array! " << endl;
    cin >> size;
    inputArr(arr, size);
    cout << "Array yang sudah diinput" << endl;
    outputArr(arr, size);
    cout << " Sorting array dengan insertion sort" << endl;
    insertionSort(arr, size);
    cout << "Hasil : ";
    outputArr(arr, size);

    return 0;
}