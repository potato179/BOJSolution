#include<stdio.h>
int N, r, c;
int cnt= 0; 
int power(int k){
	int num = 1;
	for(int i=0; i<k; i++){
		num*=2;
	}
	return num;
}

void z(int n, int x, int y){
	if(n==0){
		printf("%d",cnt);
		return;
	}
	int index = power(n);
	int num = (index/2) * (index/2);
	if(x >= index/2 ){
		if(y >= index/2){
			cnt += num*3;
			z(n-1 , x-(index/2) , y -(index/2 ) );
		}
		else{
			cnt += num*2;	
			z(n-1 , x-(index/2) , y );	
		}	
	}
	else{
		if(y >= index/2){
			cnt += num;
			z(n-1 , x, y -(index/2 ) );
			
		}
		else{
			z(n-1 , x, y );
		}	
	}
}

int main(){
	scanf("%d %d %d", &N, &r, &c);
	z(N, r, c);

}
 
