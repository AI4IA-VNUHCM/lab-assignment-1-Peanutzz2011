/*
1.	Write a program that receives an n-digit number then output
its n digits from least to most significant:
Ex:
 ____________________________________
| Input: 132768                      |
| Output: 8 6 7 2 3 1                |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    //testing variable, applying it to your algorithm for auto-evaluating
    int testcase = atoi(argv[1]);
    //Your codes here
    int leftover = testcase;
    int temp = 1;
    while (leftover > 0) {
        int k = (leftover/temp)%10;
        printf("%d ", k);
        
        leftover /= 10;
    }
    return 0;
}