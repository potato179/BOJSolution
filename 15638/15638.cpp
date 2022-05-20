#include<stdio.h>
int main(){
   int n;
   scanf("%d", &n);
   
   int is_prime = 1;
   
   for(int i=2; i*i <= n; i++)
   {
      if(n%i == 0)
      {
         is_prime = 0;
         break;
      }
   }
    for(int i = 0; i < n; i++){
        int trash;
        scanf("%d", &trash);
    }
   printf(is_prime ? "Yes" : "No");
}