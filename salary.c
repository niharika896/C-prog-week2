#include <stdio.h>

int main(){
	float basic;
	printf("enter the basic salary");
	scanf("%f",&basic);
	if(basic<=10000){
		printf("%f is your final salary",basic + basic*0.2 + basic*0.1);
	}
	else if(basic<=20000){
		printf("%f is your final salary",basic + basic*0.3 + basic*0.2);
	}
	else if(basic<=30000){
		printf("%f is your final salary",basic + basic*0.4 + basic*0.3);
	}
	else{
		printf("%f is your final salary",basic + basic*0.5 + basic*0.5);
	};
	return 0;
}
