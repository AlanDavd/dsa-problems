/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
 func addTwoNumbers(l1 *ListNode, l2 *ListNode) *ListNode {
	rest := 0
	node := &ListNode{}
	temp := node

	for l1 != nil || l2 != nil {
		currentSum := rest

		if l1 != nil {
			currentSum += l1.Val
			l1 = l1.Next
		}

		if l2 != nil {
			currentSum += l2.Val
			l2 = l2.Next
		}

		rest = currentSum / 10
		temp.Next = &ListNode{Val: currentSum%10}
		temp = temp.Next
	}

	if rest != 0 {
		temp.Next = &ListNode{Val: rest}
	}
	return node.Next
}