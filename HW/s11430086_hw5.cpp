//11430086王泳翔
#include <iostream>
#include <string>
using namespace std;
int main() {
    int password = 1234;
    double balance = 1000.0;
    int login = 0;
    int input;

    while (login < 5) {
        cout << "請輸入密碼: \n";
        cin >> input;
        if (input == password) {
            break;
        } else {
            login = login + 1;
            if (login >= 5) {
                cout << "帳號已鎖定\n";
                return 0;
            } else {
                cout << "密碼錯誤，請重新輸入\n";
            }
        }
    }

    while (true) {
        cout << "\n請選擇功能：\n";
        cout << "1：更改密碼\n";
        cout << "2：提款\n";
        cout << "3：查詢餘額\n";
        cout << "4：結束程式\n";

        int choice;
        cin >> choice;
        /*if (!(cin >> choice)) {
            cin.clear();
            cin.ignore();
            cout << "輸入錯誤，請輸入 1 到 4 的數字\n";
            //continue;
        }*/

        if (choice == 1) {
            cout << "請輸入新密碼: \n";
            cin >> input;
            password = input;
            cout << "密碼已更新\n";
        } else if (choice == 2) {
            cout << "請輸入提款金額: \n";
            int amt;
            cin >> amt;
            if (amt > balance) {
                cout << "餘額不足，無法提款\n請輸入" << balance << "以內的金額\n或者進行存款請按\"y\" 不進行存款請按\"n\"\n";
                char option;
                while (true){
                cin >> option;
                if (option == 'y') {
                    cout << "請輸入存款金額: \n";
                    int deposit;
                    cin >> deposit;
                    balance += deposit;
                    cout << "存款成功，當前餘額：" << balance << "\n";
                    break;
                }else if (option == 'n'){
                    cout << "未進行存款，請重新選擇功能\n";
                    break;
                }else{
                    cout << "輸入錯誤，請重新選擇\n";
                    cin.clear();
                    cin.ignore();
                }
            }
            } else {
                balance -= amt;
                cout << "提款成功，金額：" << amt << "，目前餘額：" << balance << "\n";
            }
        } else if (choice == 3) {
            cout << "目前餘額：" << balance << "\n";
        } else if (choice == 4) {
            cout << "結束程式\n";
            return 0;
        } else {
            cin.clear();
            cin.ignore();
            cout << "輸入錯誤，請輸入 1 到 4 的數字\n";
            //continue;
        }
    }

    return 0;
}