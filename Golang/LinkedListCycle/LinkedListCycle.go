/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
// Tortoise and Hare algorithm
// https://en.wikipedia.org/wiki/Cycle_detection#Floyd.27s_Tortoise_and_Hare
func hasCycle(head *ListNode) bool {
	// There's no list, thus no cycle
	if head == nil {
		return false
	}

	quick := head.Next
	slow := head

	for slow != quick {
		if quick == nil || quick.Next == nil {
			return false
		}
		slow = slow.Next
		quick = quick.Next.Next
	}
	return true
}