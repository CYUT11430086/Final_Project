//11430086王泳翔
#include <iostream>
using namespace std;

int func(int n);
double func2(int n);
double func3(int x, int n);
void PrintNumber(int x, int y);
void print2(double x);

int main(){
    cout << "func(10)=" << func(10) << endl;
    cout << "func(20)=" << func(20) << endl;
    cout << "func(30)=" << func(30) << endl;

    cout << "func2(5)=";
    print2(func2(5));
    cout << endl;

    cout << "func2(10)=";
    print2(func2(10));
    cout << endl;

    cout << "func2(15)=";
    print2(func2(15));
    cout << endl;

    cout << "func3(10,5)=";
    print2(func3(10,5));
    cout << endl;

    cout << "func3(20,10)=";
    print2(func3(20,10));
    cout << endl;

    cout << "func3(30,15)=";
    print2(func3(30,15));
    cout << endl;

    cout << "PrintNumber(5,10)" << endl;
    PrintNumber(5,10);

    cout << "PrintNumber(1,3)" << endl;
    PrintNumber(1,3);

    return 0;
}

int func(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i * 2;
    }
    return sum;
}

double func2(int n){
    double sum = 0;
    double term = 1;

    for(int i = 1; i <= n; i++){
        term /= 2;
        sum += term;
    }
    return sum;
}

double func3(int x, int n){
    double sum = 0;
    double term = x;  // 第一項 x^1/1!

    for(int k = 1; k <= n; k++){
        if(k > 1){
            term = term * x / k;  // 核心公式🔥
        }
        sum += term;
    }
    return sum;
}
void PrintNumber(int x, int y){
    for(int i = x; i <= y; i++){
        cout << i << endl;
    }
}


void print2(double x){
    long long temp = x * 100 + 0.5;  // ⭐ 改這裡

    cout << temp / 100 << ".";

    int decimal = temp % 100;
    if(decimal < 10) cout << "0";
    cout << decimal;
}
