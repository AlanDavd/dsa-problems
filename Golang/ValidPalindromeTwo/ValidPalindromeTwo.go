func validPalindrome(s string) bool {
	isPalindrome := true
	i := 0
	j := len(s)-1

	for i < j {
		if s[i] != s[j] {
			return checkPalindrome(s, i, j-1) || checkPalindrome(s, i+1, j)
		}
		i++
		j--
	}

	return isPalindrome
}

func checkPalindrome(s string, low, high int) bool {
	palindrome := true
	for low < high {
		if s[low] != s[high] {
				palindrome = false
		}
		low++
		high--
	}
	return palindrome
}
