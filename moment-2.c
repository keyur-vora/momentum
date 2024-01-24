#include<stdio.h>

main(){
	
	int a;
	
	printf("enter ypu number here : ");
	scanf("%d",&a);
		
		if(a>90){
			printf("you got A+");
		}
		else if(a>80){
			printf("you got A");
		}
		else if(a>70){
			printf("you got B+");
		}
		else if(a>60){
			printf("you got B");
		}
		else if(a>50){
			printf("you got C+");
		}
		else if(a>40){
			printf("C");
		}
		else if(a>33){
			printf("you got D");
		}
		else {
			printf("you're fail");
		}
			
}
