#include <iostream>
using namespace std;

int main(){
    // cout<<"Hello"<<endl;
    int teaLeaves = 50;
    float waterTemperature = 85.5;
    double priceOfTea = 299.99;
    char teaGrade = 'A';
    // Incase of teaGrade, if we have 'AB' as value, then the output shown will be 2 warnings but we
    // will get B as an final output. Same with the case with 'ABC' as a value, the output would be C.
    bool isTeaReady = 5;

    cout<<isTeaReady<<endl; 
    //The value being printed here is 1, since the value is true or true equivalent
    // Had the value for isTeaReady been 0, then the output would be 0. Same case with false as value.
    return 0;
}