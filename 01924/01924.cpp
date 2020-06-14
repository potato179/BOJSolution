#include<stdio.h>
int main(){
	int x, y;
	scanf("%d %d", &x, &y);
	int month = 1, day = 1;
	int count = 1;
	while(month < x || day < y){
		if(month == 1 || month == 3 || month == 5 || month == 7|| month == 8 || month == 10 || month == 12){
			if(day == 31){
				day=0;
				month++;
			}
		}
		else if(month == 2){
			if(day == 28){
				day=0;
				month++;
			}
		}
		else{
			if(day == 30){
				day=0;
				month++;
			}
		}	
		count++;	
		day++;
	}

	if(count%7 == 1) printf("MON");
	else if(count%7 == 2) printf("TUE");
	else if(count%7 == 3) printf("WED");
	else if(count%7 == 4) printf("THU");
	else if(count%7 == 5) printf("FRI");
	else if(count%7 == 6) printf("SAT");
	else if(count%7 == 0) printf("SUN");
}