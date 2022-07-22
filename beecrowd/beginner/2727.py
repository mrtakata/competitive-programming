# import pytest
import sys


alphabet = [
    'a','b','c',
    'd','e','f',
    'g','h','i',
    'j','k','l',
    'm','n','o',
    'p','q','r',
    's','t','u',
    'v','w','x',
    'y','z'
]


def decipher_letter(code:str)-> str:
    split = code.split(' ')  # '.' -> ['.'], '. .' -> ['.', '.']
    row = len(split) - 1 
    column = len(split[0]) - 1 
    index = row * 3 + column
    letter = alphabet[index]
    return letter


# @pytest.mark.parametrize(
#     "code, expected",
#     [
#         ('.', 'a'), 
#         ('..', 'b'),
#         ('...', 'c'),
#         ('. .', 'd'),
#         ('.. ..', 'e'),
#         ('... ...', 'f'),
#         ('. . .', 'g'),
#         ('.. .. ..', 'h'),
#         ('... ... ...', 'i'),
#         ('... ... ... ...', 'l'),
#         ('... ... ... ... ...', 'o'),
#     ],
# )
# def test_answer(code, expected):
#     assert decipher_letter(code) == expected


if __name__ == "__main__":
    while True:
        try:
            n = int(input()) # n vai vir no máximo 50
        except Exception as e:
            sys.exit()
        inputs = []
        for i in range(n):
            code = input()
            inputs.append(code)
        for code in inputs:
            letter = decipher_letter(code)
            print(letter)