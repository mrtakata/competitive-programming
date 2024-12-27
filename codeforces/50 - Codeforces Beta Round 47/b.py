def test():
    inputs = [
        "great10",
        "aaaaaaaaaa",
        "ab",
        "aba",
        "aaaa",
        "abab"
    ]
    for input in inputs:
        ans = solve(input)
        print(ans)        


def solve(string):
    chars = {}
    ans = 0
    for char in string:
        if char in chars:
            chars[char] += 1
        else:
            chars[char] = 1
    for char in chars:
        ans += chars[char] ** 2
    return ans
    
if __name__ == '__main__':
    # test()
    input = input()
    answer = solve(input)
    print(answer)