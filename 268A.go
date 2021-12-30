package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	var hUniform, gUniform []int
	hUniform = make([]int, n)
	gUniform = make([]int, n)
	for i := 0; i < n; i++ {
		fmt.Scan(&hUniform[i])
		fmt.Scan(&gUniform[i])
	}
	var cont int = 0
	for i := 0; i < n; i++ {
		for j := 0; j < n; j++ {
			if hUniform[i] == gUniform[j] {
				cont++
			}
		}
	}
	fmt.Println(cont)
}
