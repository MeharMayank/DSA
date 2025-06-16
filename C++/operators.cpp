//////// ARITHMETIC OPERATORS ( +,-,*, /,% )///////////
/*
Challenge : Create a program that calculates the total price of tea cups. The user inputs the number of cups they want and the price per cup. The program should 
calculate the total price, apply a 5% discount if the total is above a certain amount, and show the final price.
*/
#include <iostream>
using namespace std;
int main(){
    int cups;
    double pricePerCup, totalPrice, discountPrice;

    cout<<"Enter the number of tea cups : "<<endl;
    cin>>cups;
    cout<<"Enter the price per cup : "<<endl;
    cin>>pricePerCup;

    totalPrice = pricePerCup * cups;
    if(totalPrice > 100){
        discountPrice = totalPrice - (totalPrice * 0.05);
        cout<<discountPrice<<endl;
    }
    else {
        cout<<totalPrice<<endl;
    }
    return 0;
}