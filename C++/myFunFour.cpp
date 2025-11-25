/*
LAMBDA FUNCTIONS

LAMBDA Functions are considered the essential for Frameworks & Libraries.
Default use cases can be demonstrated but the utility is more for Frameworks
& Libraries.
*/
#include <iostream>
using namespace std;

int main(){
    /* lambda
    The [] signals the start of a lambda function—essentially a function with no name.

    Use Case: Perfect for specific, one-off logic that we don't need to reuse elsewhere.
    
    Why: It keeps the code local and clean. In C++, this is often more efficient 
    than function pointers because the compiler can aggressively optimize (inline) 
    the logic. Most modern languages support this concept.
*/

    auto preparedChai = [](int cups){
        cout<<"Preparing "<< cups<<" of Tea"<<endl;
    };
    /*
    Also, one interesting thing to note here is that this function gets treated 
    kind of a variable and hence, we put a semicolon at the end.

    Also, here the preparedChai variable is holding the definition of this
    lambda function. But a valid question arises, how will be determine the 
    data type in which the output would come ? In case of normal functions,
    we used to declare the data type during declaration itself but in lambda 
    function it gets tricky.

    Hence, we use auto data type with preparedChai variable to automatically
    handle the data types.
    */
    preparedChai(4);
    return 0;
}