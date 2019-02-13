n_words = int(input())

while n_words > 0:
	word = input()
	if len(word) <= 10:
		print(word)
	else:
		print("{}{}{}".format(word[0], len(word)-2, word[-1]))
	n_words = n_words - 1