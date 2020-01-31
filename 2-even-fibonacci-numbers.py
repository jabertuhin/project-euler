"""
Problem Link: https://www.hackerrank.com/contests/projecteuler/challenges/euler002/problem
Resources:
1 - https://medium.com/@TheZaki/project-euler-2-even-fibonacci-numbers-2219e9438970
"""

def get_sum_of_even_fibonacci_numbers(number):    
    even_fn_1 = 8 #Fn-1
    even_fn_2 = 2 #Fn-2   

    result = even_fn_1 + even_fn_2
    while True:
        temp_result = 4*even_fn_1 + even_fn_2        
        if temp_result >= number:
            return result
        
        result += temp_result
        
        even_fn_2, even_fn_1 = even_fn_1, temp_result        
        
    return result

test_number = int(input().strip())

for _ in range(test_number):

    input_number = int(input().strip())
    
    print(get_sum_of_even_fibonacci_numbers(input_number))
