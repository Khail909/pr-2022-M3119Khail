#include <stdio.h>
#include <stdlib.h>
#define SIZE 50

int main(){

    int text_len = 0, size = SIZE, c;
    char *text = malloc(size*sizeof(char));

    printf("Введите текст\n");
    while(1){
        c = getchar();
        text[text_len++] = c;
        if(text_len + 5 == size){
            size += SIZE;
            text = realloc(text, size);
        }
        if(c == '\n')
            break;
    }
    text[text_len]='\0';
    // Ввод
    printf("Введенный текст:\n");
    int counter = 0;
    while(text[counter] != '\0'){
        putchar(text[counter++]);
    }
    // Вывод


    printf("Введите число:\n");
    float a;
    scanf("%f", &a);
    printf("Введенное число: %f", a);

    return 0;
}