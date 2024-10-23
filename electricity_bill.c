#include <stdio.h>

int main(){
	int units;
	printf("enter the number of units");
	scanf("%d",&units);
	if(units<=100){
		printf("%d is your electricity bill",units*3 + 50);
	}
	else if(units<=200){
		printf("%d is your electricity bill",units*5 + 50);
	}
	else{
		printf("%d is your electricity bill",units*7 + 50);
	};
	return 0;
}
