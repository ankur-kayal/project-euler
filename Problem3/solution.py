"""
Problem Name: Largest prime factor
Time Complexity: O(sqrt(N))
Space Complexity: O(1)
"""

N = 600851475143

def largest_prime_factor(n):
    """Returns the largest prime factor of N"""
    i = 2
    while i**2 <= n:
        while n % i == 0:
            n //= i
        i += 1
    return n

print(largest_prime_factor(N))

