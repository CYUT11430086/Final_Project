#include <iostream>
#include <vector>
#include <string>
using namespace std;

class MenuItem {
    private:
        string name;
        int price;

    public:
        MenuItem(string n, int p) {
            this->name = n;
            if (p < 0) {
                this->price = 0;
            } else {
                this->price = p;
            }
        }

        void display() {
            cout << this->name << " : $" << this->price;
        }
        int getPrice() {
            return this->price;
        }
};

class Order{
    private:
        vector<MenuItem> items;
    public:
        void addItem(MenuItem item){
            items.push_back(item);
        }
        void showOrder(bool isStudent){
            float total = 0;
            cout<< "-------訂單明細-------" <<endl;
            for(int i=0; i<items.size(); i++){
                items[i].display();
                cout << endl;
                total += items[i].getPrice();
            }
            if(isStudent){
                total = total * 0.9;
            }
            cout << "總金額: $" << total << endl;
        }
};
class Drink: public MenuItem{
    private:
        string sugar;
    public:
        Drink(string ItemName, int ItemPrice, string sugar) : MenuItem(ItemName, ItemPrice)
        {
            this->sugar = sugar;
        }

        void display(void)
        {
            MenuItem::display();
            cout << " (" << sugar << ")";
        }

};

class MOrder{
    private:
        vector<MenuItem*> items;
    public:
        void addItem(MenuItem* item)
        {
            items.push_back(item);
        }
        
        void showOrder(bool isStudent)
        {
            float total = 0;
            cout << "------訂單明細------" << endl;
            for(int i = 0; i<items.size(); i++){
                items[i]->display();
                total = total + items[i]->getPrice();
            }

            if(isStudent) total = total* 0.9;
            cout << "總金額:$"<< total <<endl;
        }
};

int main() {
    cout << "=== 階段 4 測試：虛擬函式與多型 ===" << endl;

    MOrder finalOrder;

    // 在主記憶體中建立不同型態的物件
    MenuItem burger("勁辣雞腿堡", 75);
    Drink coke("可口可樂", 35, "正常糖");
    MenuItem fries("大包薯條", 55);
    Drink tea("四季春茶", 40, "微糖");

    // 重點：使用 & 符號傳入物件的記憶體地址
    finalOrder.addItem(&burger);
    finalOrder.addItem(&coke);
    finalOrder.addItem(&fries);
    finalOrder.addItem(&tea);

    // 檢查明細中，可樂與綠茶後面有沒有自動出現 (正常糖) 與 (微糖)
    finalOrder.showOrder(true); 

    return 0;
}