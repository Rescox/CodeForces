t = input()
s = []
for i in t:
    s.append(input())
i = 0
times = 0
for word in s:
    for letters in word:
        print(word[i])
        if word[i] != word[i+1]:
            times = times + 1
            word[i] = word[i+1] = ""
        i = i + 1
print(times)
