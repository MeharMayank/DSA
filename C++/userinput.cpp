#include <iostream>
#include <string>

using namespace std;

int main(){
    string userTea;
    int teaQuantity;
    cout<<"what would you like to order in tea? \n";
    getline(cin, userTea); //Another way to take user input

    //Ask for quantity
    cout<<"How many cups of "<<userTea<<"would you like to have ? \n";
    cin>>teaQuantity;//Direct way to take user input
    cout<<teaQuantity<<endl;
    cout<<userTea<<endl;
    return 0;
}