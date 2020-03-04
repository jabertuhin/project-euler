def product(num_str: str)->int:
    prod = 1
    for digit in num_str:
        prod *= int(digit)
    return prod

def solution(num_str: str, n: int, k: int)->int:
    large_prod = 0
    for i in range(n):
        if i+k < n:
            large_prod = max(large_prod, product(num_str[i:i+k]))
        else:
            break
    return large_prod

t = int(input().strip())
for a0 in range(t):
    n,k = input().strip().split(' ')
    n,k = [int(n),int(k)]
    num = input().strip()

    print(solution(num, n, k))