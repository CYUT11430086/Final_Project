#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int temp_N = N;
    int digits_reversed[4];
    for(int i=0; i<4; ++i){
        int digit = temp_N%10;
        digits_reversed[i] = digit;
        temp_N/=10;
    }
    for (int i=3; i>=0; --i){
        cout<< digits_reversed[i] <<"\n";
    }
    return 0;
}