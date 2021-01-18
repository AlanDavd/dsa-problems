class Solution {
    public int uniquePathsWithObstacles(int[][] obstacleGrid) {
        // We can move if there's an obstacle in our position
        if (obstacleGrid[0][0] == 1) {
            return 0;
        }
        // We set [0][0] to 1 since there's only onw way to reach that cell
        obstacleGrid[0][0] = 1;
        
        // Iterate the first column
        // Set the cell value to 0 if the current cell contains a 1,
        // otherwise set the cell to a value of the previous cell (cell aboce)
        for (int i = 1; i < obstacleGrid.length; i++) {
            obstacleGrid[i][0] = (obstacleGrid[i][0] == 0 && obstacleGrid[i - 1][0] == 1) ? 1 : 0;
        }
        
        // Iterate the first row
        // Set the cell value to 0 if the current cell contains a 1,
        // otherwise set the cell to a value of the previous cell (cell to the left)
        for (int i = 1; i < obstacleGrid[0].length; i++) {
            obstacleGrid[0][i] = (obstacleGrid[0][i] == 0 && obstacleGrid[0][i-1] == 1) ? 1 : 0;
        }
        
        // If a cell does not contain an obstacle, the number of ways to reach
        // that cell is the sum of the number of ways from the cell above plus
        // the cell to the left of it
        // If it contains an obstacle, set it to 0
        for (int i = 1; i < obstacleGrid.length; i++) {
            for (int j = 1; j < obstacleGrid[0].length; j++) {
                if (obstacleGrid[i][j] == 0) {
                    obstacleGrid[i][j] = obstacleGrid[i - 1][j] + obstacleGrid[i][j - 1];
                } else {
                    obstacleGrid[i][j] = 0;
                }
            }
        }
        
        return obstacleGrid[obstacleGrid.length - 1][obstacleGrid[0].length - 1];
    }
}
