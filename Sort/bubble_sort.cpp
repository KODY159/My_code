#include <iostream>
using namespace std;
// �ѧ��ѹ��Ѻ��Ң�����
// void swap(int* a, int* b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
void bubbleSort(int arr[], int n) {
    for (int i=0; i<n-1; i++){
        for (int j=0; j<n-i-1; j++){
            if (arr[j] > arr[j+1]){
                // swap(arr[j], arr[j+1]);
                int tm = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = tm;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: ";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
