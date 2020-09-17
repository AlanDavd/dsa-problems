class Solution {
public:
  int hammingDistance(int x, int y) {
    int counter = 0;
    int currentBit = x ^ y;
    while(currentBit) {
      if (currentBit % 2) {
        counter++;
      }
      currentBit /= 2;
    }
    return counter;
  }
};