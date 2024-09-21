#include <iostream>
using namespace std;
/*
We would be using for loop for all pattern questions.
Although, it is not mandatory to do so, we would be using
for loop for the sake of consistency and simplicity.
*/
int main(){
    // SQUARE PATTERN
    /*
    1234
    1234
    1234
    1234
    */
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            cout<<j;
        } 
        cout<<endl;
    }

    /*
    ABC
    ABC
    ABC
    */
    for(int i=0;i<n;i++){
        char ch = 'A';
        for (int j=0;j<n;j++){
            cout<<ch;
            ch += 1;
        }
        cout<<endl;
    }

    /*
    ***
    ***
    ***
    */
    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
        cout << endl;
    }

    /*
    123
    456
    789
    */
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<n;j++){
            cout<<num;
            num++;
        }
        cout<<endl;
    }
    return 0;
}