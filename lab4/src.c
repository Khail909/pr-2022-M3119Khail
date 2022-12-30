#include <stdio.h>

long check(int, int, int);

int main(){
    // Первое
    int num, left = 11, right = 12;
    scanf("%d", &num);
    printf("%ld\n\n", check(left, right, num));
    
    // Второе
    int num2;
    scanf("%d", &num2);

    if(num2 &(1 << 10)){
        printf("1\n");
    }
    else{
        printf("0\n");
    }
    
    return 0;
}

long check(int left, int right, int num){
    long a = (right - num) & 2147483648;
    long b = (num - left) & 2147483648;
    return a+b;
}