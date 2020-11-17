class Solution {
public:
  int search(vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;

    while (low <= high) {
      int middle = low + ((high-low)/2);
      if (target == nums[middle]) {
        return middle;
      }
      // nums low to middle is already sorted 
      if (nums[low] <= nums[middle]) {
        if (target > nums[middle] || target < nums[low]) {
          low = middle + 1;
        } else {
          high = middle - 1;
        }
      } else {
        // nums middle to high is already sorted 
        if (target < nums[middle] || target > nums[high]) {
          high = middle - 1;
        } else {
          low = middle + 1;
        }
      }
    }
    return -1;
  }
};