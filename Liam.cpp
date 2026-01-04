#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MAX = 100;            // 最多記 100 筆
    string item[MAX];               // 品項
    int money[MAX];                 // 金額
    string date[MAX];               // 日期 (yyyy-mm-dd)
    int count = 0;                  // 已輸入筆數
    int choice;

    while (true) {
        cout << "\n=== 生活支出記帳 ===\n";
        cout << "1. 新增支出\n";
        cout << "2. 查詢某一天總額\n";
        cout << "3. 列出全部支出\n";
        cout << "4. 離開\n";
        cout << "請輸入選項：";
        cin >> choice;

        // --- 新增支出 ---
        if (choice == 1) {
            if (count >= MAX) {
                cout << "資料已滿！\n";
                continue;
            }
            cout << "輸入品項：";
            cin >> item[count];
            cout << "輸入金額：";
            cin >> money[count];
            cout << "輸入日期(yyyy-mm-dd)：";
            cin >> date[count];
            count++;
            cout << "新增完成！\n";
        }

        // --- 查詢某一天 ---
        else if (choice == 2) {
            string target;
            int total = 0;
            cout << "要查詢的日期(yyyy-mm-dd)：";
            cin >> target;

            for (int i = 0; i < count; i++) {
                if (date[i] == target) {
                    total += money[i];
                }
            }
            cout << "該日總花費：" << total << " 元\n";
        }

        // --- 列出全部 ---
        else if (choice == 3) {
            cout << "\n--- 全部支出 ---\n";
            for (int i = 0; i < count; i++) {
                cout << i+1 << ". " << date[i] << "  "
                     << item[i] << "  "
                     << money[i] << " 元\n";
            }
        }

        // --- 離開 ---
        else if (choice == 4) {
            cout << "程式結束，再見！\n";
            break;
        }

        else {
            cout << "無效選項，請重新輸入。\n";
        }
    }

    return 0;
}