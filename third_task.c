/*Approximating Euler's number "e" (the base of the natural logarithm)

The natural number can e=2.7182818… can be obtained by the following infinite sum:

    1    1    1    1    1
e = ── + ── + ── + ── + ── + …
    0!   1!   2!   3!   4!

Write a program to compute it with the first 20 terms! Note that the factorial can be a high number, use a double data type to store it!

Hint: if you have used nested loops, try to simplify your solution! A single loop is enough to solve the problem.*/

#include<stdio.h>
int fakt(int n){
    int szorz = 1;
    for (int i = 1; i <= n; i++){
        szorz = szorz * i;
    }
    return szorz;
}

int main()
{
    double e = 0.0;
    for (int i = 0; i < 20; i++){
        e = e + (1.0/(fakt(i)));
    }
    printf("e: %f\n", e);
    return 0;

}
