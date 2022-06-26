p/*
Create a programme that finds all the prime number from 3 to 100

There is no input io the programme
Output will prime number separated by a space on a singleline
Create an array that will store each prime number as it is generated
You can hard code 2 and 3
You should use the loops and a loop to print out the primes arrary

Criteria to identify a prime number is that it is not evenly divisible by any other previous prime numbers e.g.
p/primes[i] >= primes[i]
test to ensure that value of p does not exceed the square root of primes?
You can immediately skip all even numbers as they are not primes (increment by 2)

*/

#include <stdio.h>

int main(){

// define varibles
int p, i, j, maxNum = 100, numPrimes = 2;
int primes[50]; //max size of primes array is half of the max number to check

// initialise the first to elements
primes[0] = 2;
primes[1] = 3;

//first loop increments p from 0 to max number by steps of 2
for (p=5;p<(maxNum+1);p += 2)
{
    printf("\nChecking p:%d\n",p);//debug check
    printf("NumPrimes:%d\n",numPrimes);//debug check

    for(i=0;i<(numPrimes);i++)
    {
        printf("i:%d ",i);//debug check
        // check for prime
        if (p % primes[i] == 0)
        {
            break;
        }
        if (i == (numPrimes-1)) //changed from numPrimes to numPRimes-1
        {
            printf("\n %d is a prime, adding to array\n",p)
            primes[i+1] = p; //changed from i to i+1 
            numPrimes++;
        }
    }   
}

// print out primes[] array
for (j = 0; j < numPrimes; j++)
{
    printf("The Primes are: %d ",primes[j]);
}
    return 0;
}

//  2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
/* NOTES:
Check if prime if it is not divisible by any other prime number
Any multiple integer can be expressed by a multiplication of prime numbers

Optimisation:
any non-prime must have a factor less than the square root of it
we only need to test until square root of the prime

for (i = 1; isPrimr && p/primes[i] >= pimes [i]; ++i)

Remember to initialize all arrays to 0 i.e. int primes[50] = {0};
p<(maxNum+1) can be expressed as p<=maxNum
*/
