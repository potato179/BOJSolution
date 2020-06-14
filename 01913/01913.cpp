#include <stdio.h>
int main(){
	int n, k;
	scanf("%d %d", &n, &k);
	
	int map[n][n];

	int x = n/2, y = n/2, count = 1;
	int sx,sy;
	map[x][y] = count++;
	x--; 
	for(int i= 1; i<=n/2; i++){
		
		for(int j=0; j<i*2; j++){
			if(count == k){
				sx = x;
				sy = y;
			}
			map[x][y++] = count++;		
		}
		y--;
		x++;
		
		for(int j=0; j<i*2; j++) {
			if(count == k){
				sx = x;
				sy = y;
			}
			map[x++][y] = count++;
		}
		y--;
		x--;
		for(int j=0; j<i*2; j++){
			if(count == k){
				sx = x;
				sy = y;
			}
			map[x][y--] = count++;
		}
		x--; 
		y++;
		for(int j=0; j<i*2; j++){
			if(count == k){
				sx = x;
				sy = y;
			}
			map[x--][y] = count++;	
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%d ", map[i][j]);
		}
		printf("\n");
	}
	printf("%d %d", sx+1, sy+1);
}