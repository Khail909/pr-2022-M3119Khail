#include <stdio.h>

typedef struct Rectangle{
    int a;
    int b;
} Rectangle;


typedef struct Status{
    unsigned char record : 1;
    unsigned char pause : 1;
    unsigned char play : 1;
} Status;

int findarea(Rectangle*);

int main(){

    int switcher;
    printf("Введите тип издания:");
    scanf("%d", &switcher);

    switch (switcher){
    case 1:
        printf("Книга\n");
        break;
    case 2:
        printf("Газета\n");
        break;
    case 3:
        printf("Журнал\n");
        break;
    default:
        printf("Такого издания нет\n");
        break;
    }


    Rectangle rectangle;
    rectangle.a = 4;
    rectangle.b = 5;
    printf("Area of the rectangle: %d\n", findarea(&rectangle));

    

    Status status;
    int forstat;
    printf("values: ");
    scanf("%x", &forstat);

    // forstat = (forstat << 5) >> 5;
    status.play = forstat & 1;
    status.pause = forstat & 2;
    status.record = forstat & 4;

    
    printf("Play: %d, Pause: %d, Record: %d\n", status.play, status.pause, status.record);
    
    return 0;
}

int findarea(Rectangle *rectangle){
    int res = rectangle->a * rectangle->b;
    return res;
}