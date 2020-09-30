func lengthOfLastWord(s string) int {
	var i, last int

	for i, last = len(s)-1, len(s)-1; i>=0; i-- {
		if s[i] == ' ' {
			if last != i {
				break
			}
			last = i-1
		}
	}
	return last-i
}