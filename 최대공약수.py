# 최대공약수, 최소공배수 구하기

def gcdlcm(a, b):
    c, d = max(a, b), min(a, b)
    t = 1
    while t > 0 :
        t = c % d
        c, d = d, t
    answer = [c, int(a* b / c)]

    return answer

print(gcdlcm(100, 32))