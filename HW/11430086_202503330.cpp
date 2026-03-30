//1143086王泳翔
#include<iostream>
using namespace std;
void bobbleSort_1(int arr[], int n);
void bobbleSort_2(int arr[], int n);

int main(){
    int arr[10],n=10;

    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    bobbleSort_1(arr, n);
    bobbleSort_2(arr, n);
    return 0;
}

void bobbleSort_1(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

            }
        }
    }
    cout<<"輸出正向排序結果。"<<"\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<< "\n";
}

void bobbleSort_2(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout<<"輸出逆向排序結果。"<<"\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<< "\n";
}