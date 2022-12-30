#include <stdio.h>
#include <string.h>
#include <strings.h>
#define SIZE 50

// 1 6 8 10 12
// 
void task1(char*, char*);
void task6(char*, char*, int);
void task8(char*, char);
void task10(char*, char*, int, int);
void task12(char*, char*);


int main(){
    int n = 5, from = 8, to = 13;
    char symb = 's';
    char string1[] = "first string.";
    char string2[] = "second string.";

    task1(string1, string2);

    task6(string1, string2, n);

    task8(string1, symb);

    task10(string1, string2, from, to);
    return 0;
}

void task1(char* string1, char* string2){
    char string3[strlen(string1)];
    for(int i = 0; i < strlen(string1); i++){
        string3[i] = string1[i];
    }
    strcat(string3, string2);
    printf("task1: Concatenation: %s\n", string3);
}


void task6(char* string1, char* string2, int n){
    char string3[n];
    for(int i = 0; i < n; i++){
        string3[i] = string1[i];
    }
    strcat(string3, string2);
    printf("task6: Copy the first n characters: %s\n", string3);

}


void task8(char* string, char symb){
    int i = 0;
    int flag = 0;
    for(i; i < strlen(string); i++){
        if(string[i] == symb){
            flag = 1;
            break;
        }
    }
    if(flag){
        printf("task8: Character found at: %d\n", i+1);
    }
    else{
        printf("No matching symbol found\n");
    }
}


void task10(char* string1, char* string2, int from, int to){
    char string3[to - from + 2];
    int i = from;
    int j = 0;
    for(i; i < to; i++){
        string3[j++] = string1[i];
    }
    string3[j] = '\0';
    printf("task10: Searching for: %s\n", string3);
    char *answ;
    answ = strstr(string2, string3);
    printf("task10: The substring is: %s\n", answ);
}


// void task12(char* string1, char* string2){
//     // char string3[strlen(string1)];
//     // for(int i = 0; i < strlen(string1); i++){
//     //     string3[i] = string1[i];
//     // }
//     char *chararr = malloc(SIZE*sizeof(char));
//     int flag = 0, unique = 0, counter = 0;
//     int len = 0, size = 50;
//     for(int i = 0; i < strlen(string2); i++){
//         if(len + 5 > size){
//             size += SIZE;
//             chararr = realloc(chararr, size*sizeof(char));
//         }
        
//     }
// }