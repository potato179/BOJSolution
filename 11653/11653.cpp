#include <stdio.h>
int main(){
    int hyonjoonisgay;
    scanf("%d", &hyonjoonisgay);
    while(hyonjoonisgay > 1){
        for(int i = 2; i <= hyonjoonisgay; i++){
            if(hyonjoonisgay%i == 0){
                printf("%d\n", i);
                hyonjoonisgay = hyonjoonisgay/i;
                break;
            }
        }
    }
}