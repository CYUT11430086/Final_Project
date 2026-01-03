#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n-1;i++){
        for(int j=n-1; j>=i; j--){
            cout<< " ";
        }
        for(int j=1; j<i*2;j++){
            cout<< "*";
        }
        cout << "\n";
    }
    for(int i=1;i<=n;i++){
        for(int j=1; j<i; j++){
            cout<< " ";
        }
        for(int j=n*2;j>=2*i;j--){
            cout<< "*";
        }
        cout << "\n";
    }
    for(int i=1 ; i<=n ; i++){
        for(int j=n-1;j>=i;j--){ cout<<" ";}
        
        for(int j =1; j<=n ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}