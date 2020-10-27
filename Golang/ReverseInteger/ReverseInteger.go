import "math"

func reverse(x int) int {
	result := 0

	for x != 0 {
		last := x % 10
		x /= 10
		next := result * 10 + last

		if (next-last)/10 != result || next > math.MaxInt32 || next < math.MinInt32 {
			return 0
		}
		result = next
	}
	return result
}