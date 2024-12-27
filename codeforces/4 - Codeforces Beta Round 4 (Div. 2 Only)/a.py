def test():
    inputs = [
        [
            "4",
            "abacaba",
            "acaba",
            "abacaba",
            "acab",
        ],
        [
            "6",
            "first",
            "first",
            "second",
            "second",
            "third",
            "third",
        ],
        [
            "10",
            "a",
            "a",
            "a",
            "b",
            "b",
            "b",
            "c",
            "a",
            "a",
            "a",
        ]        
    ]
    for input in inputs:
        db = dict()
        n = int(input[0])
        strings = input[1:]
        for string in strings:
            ans = solve(string)
            print(ans)        
        print()


db = dict()
def solve(string):
    if string not in db:
        db[string] = 0
        return "OK"
    else:
        db[string] += 1
        str2 = string + str(db[string])
        db[str2] = 1
        return str2
    

if __name__ == '__main__':
    # test()
    n = int(input())
    for i in range(n):
        string = input()
        answer = solve(string)
        print(answer)