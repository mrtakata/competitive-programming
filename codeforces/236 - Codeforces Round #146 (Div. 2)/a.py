name = input()

dict = {}
answer = 0

for letter in name:
  if letter not in dict:
    dict[letter] = 1
    answer = answer + 1

if answer % 2 == 0:
  print("CHAT WITH HER!")
else:
  print("IGNORE HIM!")
