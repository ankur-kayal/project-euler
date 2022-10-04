/**
Project Euler problem# 5:
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

Below is an efficient solution of above problem using C++. Time complexity in the random access machine model is O(n log log n)
operations, a direct consequence of the fact that the prime harmonic series asymptotically approaches log log n.

*/

#include <iostream>

using namespace std;

int find_prime(int *numArray, int maxNum)
{
    int factor = 2;  // we will make 2 as the starting point.
    numArray[1] = 0; // rule out 1 from our logic to avoid incorrect results.

    // loop condition will check, if we are in our maximum number limit.
    // maxNum is the number till there we can find the prime numbers.
    while ((factor * factor) < maxNum)
    {
        for (int i = 2; i < maxNum; i++) // we start our itration from number 2 not from 0 or 1 to get correct results.
        {
            if (numArray[i] != 0) // if a number on current array index is not zero, it is a prime or we haven’t yet checked it.
            {
                // we are putting zeros on all multiples of prime numbers, one by one.
                if (numArray[i] != factor && (numArray[i] % factor) == 0)
                {
                    numArray[i] = 0;
                }
            }
        }
        ++factor;
    } // after the loop, array will have zeros on all non prime locations and prime numbers.
}

int main()
{
    int maxNum = 0;
    int result = 1;
    int num = 0;

    cout << "enter max number : ";
    cin >> maxNum;

    int *myArray = new int[maxNum];

    // we fill up the array till the number we want to find the smallest positive number that is evenly divisible.
    for (int i = 0; i < maxNum; i++)
    {
        myArray[i] = i;
    }

    // we will get prime numbers till the maxNum by calling below function.
    find_prime(myArray, maxNum);

    // returning array will have prime numbers and zeros on non prime locations.
    // we start our loop from 2 as first two locations are not use full so we reduce the itration of the loop.
    for (int i = 2; i < maxNum; i++)
    {
        // we only do our calculation on prime numbers.
        if ((myArray[i]) != 0)
        {
            num = myArray[i];
            // we take multiples of each prime number till the maxNum. meaning we raise each prime to power of a number.
            // which result will remain till maxNum.
            while ((num * (myArray[i])) < maxNum)
            {
                num = num * (myArray[i]);
            }
            result = num * result;
        }
    }
    // after the loop result will have smallest positive number that is evenly divisible by all of the numbers from 1 to maxNum.
    cout << "smallest positive number that is evenly divisible by all of the numbers from 1 to " << maxNum
         << "is : " << result << endl;
    delete[] myArray;
}