#include<stdio.h>
int main(){
    int t, f, s, a1, a2;
    int t_, f_, s_, a1_, a2_;
    scanf("%d %d %d %d %d", &t, &f, &s, &a1, &a2);
    scanf("%d %d %d %d %d", &t_, &f_, &s_, &a1_, &a2_);
    printf("%d %d", 6*t+3*f+2*s+a1+2*a2, 6*t_+3*f_+2*s_+a1_+2*a2_);
}