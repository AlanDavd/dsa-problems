func intersect(nums1 []int, nums2 []int) []int {
	seen := make(map[int]int, len(nums1))

	// Save all occurences of a value in nums1
	for _, v := range nums1 {
		seen[v]++
	}

	var result []int
	for _, v := range nums2 {
		// If a value in nums2 is in our seen table
		// Save it and substract one occurrence
		if seen[v] != 0 {
			result = append(result, v)
			seen[v]--
		}
	}
	return result
}