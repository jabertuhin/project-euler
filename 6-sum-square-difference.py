def sum_of_the_squares(n):
    return (n*(2*n + 1)*(n+1))//6
    

def square_of_the_sum(n):
    return ((n*(n+1))//2)**2

t = int(input().strip())
for a0 in range(t):
    n = int(input().strip())

    answer = abs(sum_of_the_squares(n) - square_of_the_sum(n))

    print(answer)
