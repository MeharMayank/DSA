#include <iostream>
#include <vector>
/*
NOTE: In C++, standard arrays (int arr[5]) are rigid. You must decide the size
before you run the program. If you need more space later, you cannot simply 
expand the array; you have to create a brand new, larger array and manually
copy everything over.

vector library / vector solves this. It is a dynamic array that handles memory 
management automatically. It grows and shrinks as needed, making it the 
preferred choice for lists of data where the total number of elements isn't 
known upfront.
*/
using namespace std;
/*
NOTE : Although modern languages like C++ support OOP features, C++ is not a 
'pure' Object-Oriented language bec ause it allows for non-OOP coding styles.
Java, on the other hand, is regarded as a true OOP language because it rigidly
enforces objects; in Java, you cannot write even a minimal program without creating
a class and an object.

The reason for this is as follows (note : OOP is a programming style) :
C++ directly supports a variety of programming styles. In this, C++ 
deliberately differs from languages designed to support a single way of 
writing programs.

FUN FACT : Class name always start with uppercase letters. This is a standard
practice for all languages and similarly, always lowercase start for objects.
*/

/*
CLASSES & OBJECTS

The SBI Form Analogy: Understanding Classes & Objects
Let's look at how a standard SBI Account Opening Form works to understand the difference between a Class and an Object.

1. The Class (The Master Template)
----------------------------------
Imagine the bank has a digital Master Template of the application form saved 
on their main server. This template is empty.
It defines the structure: it has blank boxes for "Name," "Age," "Address," 
and "Phone Number."
It doesn't belong to any specific person yet; it is just a blueprint or a 
design. In programming, this Master Template is the Class. It defines the 
rules and structure but holds no specific data.


2. The Object (The Filled Copies)
----------------------------------
Now, imagine the bank prints 50 copies of that Master Template and hands 
them out to customers standing in line.

Customer A fills out a copy with their details (Name: Rahul, Age: 25).
Customer B fills out another copy with their details (Name: Priya, Age: 30).

Even though both forms came from the same design, they are now unique entities 
containing different information. In programming, these specific, filled-out 
copies are the Objects. They follow the structure of the Class, but they hold 
their own unique data.

3. Updating the Structure
---------------------------
If SBI decides that they need to start collecting "Email Addresses" from 
everyone, they don't manually draw a box on every single paper form in 
existence. Instead, they go back to the Master Template (Class) and add an 
"Email" field there.

Any new copies (Objects) created from that point on will automatically 
have this new structure.
*/
class Chai{
    public :
    // data members (attributes) aka fancy name for variables (kind of)
    // in simple terms, all variables created inside a class are referred
    // to as either attributes or data members
        string teaName;
        int servings;
        vector<string> ingredients;

        // Member function (Declaring the functionality)
        void displayChaiDetails(){
            cout<<"Tea Name : "<<teaName<<endl;
            cout<<"Servings : "<<servings<<endl;
            cout<<"Ingredients : ";
            for(string ingredient : ingredients){ // loop for displaying vector
                cout<< ingredient<<" ";
            }
            cout<<endl;
        }
};

int main(){
    Chai chaiOne; //chaiOne is object
    /*
    Now, one may think that using . they may be able to access any property under
    the Chai class, but still it will show error. We need to understand Access Modifiers 
    first.

    chaiOne.teaName = "Lemon tea"; WOULD CAUSE ERROR. The reason for this is,
    that classes by default have private access. And similarly public in a struct
    or a union.

    Following is a sample code piece for demonstrating the types of access modifiers
    in the class : 

    class Point{
    public : 
        Point(int, int) //Declare public constructor.;
        Point(); // Declare public default constructor.
        int &x(int); //Declare public accessor.
        int &y(int); // Declare public accessor.

    private :  // Declare private state variables
        int _x;
        int _y;

    protected : //Declare protected function for derived classes only 
        Point ToWindowCoords();
    };
    */
    chaiOne.teaName = "lemon tea";
    chaiOne.servings = 2;
    chaiOne.ingredients = {"Water", "lemon", "Honey", "tea"};
    chaiOne.displayChaiDetails();

    Chai chaiTwo;
    chaiTwo.teaName = "Masala tea";
    chaiTwo.servings = 4;
    chaiTwo.ingredients = {"Water", "Milk", "Ginger", "Masala", "Tea"};
    chaiTwo.displayChaiDetails();
    return 0;
}