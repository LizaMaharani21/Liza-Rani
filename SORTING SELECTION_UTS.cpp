#include <iostream>

// Fungsi melakukan Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Menukar elemen terkecil dengan elemen pertama yang belum diurutkan
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

// Fungsi untuk mencetak isi array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {69, 75, 76, 20, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array sebelum diurutkan: ";
    printArray(arr, n);

    selectionSort(arr, n);

    std::cout << "Array setelah diurutkan: ";
    printArray(arr, n);

    return 0;
}
