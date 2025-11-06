/*
TWO POINTERS
-------------

NOTE : This approach will be applicable to questions on 1-P, 2-P, 3-P till K-P

- Physical significance of the pointer (Range (i,j) or Pair) :: What they are representing ?
- How to initialize the pointer ?
- How to change the pointer / move the pointer ?
- When to stop
*/

/*  Q. Given a sorted array, find the no. of pair whose sum = k.

Eg. A : [1,4,4,5,5,5,6,6,11]
    K = 11
    
    So based on several P&C, we can say that there are 6 pairs whose sum gives the value
    K has. 

   If we used, hash map solution, that would have given us the solution in O(n) TC as 
well as O(n) SC. 

In case of limited/ consistent storage, we will have to use two pointer approach.
---------------------------------------------------------------------------------
*/

/*
Practice Question : Given a sorted array of integers nums and a target integer target,
return the indices of the two numbers such that they add up to target.

Ex : nums = [2][7][11][15], target = 9
Expected Ans : [0][1] (because nums[0] + nums[1] == 9)
*/

// Logic : Left & Right pointers add up and check for all possibilities which satisfies
// the condition
#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    int left = 0;
    int right = nums.size() - 1;
    while (left<right){
       int sum = nums[left] + nums[right];
       if (sum ==target){
           return {left, right};
       } else if (sum <target) {
           left++;
       }
       else {
          right --;
       }
     }
     return {};
 }


int main(){
   vector<int> nums = {2,7,11,15};
   int target = 9;
   vector<int> result = twoSum(nums, target);
   if(!result.empty()){
      cout<<"Indices"<<": "<<result[0]<<","<<result[1]<<endl;
   }
   else{
      cout<<"No pair found."<<endl;
   }
   return 0;
}
