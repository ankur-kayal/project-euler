"""
Problem Name: Largest palindrome product
"""

N = 101102

def is_palindrome(n):
    return str(n) == str(n)[::-1]

def largest_palindrome_product(n):
    for i in range(n-1, 10**5, -1):
        if is_palindrome(i):
            for j in range(100, 1000):
                if i % j == 0 and i // j < 1000:
                    return i
    return -1

print(largest_palindrome_product(N))