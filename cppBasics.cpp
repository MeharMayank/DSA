/*
We write characters under single quote in C++. When we have to write 
multiple characters, we do so under double quote. We generally follow
this rule for all languages.
*/
#include <iostream>
using namespace std;

int main(){
    int age = 25;
    char grade = 'a';
    float PI=3.14f;
    
    cout<<age<<endl;
    cout<<PI<<endl;

    bool isSafe = false;
    cout<<isSafe<<endl;
    return 0;
}

/*
---------------------
PRIMITIVE DATA TYPES
---------------------
- int --> 4 Bytes
- char --> 1 Byte
- float --> 4 Bytes
- bool --> 1 Byte (True - 1 ; False - 0)
- double --> 8 Bytes


*/