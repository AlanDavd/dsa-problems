class Solution {
    public int minPathSum(int[][] grid) {
        // If grid does not exist, we already have the answer
        if (grid == null || grid.length == 0) {
            return 0;
        }
        
        // Mirror of the grid
        // Each cell has the minimum sum of up until that specific cell
        int[][] dp = new int[grid.length][grid[0].length];

        for (int i = 0; i < dp.length; i++) {
            for (int j = 0; j < dp[i].length; j++) {
                dp[i][j] += grid[i][j]; // Add the values
                if (i > 0 && j > 0) {
                    // There are only two ways a value comes from: left and up
                    // If both values come, we take the minimum
                    dp[i][j] += Math.min(dp[i-1][j], dp[i][j-1]);
                } else if (i > 0) {
                    // Take the up value
                    dp[i][j] += dp[i-1][j];
                } else if (j > 0) {
                    // Take the left value
                    dp[i][j] += dp[i][j-1];
                }
            }
        }
        
        return dp[dp.length-1][dp[0].length-1];
    }
}

/*
GRID
[
    [1,3,1],
    [1,5,1],
    [4,2,1]
]

DP
[
    [1,4,5],
    [2,7,6],
    [6,8,7]
]

For dp[1][1]
up = 1 + 3 + 5 = 8
left = 1 + 1 + 5 = 7
min(left, up) = 7
*/
