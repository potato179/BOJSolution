#include<stdio.h>
int main(){
    int hour, min, second, time;
    scanf("%d %d %d", &hour, &min, &second);
    scanf("%d", &time);
    second += time;
    if(second >= 60){ 
        min += second/60;
        second %= 60;
    }
    if(min >= 60){
        hour += min/60;
        min %= 60;
    }
    if(hour >= 24){
        hour %= 24;
    }
    printf("%d %d %d", hour, min, second);
}