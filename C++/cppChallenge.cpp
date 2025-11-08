// Q.1. WAP that calculates the price of the packs. A user enters the number of the packs 
// they want, and the price per pack. Apply a 10% tax to the total price and display the
// final cost.

/* ANSWER : 
#include <iostream>
using namespace std;

int main() {

int packs,pricePack;
cout<<"Enter the number of packs :" <<endl;
cin>>packs;
cout<< "Enter the price per pack :" <<endl;
cin>>pricePack;

int totalPrice = packs * pricePack;
int taxAmt = totalPrice * 0.10;
int finalPrice = totalPrice + taxAmt;

cout << "Total price is : " << finalPrice << endl;
return 0;
}
*/

/*
Q.2. Create a program where the user inputs the number of tea bags they have. If the 
number is less than 20, give them 10 extra bags using the += assignment operator. 
Display the updated total.


#include <iostream>
using namespace std;

int main(){
  int bags;
  cout<<"Enter the total number of tea bags : " << endl;
  cin>>bags;

  if(bags<20){
    bags += 10;
  }
  cout<<"Total bags : " << bags << endl;

  return 0;
}
*/

/*
Q.3. A tea subscription services offers a discount if the user buys more than 12 cups 
or if they are a member for more than a year. WAP that checks if the user qualifies 
for a discount based on the input.
*/

#include <iostream>
using namespace std;

int main(){
  int cups,memberYear;
  cout<<"Enter the number of cups : "<< endl;
  cin>>cups;
  cout<<"Enter the number of years since you have been a member : "<<endl;
  cin>>memberYear;
  int currentPrice = 500;
  if(cups>12 || memberYear>1){
     cout << "Final Price :  " << currentPrice * (1 - 20.0/100);
  }
  else {
    cout << "You are not qualified for a discount" << endl;
  }
return 0;
}
