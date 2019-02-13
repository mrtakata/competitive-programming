n, k = list(map(int, input().split(' ')))
vet = list(map(int, input().split(' ')))

vet = sorted(vet)

# for number in vet:
#   print(number)
index = k - 1
if k == 0:
  if vet[index] <= 1:
    print(-1)
  else:
    print(1)
elif k == n:
  print(vet[index])
else:
  if vet[index] == vet[index + 1]:
      print(-1)
  else:
    print(vet[index])
