#include <iostream>
using namespace std;
int main(){
    float teaPrice = 49.99;
    int roundedTeaPrice = (int) teaPrice; //converted to integer
    cout<<roundedTeaPrice<<endl;

    int TeaQuantity = 2;
    int totalPrice = teaPrice * TeaQuantity;
    cout<<totalPrice<<endl;

    //We need to be mindful wrt data types. Suppose you are computing prices, in that case using double 
    //makes much more sense than 
    return 0;
}