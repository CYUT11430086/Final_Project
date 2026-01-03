//11430086王泳翔 11430002吳睿宸
#include <iostream>
#include <vector>
#include <string>
using namespace std;


string names[20];
int amounts[20];
int recordCount = 0;
string todo[20];
int todoCount = 0;
int totalSpent = 0;
// ===== 主程式 =====
int main() {
    int choice;

    while (true) {
        cout << "\n===== SmartLife 小助手 =====\n";
        cout << "1. 記帳系統\n";
        cout << "2. 簡易計算機\n";
        cout << "3. 待辦事項\n";
        cout << "4. 匯率計算(美金,日幣,人民幣)\n";
        cout << "5. 離開\n";
        cout << "選擇功能：";
        cin >> choice;

         if (choice == 1) {
            int c;
            cout << "1. 新增記帳\n2. 查看紀錄\n";
            cin >> c;

            if (c == 1) {
                if (recordCount >= 20) {
                    cout << "記帳已滿 (最多20筆)！\n";
                } else {
                    string name;
                    int money;
                    cout << "輸入花費名稱：";
                    cin >> name;
                    cout << "輸入金額：";
                    cin >> money;

                    names[recordCount] = name;
                    amounts[recordCount] = money;
                    totalSpent += money;
                    recordCount++;
                    cout << "已加入記帳！\n";
                }
            }
            else {  
                cout << "\n===== 所有記帳紀錄 =====\n";
                for (int i = 0; i < recordCount; i++) {
                    cout << names[i] << " - " << amounts[i] << " 元\n";
                }
                cout << "總花費：" << totalSpent << " 元\n\n";
            }
        
        }
        else if (choice == 2) {
            double num1, num2, F;
            while (true)
    {
        cout << "\t兩數相加=1\n\t兩數相減=2\n\t兩數相乘=3\n\t兩數相除=4\n\t矩形面積=5\n\t圓面積=6\n\t三角形面積=7 \n請輸入:";
        cin >> F;
        if (F == 1)
        {
            cout << "請輸入兩個數:\n";
            cin >> num1 >> num2;
            cout << "兩數相加為:\n" << num1 + num2 << endl;
            break;
        }
        else if (F == 2)
        {
            cout << "請輸入兩個數:\n\n";
            cin >> num1 >> num2;
            cout << "兩數相減為:" << num1 - num2 << endl;
            break;
        }
        else if (F == 3)
        {
            cout << "請輸入兩個數:\n";
            cin >> num1 >> num2;
            cout << "兩數相乘為:\n" << num1 * num2 << endl;
            break;
        }
        else if (F == 4)
        {
            cout << "請輸入兩個數:\n";
            cin >> num1 >> num2;
            if (num2 == 0)
                cout << "除數不能為0" << endl;
            else
                cout << "兩數相除為:\n" << num1 / num2 << endl;
            break;
        }
        else if (F == 5)
        {
            cout << "請輸入矩形的長與寬:\n";
            cin >> num1 >> num2;
            cout << "矩形面積為:\n" << num1 * num2 << endl;
            break;
        }
        else if (F == 6)
        {
            double pi = 3.14159;
            cout << "請輸入圓的半徑\"兩次\":\n";
            cin >> num1 >> num2;
            cout << "圓面積為:\n" << pi * num1 * num2 << endl;
            break;
        }
        else if (F == 7)
        {
            cout << "請輸入三角形的底與高:\n";
            cin >> num1 >> num2;
            cout << "三角形面積為:\n" << 0.5 * num1 * num2 << endl;
            break;
        }
        else
        {
            cout << "輸入錯誤" << endl;
        }
    }
        }
        else if (choice == 3) {
            int c;
            cout << "1. 新增待辦\n2. 顯示待辦\n";
            cin >> c;

            if (c == 1) {
                if (todoCount >= 20) {
                    cout << "待辦事項已滿\n";
                } else {
                    string t;
                    cout << "輸入待辦事項：";
                    cin >> t;
                    todo[todoCount] = t;
                    todoCount++;
                }
            }
            else {
                cout << "\n===== 待辦事項 =====\n";
                for (int i = 0; i < todoCount; i++) {
                    cout << i + 1 << ". " << todo[i] << endl;
                }
            }
        }
        else if (choice == 4) {
            double amount;
            int currency;
            cout << "輸入金額：";
            cin >> amount;
            cout << "選擇貨幣(1. 美金 2. 日幣 3. 人民幣)：";
            cin >> currency;

            if (currency == 1) {
                cout << amount << " 美金 = " << amount * 30.5 << " 台幣\n";
            }
            else if (currency == 2) {
                cout << amount << " 日幣 = " << amount * 0.22 << " 台幣\n";
            }
            else if (currency == 3) {
                cout << amount << " 人民幣 = " << amount * 4.3 << " 台幣\n";
            }
            else {
                cout << "選項錯誤！\n";
            }
        }
        else if (choice == 5) {
            break;
        }
        else cout << "選項錯誤！\n";
    }
    return 0;
}