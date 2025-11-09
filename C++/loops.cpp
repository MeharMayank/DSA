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

*/

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

