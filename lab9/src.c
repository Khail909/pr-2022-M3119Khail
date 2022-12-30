#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 50
#define N 10

int* toArray(int);


int main(){

    int text_len = 0, size = SIZE, c, numcounter = 0, charcounter = 0;
    char *text = malloc(size*sizeof(char));

    printf("Введите текст\n");
    while(1){
        c = getchar();
        text[text_len++] = c;
        if(text_len + 5 == size){
            size += SIZE;
            text = realloc(text, size);
        }
        if((c >= '0') && (c <= '9')){
            numcounter++;
        }
        if(((c >= 'A') && (c <= 'Z')) || (( c >= 'a') && (c <= 'z'))){
            charcounter++;
        }
        if(c == '\n')
            break;
    }
    text[text_len]='\0';

    printf("\nКоличество цифр: %d", numcounter);
    printf("\nКоличество символов: %d", charcounter);
    free(text);
    printf("\n");

    int switcher, numtoconvert;
    scanf("%d", &numtoconvert);
    int* numarray;

    numarray = toArray(numtoconvert);
    
    for(int j = log10(numtoconvert); j >= 0; j--){
        switch (numarray[j])
        {
        case 0:
            printf("\nzero");
            break;
        case 1:
            printf("\nоne");
            break;
        case 2:
            printf("\ntwo");
            break;
        case 3:
            printf("\nthree");
            break;
        case 4:
            printf("\nfour");
            break;
        case 5:
            printf("\nfive");
            break;
        case 6:
            printf("\nsix");
            break;    
        case 7:
            printf("\nseven");
            break;
        case 8:
            printf("\neight");
            break;   
        case 9:
            printf("\nnine");
            break;
        default:
            break;
        }
    }
    
    return 0;
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