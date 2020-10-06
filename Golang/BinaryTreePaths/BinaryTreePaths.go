/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
 func binaryTreePaths(root *TreeNode) []string {
	// All tree paths
	paths := make([]string, 0)

	// If root has not leaves, do nothing
	if root != nil {
		// if tree has leaves, find all the root-to-leaf paths
		treeTraversal(root, "", &paths)
	}

	return paths
}

func treeTraversal(node *TreeNode, s string, paths *[]string) {
	if node.Left == nil && node.Right == nil { // Base case
		// If the current node has no more leaves, it means it is a leaf
		// We add it to our paths 
		*paths = append(*paths, fmt.Sprintf("%s%d", s, node.Val))
	} else {
		// The current node has leaves, traverse it
		path := fmt.Sprintf("%s%d->", s, node.Val)
		if node.Left != nil {
			treeTraversal(node.Left, path, paths)
		}
		if node.Right != nil {
			treeTraversal(node.Right, path, paths)
		}
	}
}
