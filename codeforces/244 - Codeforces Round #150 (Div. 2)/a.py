# parsing input
n, k = map(int, input().split(" "))
wished_slices = input().split(" ")
wished_slices = [int(el) for el in wished_slices]
start_slice = 1

total_slices = n * k

for child in range(0, k):
    print(wished_slices[child], end=' ')
    slices_given = 1
    for slice in range(1, total_slices + 1):
        if slice not in wished_slices:
            print(slice, end=' ')
            wished_slices.append(slice)
            slices_given = slices_given + 1
        if slices_given >= n:
            break
    # next row for the next child
    print()