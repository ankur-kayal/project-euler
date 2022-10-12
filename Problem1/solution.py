"""
Problem Name : Multiples of 3 and 5
Time Complexity : O(1)
Space Complexity : O(1)
"""

N = 1000

def main():
    n = N - 1
    total_sum = 3 * (n // 3) * ((n// 3) + 1) // 2
    total_sum += 5 * (n // 5) * ((n // 5) + 1) // 2
    total_sum -= 15 * (n // 15) * ((n // 15) + 1) // 2
    print(total_sum)


if __name__ == "__main__":
    main()
