/*
2.	Write a program to receive integers, the program ends when user input 0. 
Print the minimum (different from 0) and maximum number (different from 0) among the received numbers.
Ex:
 ____________________________________
| Input: -3 5 -2 9 8 10 5 -1 0       |
| Output: Max: 10                    |
|         Min: -3                    |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    //testing variable, applying it to your algorithm for auto-evaluating
    argc--;
    int testcase[argc], i;
    for (i = 0; i < argc; i++) {
        if (atoi(argv[i + 1]) == 0) {
            argc = i;
            break;
        } else
            testcase[i] = atoi(argv[i + 1]);
						
    }
    //Your codes here
    int max = testcase[0];
    int min = testcase[0];
    int currentIndex = 0;
    while (testcase[currentIndex] != 0) {
        printf("%d\n", testcase[currentIndex]);
        printf("max now %d\n", max);
        printf("min now %d\n", min);
        int currentValue = testcase[currentIndex];
        if (currentValue > max) {
            max = currentValue;
        }
        if (currentValue < min) {
            min = currentValue;
        }
        currentIndex++;
    }
    printf("Max: %d\n", max);
    printf("Min: %d", min);
    return 0;
}
