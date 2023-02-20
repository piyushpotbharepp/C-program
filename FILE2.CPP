/* 
Write a program with three functions
1] Good Morning Function which prints "Good Morning"
2] Good Afternoon Function which prints "Good Afternoon"
3] Good Night Function which prints "Good Night"
*/

#include <stdio.h>

void Morning();
void Afternoon();
void Night(); 

int main() {
    printf("Hey Welcome");
    Morning();
    Afternoon();
    Night();
    return 0;
}

void Morning(){
    printf("\nGood Morning");
}

void Afternoon(){
    printf("\nGood Afternoon");
}

void Night(){
    printf("\nGood Night");
} 