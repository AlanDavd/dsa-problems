func countPrimes(n int) int {
	primesTable := make([]bool, n)
	counter := 0

	for i := 2; i < n; i++ {
			if primesTable[i] {
					continue
			}
			counter++
			for j := i*i; j < n; j += i {
					primesTable[j] = true
			}
	}

	return counter;
}