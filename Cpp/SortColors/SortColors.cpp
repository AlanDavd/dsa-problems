class Solution {
public:
  void sortColors(vector<int>& nums) {
    int red = 0;
    int white = 0;
    int blue = 0;

    for (auto num: nums) {
      if (num == 0) {
        red++;
      } else if (num == 1) {
        white++;
      } else if (num == 2) {
        blue++;
      }
    }

    int i = 0;
    while (red > 0) {
      nums[i] = 0;
      i++;
      red--;
    }
    while (white > 0) {
      nums[i] = 1;
      i++;
      white--;
    }
    while (blue > 0) {
      nums[i] = 2;
      i++;
      blue--;
    }
  }
};