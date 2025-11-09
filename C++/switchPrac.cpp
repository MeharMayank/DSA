/*
Q. WAP that lets the user select a tea type from a menu. Use a switch statement to display
the price based on the selected tea : Green Tea - $2, Black Tea - $3, Oolong Tea - $4.
*/

#include <iostream>
using namespace std;

int main(){
  int choice;
  cout << "Select your tea : "<<endl;
  cout<<"Green Tea - 1"<<endl;
  cout<<"Oolong Tea - 2"<<endl;
  cout<<"Black Tea - 3" << endl;
  cout<<"Enter your choice in number : "<< endl;
  cin>>choice;

  switch(choice){
     case 1 :
       cout << "Green Tea - $2 " << endl;
       break;
     case 2 :
       cout<< "Oolong Tea - $4 " << endl;
       break;
     case 3 :
        cout<< "Black tea - $3" << endl;
        break;
     default : 
        cout<<"Enter relevant option number";
        break;
   }

return 0;
}
