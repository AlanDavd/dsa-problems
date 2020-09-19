class Solution {
public:
  int missingNumber(vector<int>& nums) {
    int numsSum = 0;
    int gaussSum = nums.size()*(nums.size()+1)/2;
    for (auto num : nums) {
      numsSum += num;
    }
    return gaussSum - numsSum;
  }
};