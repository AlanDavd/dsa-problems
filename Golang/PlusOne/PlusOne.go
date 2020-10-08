func plusOne(digits []int) []int {
	// Loop backwards through the array
	for i := len(digits)-1; i >= 0; i-- {
		// If the digit is 9, set it to 0
		// Else add one and return digits 'cause the addition won't change any other digit
		if digits[i] < 9 {
			digits[i]++
			return digits
		}
		digits[i] = 0
	}
	// If all the values are [9,9,9,9], after the previous code it will look like this [0,0,0,0]
	// Then all we have to do is resize the array to add a 1 at the beginning
	result := make([]int, len(digits)+1)
	result[0] = 1
	return result
}