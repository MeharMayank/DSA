#include <iostream>
using namespace std;

int globalChaiStock = 100;

void pourChai(int &cups){
    cups = cups + 5;
    cout<<"Poured Cups : "<<cups<<endl;
}
// Here just adding & before the variable in parameter, updated the 
// function definition to accept the reference instead of value.
// This way we call by Reference instead of Call by Value in CPP.

int main(){
    int cups = 2;
    pourChai(cups);
    cout<<"Total cups are : "<<cups<<endl;
    return 0;
}

/*
Also, {} define a scope. All actions done under {} remains in that scope and 
can't be accessed externally. 

However, in some languages, scope spilling does take place, for eg. JS.

Also, variables declared globally can be accessed by all elements in the program.
*/