import math


def when_pa_surpasses(pa:float, pb:float, g1:float, g2:float) -> int:  
    years = 0
    gr1 = (1 + g1 / 100)
    gr2 = (1 + g2 / 100)
    while(pa <= pb and years < 101):  
        pa = math.floor(pa * gr1)
        pb = math.floor(pb * gr2)
        years = years + 1  
    return years  


n = int(input())
for i in range(n):
    pa, pb, g1, g2 = [float(val) for val in input().split(' ')]
    years = when_pa_surpasses(pa,pb,g1,g2)
    if years > 100:
        print("Mais de 1 seculo.")
    else:
        print(f"{years} anos.")