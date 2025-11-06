/*
THE SLIDING WINDOW TECHNIQUE
---------------------------------

Technique used for problems on contiguous subarrays or substrings. Kind of a window of 
a certain size that slides over the array. 

Instead of re-calculating everything for each new subarray, you efficiently update the 
window by adding the new element on the right and removing the old element on the left.


ONLY TO USE IT WHEN : problem asks for something related to a contiguous subarray / 
substring, like the longest, shortest, or a subarray with a target value.


PRACTICE QUESTION : 

Given an array of integers nums and a positive integer k, find the maximum sum of a 
contiguous subarray of size k.

Ex : nums = [2][1][5][1][3][2], k = 3
Expected Answer = 9 (the subarray [2][3][4] has max sum of 9)
*/

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int maxSum(vector<int>& nums, int k){
  if(k > nums.size()){
      return -1;
  }
  int window_sum = 0;
  for (int i = 0; i < k; i++){
       window_sum += nums[i];
  }
  int max_sum = window_sum;
  // Sliding the window
  for(int i = k; i < nums.size(); ++i){
       window_sum = window_sum + nums[i] - nums[i - k];
       max_sum = max(max_sum, window_sum);
  }
  return max_sum;
} 

int main() {
   vector<int> nums = {2,1,5,1,3,2};
   int k = 3;
   cout<< "Maximum sum : "<< maxSum(nums, k)<< endl;
   return 0;
}
