/*
We write characters under single quote in C++. When we have to write 
multiple characters, we do so under double quote. We generally follow
this rule for all languages.
*/
#include <iostream>
using namespace std;

/*
---------------------
PRIMITIVE DATA TYPES
---------------------
- int --> 4 Bytes
- char --> 1 Byte
- float --> 4 Bytes
- bool --> 1 Byte (True - 1 ; False - 0)
- double --> 8 Bytes

---------------
TYPE CASTING
---------------
- Method 1 : Conversion (Implicit)
    usually used to convert small data type --> big data type

- Method 2 : Casting (Explicit)
    usually used to convert big data type --> small data type
    Explicit means that it is being forced by programmer to execute
    which the default setup would not have allowed.
*/

int main(){
    int age1 = 25;
    char grade1 = 'a';
    float PI=3.14f;
    
    cout<<age1<<endl;
    cout<<PI<<endl;

    bool isSafe = false;
    cout<<isSafe<<endl;

    // TYPECAST Example
    double price = 100.90;
    int newPrice = (int)price;
    cout<<newPrice<<endl;
    /* In maths, we are used to round off numbers like 100.90 as 101.
    But in C++, whether the value is 100.99 or 100.01, after typecasting
    into integer, the value would become 100.
    */

    // CONVERSION Example
    char grade = 'A';
    int value = grade;
    cout<<value<<endl;
    // Here the variable "value" will output the result 65, which is 
    // the ASCII value of A.

    // INPUT
    int age;
    cout<<"Enter the age: ";
    cin>>age;
    cout<<"Your age is : "<<age<<endl;

    // OPERATORS
    int a = 10, b = 5;
    cout << "sum = "<<(a+b)<<endl;
    cout<<"difference = "<<(a-b)<<endl;

    /*
    --------------------------------------------------------
    OPERATORS (BINARY OPERATORS --> Requires two operators)
    --------------------------------------------------------
    1. Arithmetic --> +, -, *, /, % (modulo, gives the remainder)
                int / int = int
                float / int or int / float = float
            NOTE : in cases, where we operate with two different data
            types, the result is only influenced by the bigger data type
            among the two. In above example, it is float. 
            
            Although, float has same byte size as int i.e. 4, since 
            float has decimal values as well which int does not, it makes
            float bigger than int.

    2. Relational --> <, <=, >, >=, ==, ===, !==, !===

    3. Logical --> || (OR / Pipe operator), && (AND), ! (NOT)

    ----------------------------------------
    UNARY OPERATORS (Requires one operator)
    ----------------------------------------
    1. Increment --> ++
    2. Decrement --> --
    
    NOTE : a++ means It will first execute the task, only then will 
    it update the value, i.e. increment the value by 1.

    Whereas, ++a means It will first update the value, and then execute
    the task. Same is the case with Decrement.
    */

    return 0;
}