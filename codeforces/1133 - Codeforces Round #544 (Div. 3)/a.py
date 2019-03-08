import math
time1 = input()
time2 = input()

h1 = int(time1.split(':')[0])
h2 = int(time2.split(':')[0])
m1 = int(time1.split(':')[1])
m2 = int(time2.split(':')[1])

if(m2 >= m1):
    contest_duration = m2-m1
else:
    contest_duration = m2 + 60 - m1
    h2 = h2-1
contest_duration = contest_duration + (h2-h1) * 60

contest_duration = int(contest_duration/2)
hours = math.floor(contest_duration / 60)
ha = h1 + hours
if(hours > 0):
    contest_duration = contest_duration - 60 * hours

ma = m1 + contest_duration
if(ma >= 60):
    ma = ma - 60
    ha = ha + 1

ha = int(ha)
ma = int(ma)
# Parsing
if(ha < 10):
    ha = "0" + str(ha)
if(ma < 10):
    ma = "0" + str(ma)

print("{}:{}".format(ha, ma))