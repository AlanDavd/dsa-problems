func strStr(haystack string, needle string) int {
	// Sliding window technique
	for i := 0; i < len(haystack)-len(needle)+1; i++ {
		window := haystack[i:i+len(needle)]
		// i => window
		// 0 => h, e
		// 1 => e, l
		// 2 => l, l
		if window == needle {
			// ll == ll return i
			return i
		}
	}
	return -1
}