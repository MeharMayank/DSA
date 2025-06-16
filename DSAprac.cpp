// ARRAYS //
/* STL - Standard Template Library

Vector is a C++ STL which is preferred over array, as it is a dynamic array and can the array size can dynamically 
expand or shrink as per the requirements. Vector also has several in-built functions which makes handling certain 
aspects of working with arrays much simpler and easier.
*/
////////////////////////////////////////////////////////////////////
// Q. WAP to find maximum element in an array
#include <iostream>
using namespace std;

int main(){
    int a[5];
    cout<<"Enter the five elements for the array : "<<endl;
    for(int i=0;i<5;i++){
        cin>>a[i];
        cout<<endl;
    };
    int max=0;
    for(int j=0;j<5;j++){
        if(max<a[j]){
            max = a[j];
        }
    }
    cout<<"The max element is : "<<max<<endl;
    return 0;
}