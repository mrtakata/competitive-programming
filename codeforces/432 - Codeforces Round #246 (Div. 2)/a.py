k, n = map(int, raw_input().split(' '))
participants = map(int, raw_input().split(' '))

#solution
participants = sorted(participants)
answer = 0

def my_range(start, end, step):
    while start <= end:
        yield start
        start += step

for i in my_range(3, k, 3):
    if(participants[i-1] + n <= 5):
        answer += 1
print(answer)
