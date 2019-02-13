# Receiving and adjusting inputs
n = int(input())
array = input()
array = list(map(int, array.split(" ")))
aux = []

answer = 0
# solution
for i in range(1, n + 1):
    if array[i-1] in aux or array[i-1] > n: 
        answer = answer + 1
    else:
        aux.append(array[i-1])
# print answer
print(answer)