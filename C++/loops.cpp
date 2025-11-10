/*

WHILE LOOP

Q. WAP that keeps track of tea orders. Each time a cup of tea is made, decrease the 
number of cups remaining. The loop should run until all cups are served.


#include <iostream>
using namespace std;

int main(){
  int orderNo;
  cout << "Enter the number of tea cups you want to be served : " << endl;
  cin >> orderNo;
  int i=1;
  while(i<=orderNo){
     cout<<i<<" tea order completed..."<<endl;
     i++;
  }
  cout << "All orders completed !"<<endl;
return 0;
}
*/

/*

DO WHILE LOOP

Q. Create a program that asks the user if they want more tea. Keep asking them until 
they type "no" (case-insensitive), using a do-while loop.


#include <iostream>
#include <string>
using namespace std;

string response;

int main(){
  do{
    cout<<"Do you want more tea (yes/no): "<<endl;
    getline(cin, response);
  } while(response != "No" &&  response != "no");

return 0;
}
*/

/*

FOR LOOP

Q. WAP that prints the brewing instructions for making 5 cups of tea. The brewing process
should be printed once for each cup using a for loop.

#include <iostream>
#include <string>
using namespace std;

int main () {
    int teaCups = 5;
    for(int i =1; i<=teaCups;i++){
       cout<<"Brewing cup" << i <<" of tea... "<<endl;
    }
return 0;
}
*/

/*

BREAK KEYWORD

Q. WAP that keeps serving tea until the user says they've had enough (input 'stop'). Use 
a break statement to exit the loop when the user types 'stop'.

#include <iostream>
#include <string>
using namespace std;

int main(){
   string response;
   while(true){
     cout<<"Do you want more tea (type 'stop' to exit) ? : "<<endl;
     getline(cin, response);

     if(response == "stop"){
          break;
     }
   }
cout<<"No more tea will be served";
return 0;
}

*/


/*

CONTINUE KEYWORD

Q. WAP that skips brewing green tea if the user dislikes it. Use a continue statement to 
skip over green tea but brew other types of tea in a list.

#include <iostream>
#include <string>
using namespace std;

int main(){
   string teaTypes[3] = {"Green Tea", "Black Tea", "Lemon Tea"};
   
   for (int i=0; i<3; i++){
     if(teaTypes[i]=="Green Tea"){
       continue;
     }
   cout<<"Brewing "<< teaTypes[i]<<" .... "<< endl;
   } 

return 0;
}
*/


/*

NESTED LOOPS

Q.WAP that brews multiple cups of different types of tea. For each type of tea, brew 3 
cups using a nested loop.

*/

#include <iostream>
#include <string>

using namespace std;

int main(){
  string teaTypes[5] = {"Oolong Tea", "Orange Tea", "Green Tea", "Black Tea", "Lemon Tea"
  };
  
  for(int i=0; i<5; i++){
     cout<<"Brewing"<<teaTypes[i]<<"..."<<endl;
     for(int j=1; j<=3;j++){
         cout<<"Serving"<<j<<" cup"<<endl;
     };
  };

return 0;
}
