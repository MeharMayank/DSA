#include <iostream>
#include <string>

using namespace std;

int main(){
    string favoriteTea = "lemon tea \n";//Btw this "\n" (for newline) and "\t"(for tab) are known as 
    //escape sequence. Similar to escape character like "\"
    cout<<favoriteTea<<endl;

    string description = "known as \"best\" tea"; //Here "best" will be shown as a normal string and its
    //programmatic impact will be removed. This can be used to display path names as string and be assured
    //that it won't cause errors programmatically
    cout<<description<<endl;
    return 0;
}