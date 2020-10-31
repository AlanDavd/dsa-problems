func maxProfit(prices []int) int {
	maxProfit := 0
	currentMin := 9999999

	for i:= 0; i < len(prices); i++ {
		if prices[i] < currentMin {
			currentMin = prices[i]
		} else if prices[i] - currentMin > maxProfit {
			maxProfit = prices[i] - currentMin
		}
	}

	return maxProfit
}