func firstUniqChar(s string) int {
	seen := make([]int, 26)

	for _, value := range s {
		seen[value - 'a']++
	}

	for key, value := range s {
		if seen[value - 'a'] == 1 {
			return key
		}
	}
	return -1
}