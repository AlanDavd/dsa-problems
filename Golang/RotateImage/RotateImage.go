func rotate(matrix [][]int)  {
	mLen := len(matrix)

	// Turn rows to columns - transpose matrix
	for i := 0; i < mLen; i++ {
		for j := i; j < mLen; j++ {
			temp := matrix[i][j]
			matrix[i][j] = matrix[j][i]
			matrix[j][i] = temp
		}
	}

	// Flip horizontally
	for i := 0; i < mLen; i++ {
		for j := 0; j < (mLen/2); j++ {
			temp := matrix[i][j]
			matrix[i][j] = matrix[i][mLen-1-j]
			matrix[i][mLen-1-j] = temp
		}
	}
}
