package main

import "fmt"

func main() {
	const allocate_size = 1 * 1024 * 1024 * 1024
	var test = new([allocate_size]*[allocate_size]int)
	var count = 0

	for {
		test[count] = new([allocate_size]int)
		count++
		fmt.Printf("count:%d size:%d\n", count, len(test[count]))
	}

	fmt.Printf("completed! count:%d\n", count)
}
