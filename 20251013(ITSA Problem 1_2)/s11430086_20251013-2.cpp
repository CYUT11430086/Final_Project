#include <iostream>
using namespace std;

int main(){
    int N;

    if(!(cin>>N)){
        return 1;
    }
    int thousands, hundrdes, tens, units;
    
    thousands = N/1000;
    hundrdes  = (N%1000)/100;
    tens      = (N%100)/10;
    units     = N%10;

    cout<< thousands<< "\n";
    cout<< hundrdes << "\n";
    cout<< tens     << "\n";
    cout<< units    << "\n";
    return 0;
}