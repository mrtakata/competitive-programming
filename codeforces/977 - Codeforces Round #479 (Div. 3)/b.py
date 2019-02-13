length = int(input())
ss = input()

max = 0
max_substring = ""
dict = {}

for i in range(0, length - 1):
  substring = ss[i:i+2]
  if(substring not in dict):
    dict[substring] = 1
  else:
    dict[substring]= dict[substring] + 1

  if (dict[substring] > max):
    max = dict[substring]
    max_substring = substring

print(max_substring)
