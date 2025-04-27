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

    /*
    ABC
    DEF
    IJK
    */
    char ch = 'A';
    for(int i=1;i<=n;i++){
        for(int j=0;j<n;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }

    // TRIANGLE PATTERN
    /*
    *
    **
    ***
    ****
    */
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    /*
    1
    22
    333
    4444
    */
    int number = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<number;
        }
        number++;
        cout<<endl;
    }

    /*
    A
    BB
    CCC
    DDDD
    EEEEE
    */
    char char1 = 'A';
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<char1;
        }
        char1++;
        cout<<endl;
    }

    /*
    1
    12
    123
    1234
    */
    for (int i=0;i<n;i++){
        for (int j=1;j<=i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }

    /*
    1
    21
    321
    4321
    */
    for(int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }

    /*
    1
    2 3
    4 5 6
    7 8 9 10
    */
    int number1 = 1;
    for (int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<number1;
            number1++;
        }
        cout<<endl;
    }

    // Using Backwords logic
    int number2=1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){
            cout<<number2;
            number2++;
        }
        cout<<endl;
    }

    // Character version
    char character = 'A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<character;
            character++;
        }
        cout<<endl;
    }

    return 0;
}