a = input()
b = input()
c = input()

dictA = {}
dictB = {}
answerFlag = True

for letter in a:
	if letter not in dictA:
		dictA[letter] = 1
	else:
		dictA[letter] = dictA[letter] + 1

for letter in b:
	if letter not in dictA:
		dictA[letter] = 1
	else:
		dictA[letter] = dictA[letter] + 1

for letter in c:
	if letter not in dictB:
		dictB[letter] = 1
	else:
		dictB[letter] = dictB[letter] + 1

for letter in dictA:
	if letter not in dictB:
		answerFlag = False
		break
	elif dictA[letter] != dictB[letter]:
		answerFlag = False
		break

print("YES") if answerFlag and len(dictA) == len(dictB) else print("NO")