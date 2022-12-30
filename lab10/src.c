#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int NOD(int, int);
int NOK(int, int);
int* toArray(int);

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("Наибольший общий делитель: %d\n", NOD(num1, num2));
    printf("Наименьшее общее кратное: %d\n", NOK(num1, num2));
    int n;
    scanf("%d", &n);
    int* numarray;

    numarray = toArray(n);
    printf("Цифры введенного числа:");
    for(int j = log10(n); j >= 0; j--){
        printf("\n%d", numarray[j]);
    }
return 0;
}

int NOD(int n, int m) {
    while(n && m) {
        if(n > m)
            n %= m;
        if(m > n)
            m %= n;
        if((n == 1) && (m == 1))
            break;
    }
    return (n | m);
}

int NOK(int n, int m){
    int nodders;
    nodders = NOD(n,m);
    return (n*m / nodders);

}

int* toArray(int number){
    int n = log10(number) + 1;
    int i;
    int *numberArray = calloc(n, sizeof(int));
    for(i = 0; i < n; i++, number /= 10){
        numberArray[i] = number % 10;
    }
    return numberArray;
}