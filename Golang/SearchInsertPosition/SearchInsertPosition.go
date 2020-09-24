func searchInsert(nums []int, target int) int {
	idx := 0
	if target == 0 && nums[0] != 0 {
		return idx
	}
	if target == nums[len(nums)-1]+1 || target > nums[len(nums)-1]{
		idx = len(nums)
		return idx
	}
	if target == nums[len(nums)-1] {
		return len(nums)-1
	}

	for i:=0; i < len(nums)-1; i++ {
		if target == nums[i] {
			idx = i
			break
		} else if nums[i]-1 == target {
			idx = i
			break
		} else if nums[i]+1 == target {
			idx = i+1
			break
		}
	}
	return idx
}