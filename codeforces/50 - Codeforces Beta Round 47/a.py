def test():
    inputs = [
        "3 3",
        "2 4",
        "1 5",
        "1 1",
        "16 16",
    ]
    for input in inputs:
        m, n = [int(i) for i in input.split(' ')]
        ans = solve(m, n)
        print(ans)        


def solve(m, n):
    area = m * n
    return area // 2


if __name__ == '__main__':
    input = input()
    m, n = [int(i) for i in input.split(' ')]
    area = m * n
    ans = solve(m, n)
    print(ans)
    