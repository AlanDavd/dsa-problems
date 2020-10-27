/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func sortedArrayToBST(nums []int) *TreeNode {
	return buildTree(nums)
}

func buildTree(nums []int) *TreeNode {
	if len(nums) < 1 {
		return nil
	}
	if len(nums) == 1 {
		return &TreeNode{Val: nums[0]}
	}

	middle := len(nums)/2
	root := &TreeNode{Val: nums[middle]}

	leftSubTree := nums[:middle]
	root.Left = buildTree(leftSubTree)

	rightSubTree := nums[middle+1:]
	root.Right = buildTree(rightSubTree)

	return root
}