#include <iostream>

using namespace std;

int main (){
    int cup;
    cout<<"Enter the total number of cups : "<<endl;
    cin>>cup;

    if(cup>20){
    cout<<"GOLD BADGE UNLOCKED !"<<endl;
    }
    else if(cup>=10 && cup <=20){
    cout<<"SILVER BADGE UNLOCKED !"<<endl;
    }
    
    return 0;

}
