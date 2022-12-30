#include <stdio.h>

// 1    2   3     4         5
// 10   16  8   влево 3     и

int main(){
    int num;
    printf("Ввод числа в десятичной: "); // 1е задание
    scanf("%d", &num);

    printf("В шестнадцатеричной: %x\n", num); // 2е задание
    printf("В восьмеричной: %o, В восьмеричной сдвинутое на 3 влево: %o\n", num, num<<3); // 3е задание
    printf("В восьмеричной: %o, Отрицание: %o\n", num, ~num); // 4е задание

    int num2;
    printf("Ввод числа в восьмеричной: ");
    scanf("%o", &num2);
    printf("%o & %o = %o\n", num2, num, (num2 & num)); // 5e задание

    return 0;
}