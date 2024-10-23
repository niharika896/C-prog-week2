#include <stdio.h>

int main(){
	int a,b,c;
	printf("enter the three sides");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a==b){
		if(b==c){
			printf("Equilateral");
		}
	}
	else if(b==c){
		printf("isosceles");
		}
	else if(a==c){
		printf("isosceles");
	}
	else{
		printf("scalene");
	}
	return 0;
}
