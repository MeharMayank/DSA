/*
In C++, the .cpp file does not run directly, instead it is compiled into an exe executable file which can be run. 
- There can be different methods in the language, like main or chai or anything. Hence, it was decided to make "main" as the 
standard for starting a C++ program.

- When, a C++ executabe is run, the OS knows that it needs to transfer the control to the main method so that now it can execute. 
Whatever, it want to do. 

- The first line of a C++ file often begins with : 
    # include <iostream> --> Here # is called preprocessor directives (There are several types of directives)

--> include is also a type of preprocessor directive. #include is an inclusion directive used for including something or use something
Now, this code includes all contents (code) from file named iostream (this method / file basically controls the input / output stream). 

NOTE : Blank spaces don't mean much in C++.
-------------------------------------------------------------------------------------------------------------------------------
FUN FACT : In Linux, extensions does not matter much generally, if a file is executable, it can be executed. Even txt file !!
-------------------------------------------------------------------------------------------------------------------------------

Now, let's focus on the second line of code : 
    using namespace std;

Now, there can be several methods inside a file. In order to prevent two methods having same name, the developers (C++) stared their work inside 
a "box" or region. Here, this region is called a namespace.
C++ allows you to create your own methods without interference of each other through namespace. 
If you are using something  from namespace std, (like cout) then you cannot use the same name for your method.

However, if you are not using namespace std, then you can have your own method (cout for ex.).

- You can create your own namespace. Follwing is the example : 
namespace myChai {
    void display(){
    }
}

There are several namespaces / libraries like Eigen (ML), QT etc. 
Sometimes, calling an entire namespace can be heavy. So, we can directly call the components that we wish to use using following syntax : 
    using std::cout;

- C++ is statically typed language and hence, defining data type is very important even for methods. 
    int main(){};
"<<" operators pass the value from right to left. 
    cout<<"Hello"<<endl;
    [ code file ]--> [compile]--> [execute]

There is difference between initialization and declaration. Declaration does not mean that the declared value will be used. 
    e.g. int score;
Initialization means using the declared variable. 
    e.g. score = 10;
One can do both at once if the variable value won't change : 
    e.g. int a = 5;

------------------------------------------------------------------------------------------------------------------------------------
Keywords are predefined words with specific meanings. Identifiers, on the other hand, are names that programmers give to variables,
functions, classes etc.
------------------------------------------------------------------------------------------------------------------------------------

                                DATA TYPES
                    1. PRIMITIVES --> int, float, double, char, boolean, void (basic, built in types)
                    2. DERIVED --> array, function, pointer, reference (Created from primitives)
                    3. USER DEFINED --> structure, union, enum, class, typedef
                -----------------------------------------------------------------------------------------------
                Key difference between double & float comes down to precision, memory usage and range 
                (Float - 7 digits || double - 15-16 digits)
*/