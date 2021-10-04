/*
3.	Write a program to find all prime number less than a given integer N
(optional: provide an optimal solution)
Ex:
 ____________________________________
| Input: 10                          |
| Output: 2 3 5 7                    |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

bool primeTable[9999];

bool isPrime(int n) {
    for (int i = 0; i <= n; ++i) {
        primeTable[i] = true;
    }
    int k = 2;
    int p = 1;
    primeTable[2] = true;
    while (k <= n) {
        if (!primeTable[k]) {
            k++;
            continue;
        }
        primeTable[k * p] = true;

        while (k * p <= n) {
            p++;
            primeTable[p * k] = false;
        }
        k++;
        p = 1;
    }
    return primeTable[n];
}

int main(int argc, char *argv[]) {
    //testing variable, applying it to your algorithm for auto-evaluating
    int testcase = atoi(argv[1]);
    //Your codes here
    int i = 0;
    while (i < testcase) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
        i++;
    }

    return 0;
}
