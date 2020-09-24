func removeElement(nums []int, val int) int {
	counter := 0

	for i:=0; i <= len(nums)-1; i++ {
		if nums[i] != val {
			nums[counter] = nums[i]
			counter++
		}
	}
	return counter
}