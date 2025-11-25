// PASS ARRAY AS PARAMETER INTO A FUNCTION
#include <iostream>
using namespace std;

int totalChaiServed(int chai[], int size){
    int total = 0; //Reason we often don't leave the variable declaration 
    // as int total, but we often assign 0 to it, is to avoid garbage value.
    for(int i =0; i<size; i++){
        total = total + chai[i];
    }
    return total;
}

int main(){
    int chaiServed[7] = {50, 60, 55, 70, 65, 80, 75};
    int total = totalChaiServed(chaiServed, 7);
    cout<<total;
    return 0;
}