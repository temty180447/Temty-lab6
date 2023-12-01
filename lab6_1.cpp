#include<iostream>
using namespace std;

int main(){
    int x;
    cout << "Enter an integer: ";
    cin >> x;
    int koo = 0, kee = 0;
    while(x != 0){
        if(x%2==0){
            koo++; 
        }else{
            kee++;
        }
        cout << "Enter an integer: ";
        cin >> x;
    }
    cout << "#Even numbers = " << koo << "\n";
    cout << "#Odd numbers = " << kee;
    return 0;
}