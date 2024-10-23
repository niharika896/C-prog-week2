#include <stdio.h>

int main(){
	int a,b,c;
	printf("enter the numbers");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a==b){
		if(a==c){
			printf("Equal");
		}
	}
	else{
		printf("not equal");
	};
	return 0;
}
