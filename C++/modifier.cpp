#include <iostream>
using namespace std;
int main(){
    int smallTeaPack = 100;
    // Here if we have smallTeaPack = -100, C++ would have given -100 as an output
    unsigned smallTeaPackII = -100;
    //By using unsigned, we have stripped the ability to
    //display negative values, now it will only show positive values and will output garbage value
    cout<<smallTeaPackII<<endl;

    //NOTE : In C++,even if we use wrong data type, it is not necessary that it may give error message.
    //It can also output garbage value instead. Hence, it is very important for us to be mindful of 
    // data type we are using
    long largeTeaStorage = 10000000;
    cout<<largeTeaStorage<<endl;
    // long is used to fit int numbers which exceed the capacity of int data type to handle
    // We even have long long data type for handling much larger numbers
    return 0;
}
// We have more precise versions of int data types for different bits of compiler 
// and have unsigned variations available as well for the level of precision user wants