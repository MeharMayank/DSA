#include <iostream>
using namespace std;

int main(){
    int num,i;
    cout<<"Enter a number : "<<endl;
    cin>>num;
    for(int i=2;i<=num;i++){
        if(num%i == 0){
            cout<<i<<" "<<"Non-Prime Number"<<endl;
        }
        else{
            cout<<i<<" "<<"Prime Number"<<endl;
        }
    }
    /*
    -------------------------------------
    TERNARY STATEMENT :
    -------------------------------------
    condition ? statement1 : statement 2;
    -------------------------------------
    */
    return 0;
}