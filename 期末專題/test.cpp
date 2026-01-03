#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 記帳紀錄
struct Record {
    string name;
    int money;
};

vector<Record> records;
vector<string> todo;

// ===== 主程式 =====
int main() {
    int choice;

    while (true) {
        cout << "\n===== SmartLife 小助手 =====\n";
        cout << "1. 記帳系統\n";
        cout << "2. BMI 計算\n";
        cout << "3. 待辦事項\n";
        cout << "4. 離開\n";
        cout << "選擇功能：";
        cin >> choice;

        if (choice == 1) {
            int c;
            cout << "1. 新增記帳\n2. 查看紀錄\n";
            cin >> c;
            if (c == 1) {
                Record r;
                cout << "輸入花費名稱：";
                cin >> r.name;
                cout << "輸入金額：";
                cin >> r.money;
                records.push_back(r);
                cout << "已加入記帳！\n";
            }
            else {
                int total = 0;
                cout << "\n===== 所有記帳紀錄 =====\n";
                for (auto &r : records) {
                    cout << r.name << " - " << r.money << " 元\n";
                    total += r.money;
                }
                cout << "總花費：" << total << " 元\n\n";
            }
        }
        else if (choice == 2) {
            double h, w;
            cout << "輸入身高(cm)：";
            cin >> h;
            cout << "輸入體重(kg)：";
            cin >> w;

            double b = w / ((h/100) * (h/100));
            cout << "你的 BMI = " << b << endl;

            if (b < 18.5) cout << "過輕\n";
            else if (b < 24) cout << "正常\n";
            else if (b < 27) cout << "過重\n";
            else cout << "肥胖\n";
        }
        else if (choice == 3) {
            int c;
            cout << "1. 新增待辦\n2. 顯示待辦\n";
            cin >> c;
            if (c == 1) {
                string t;
                cout << "輸入待辦事項：";
                cin >> t;
                todo.push_back(t);
            }
            else {
                cout << "\n===== 待辦事項 =====\n";
                for (int i=0; i<todo.size(); i++) {
                    cout << i+1 << ". " << todo[i] << endl;
                }
            }
        }
        else if (choice == 4) break;
        else cout << "選項錯誤！\n";
    }
    return 0;
}