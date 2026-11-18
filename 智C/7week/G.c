#include <stdio.h>
int main(){
    char a;
    scanf(" %c",&a);
    if(a=='M'){
        printf("Monday");
    }
    else if(a=='T'){
        char b;
        scanf(" %c",&b);
        if(b=='u'){
            printf("Tuesday");
        }else if(b=='h'){
            printf("Thursday");
        }else{
            printf("Illegal input!\n");
        }
    }else if(a=='W'){
        printf("Wednesday");
    }else if(a=='F'){
        printf("Friday");
    }else if(a=='S'){
        char b;
        scanf(" %c",&b);
        if(b=='u'){
            printf("Sunday");

        }else if(b=='a'){
            printf("Saturday");
        }else{
            printf("Illegal input!\n");

        }
    }else{
        printf("Illegal input!\n");
    }
    return 0;
}