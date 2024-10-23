#include <stdio.h>

int main(){
	int a,b,c;
	printf("enter the point values");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>b){
		if(a>c){
			printf("The max point value is %d",a);
		}
	}
	else if(b>c){
		printf("The max point value is %d",b);
		}
	else{
		printf("The max point value is %d",c);
	}
	return 0;
}
