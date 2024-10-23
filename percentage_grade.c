#include <stdio.h>

int main(){
	int p,ch,b,m,co;
	float per;
	printf("enter the marks for phy,chem,bio,math and comp");
	scanf("%d,%d,%d,%d,%d",&p,&ch,&b,&m,&co);
	per=(p+ch+b+m+co)/5;
	if(per>=90){
		printf("Grade A");
		}
	else if(per>=80){
		printf("Grade B");
		}
	else if(per>=70){
		printf("Grade C");
		}
	else if(per>=60){
		printf("Grade D");
		}
	else if(per>=40){
		printf("Grade E");
		}
	else{
		printf("Grade F");
	};
	return 0;
}
