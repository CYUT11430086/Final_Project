//11430086王泳翔
#include<iostream>
using namespace std;
double num1, num2, F;
int main(){
    while (1)
    {
        cout << "\t兩數相加=1\n\t兩數相減=2\n\t兩數相乘=3\n\t兩數相除=4\n\t矩形面積=5\n\t圓面積=6\n\t三角形面積=7 \n請輸入:";
        cin >> F;
        if (F == 1)
        {
            cout << "請輸入兩個數:\n";
            cin >> num1 >> num2;
            cout << "兩數相加為:\n" << num1 + num2 << endl;
        }
        else if (F == 2)
        {
            cout << "請輸入兩個數:\n\n";
            cin >> num1 >> num2;
            cout << "兩數相減為:" << num1 - num2 << endl;
        }
        else if (F == 3)
        {
            cout << "請輸入兩個數:\n";
            cin >> num1 >> num2;
            cout << "兩數相乘為:\n" << num1 * num2 << endl;
        }
        else if (F == 4)
        {
            cout << "請輸入兩個數:\n";
            cin >> num1 >> num2;
            if (num2 == 0)
                cout << "除數不能為0" << endl;
            else
                cout << "兩數相除為:\n" << num1 / num2 << endl;
        }
        else if (F == 5)
        {
            cout << "請輸入矩形的長與寬:\n";
            cin >> num1 >> num2;
            cout << "矩形面積為:\n" << num1 * num2 << endl;
        }
        else if (F == 6)
        {
            double pi = 3.14159;
            cout << "請輸入圓的半徑\"兩次\":\n";
            cin >> num1 >> num2;
            cout << "圓面積為:\n" << pi * num1 * num2 << endl;
        }
        else if (F == 7)
        {
            cout << "請輸入三角形的底與高:\n";
            cin >> num1 >> num2;
            cout << "三角形面積為:\n" << 0.5 * num1 * num2 << endl;
        }
        else
        {
            cout << "輸入錯誤" << endl;
        }
    }
}