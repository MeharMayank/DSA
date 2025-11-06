/*
ARRAYS / STRINGS : HASHING FOR FREQUENCY COUNTS

Hashing is about mapping a key to a value. For frequency counts, you use a Hash Map (or 
a Dictionary in Python) to store elements as keys and their counts as values. This gives
you an incredibly fast way (O(1) on average) to look up how many times and element has 
appeared.

WHEN TO USE IT : Whenever a problem requires you to count the occurances of items, find 
duplicates, or check for unique elements in an efficient way. 


PRACTICE QUESTION : Given a string s, find the first non-repeating character in it and 
return its index. If it does not exist, return -1. 

Ex : s = "leetcode"
Expected Answer : 0 (Since the character is not present)
*/

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int firstUChar(string s){
  unordered_map<char, int> freq_map;
  
  // Building the Freq Map
  for (char c: s){
       freq_map[c]++;
  }

  //Find the first character with Freq 1
  for (int i = 0; i < s.length(); ++i){
      if (freq_map[s[i]] == 1) {
          return i;
      }
  }
  return -1;
}

int main () {
   string s;
   cout<<"Enter a string : "<<endl;
   cin>>s;
   cout<<"First Unique Charcter Index : "<<firstUChar(s)<<endl;
   return 0;
}
