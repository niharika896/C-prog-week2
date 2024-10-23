#include <stdio.h>

int main(){
	int d,m,y,f;
	printf("enter the date month year");
	scanf("%d %d %d",&d,&m,&y);
	if(m==1||m==3||m==5||m==7||m==8||m==10){
		if(d<1 || d>31){
			f=1;
		};
				
		if(d==31){
			d=1;
			m++;
		}
		else{
			d++;
		};
	}
	else if(m==4||m==6||m==9||m==11){
		if(d<1 || d>30){
			f=1;
		};	
		
		if(d==30){
			m++;
			d=1;
		}
		else{
			d++;
		};
	}
	else if(m==12){
		if(d<1 || d>31){
			f=1;
		};
	
		if(d==31){
			d=1;
			m=1;
			y++;
		}
		else{
			d++;
		};	
	}
	else{
		if(y%100==0 && y%400==0 || y%100!=0 && y%4==0){
			if(d<1 || d>29){
				f=1;
			}
	
			if(d==29){
				d=1;
				m=3;
			}
			else{
				d++;
			};
		}
		else{
			if(d<1 || d>28){
				f=1;
			}
		
			if(d==28){
				d=1;
				m=3;
			}
			else{
				d++;
			}
		};	
	};
	
	if(f==1){
		printf("invalid input");
	}
	else{
		printf("The next date is %d/%d/%d",d,m,y);
	};	
	return 0;
}
