#include <iostream>
using namespace std;
    // Array - Continuous memory allocation (in any order)
    /*
    When you think about an array in a program, you imagine its elements being
    stored one right after the other, like houses on a straight street. 
    However, in reality, the computer's memory addresses for the array's 
    elements might be scattered all over the physical memory. The key is that 
    the array's logical order (element 1, then element 2, then element 3, and 
    so on) is always maintained. When the program performs an operation on the
    array, it follows this precise, continuous sequence of elements, 
    regardless of where those elements physically sit in the memory.

    In simple terms,
    One may imagine continuous memory allocation as linear continuous memory
    address being assigned in a linear order, but in reality, the memory
    address can be quite dispersed throughout memory but whenever a operation
    would run through an array, it would follow the exact order memory address
    irrespective of their actual location in the memory.
    */

    // Also, C++ only allows a single data type for an array. Some languages
    // give flexibility of having multiple data type elements within a single array.
int main(){
    int chaiTemperature[5] = {85, 90, 80, 92, 89};
    cout<<"Chai temperature : ";
    // for(int i=1; i<=5; i++){
    for(int i=0; i<5; i++){
        cout<<chaiTemperature[i]<< " degree C"<<endl;
    }
    return 0;
}