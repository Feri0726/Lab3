/*
John Wallis, British mathematician developed the following expression to compute the constant π:

π   2·2   4·4   6·6   8·8
─ = ─── · ─── · ─── · ─── · …
2   1·3   3·5   5·7   7·9

Identify the repeating pattern in the formula, and write a program to evaluate it up to the first n factors (n is obtained from the user). Test the program with n=10, n=100 and n=1000 settings!
*/

#include<stdio.h>

int main(){
    double pi = 1.0;
    int n;
    printf("lenght");
    scanf("%d", &n);
    for (int i = 2; i <= n*2; i += 2){
        pi = pi * (1.0*(i*i)/((i-1)*(i+1)));
    }
    printf("pi value being: %f with accuracy of %d", pi*2, n);

    return 0;
}
