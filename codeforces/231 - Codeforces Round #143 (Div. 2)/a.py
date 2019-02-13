n = int(input())
counter = 0
for i in range(0, n):
    # read input
    n_solvers = 0
    line = [int(x) for x in input().split()]
    for member in line:
        if member == 1:
            n_solvers = n_solvers + 1
            if n_solvers > 1:
                counter = counter + 1
                break
        
print(counter)