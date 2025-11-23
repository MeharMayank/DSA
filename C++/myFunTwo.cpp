// PASS BY VALUE & PASS BY REFERENCE
#include <iostream>
using namespace std;

/* 
PASS BY VALUE : If A shares a download access to a file to B, and B downloads
a copy of it and makes changes on that file, the original file will not be 
affected. This is pass by value.

PASS BY REFERENCE : If A shares direct edit link of the original file to B and
then if B makes changes to A's file, then the origianl file will get modified.
This is called pass by reference.
*/

void pourChai(int cups){
    cups += 5;
    cout<<"Poured cups : "<<cups<<endl;
}

int main(){
    int chaiCups = 2;
    pourChai(chaiCups);
    cout<<chaiCups<<endl;
    return 0;
}

/*
void pourChai(int cups){
    cups += 5;
    cout<<"Poured cups : "<<cups<<endl;
}

int main(){
    int cups = 2;
    pourChai(cups);
    cout<<cups<<endl;
    return 0;
}

It may look confusing at first, but the logic is exactly the same. The variable
is just a placeholder. Parameters are the main thing. The cups variable under main
function has different scope than the one under pourChai function invocation. 
It works in the exact same logic and variable name can be anything, given that 
the name is consistent in the scope it is being used.
*/