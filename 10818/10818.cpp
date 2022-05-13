#include<stdio.h>
int main(){
    int cnt, min = 0, max = 0, tmp;
    scanf("%d", &cnt);
    for(int i = 0; i < cnt; i++){
        scanf("%d", &tmp);
        if(min > tmp) min = tmp;
        if(max < tmp) max = tmp;
    }
    printf("%d %d", min, max);
}