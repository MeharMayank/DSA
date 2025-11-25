#include <iostream>
using namespace std;

/* FUNCTION STRUCTURE :
    returnType functionName(parameters){
      // function body
}
*/

int checkTemperature(int temperature) {
return temperature;
}

//Declaration of function
void serveChai (int cups);
// It is fine to only have the function declared. Function can be defined
// seperately as well

void makeChai();

/*
Functions can share same name. The differentiator in those cases is either 
the type of parameters, number of parameters etc. This is called Function
Overloading
*/
void serveChai(string teaType = "Masala Tea"/* Default Parameter */){
    cout<<" Serving "<<teaType<< endl;
};

/*
ONE MORE EX OF FUNCTION OVERLOADING : 
void serveChai(int cup, int tealeaves){
}
*/

/*
In case we want the function to handle the case in which the parameter is empty,
we can enter our own default value as follows : 
void serveChai(string teaType = "Masala Tea"){}

In this example, if you add default value for int parameter serveChai 
function as well, for eg : 
void serveChai(int cups = 8){};
then it would cause error / clash as now you are not
only passing an empty parameter but now the compiler does not know which
default value to use
*/

int main(){
    int temp = checkTemperature(50);
    // cout<<temp;
    // serveChai(3);
    // makeChai();
    serveChai("Lemon Chai"); // Actual Parameter
    return 0;
}

//Defining Function
void serveChai(int cups){
    // Formal Parameter : int cups = 4
    cout<<"Serving "<< cups << " of chai"<<endl;
}

void makeChai(){
    cout<<"Boiling water, adding tea leaves, straining..."<<endl;
}