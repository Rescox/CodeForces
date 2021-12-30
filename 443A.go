package main1

import (
	"bufio"
	"fmt"
	"os"
	"strings"
	"unicode"
)

func main() {
	var sLookedCharacters string
	in := bufio.NewReader(os.Stdin)
	sInputCharacters, _ := in.ReadString('\n')
	for _, char := range sInputCharacters {
		if unicode.IsLetter(char) && !(strings.Contains(sLookedCharacters, string(char))) {
			sLookedCharacters = sLookedCharacters + string(char)
		}
	}
	fmt.Println(len(sLookedCharacters))
}
