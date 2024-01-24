#include<stdio.h>

main(){
	
	int number;
	
	
	printf("press 1 for monday\n");
	printf("press 2 for tuesday\n");
	printf("press 3 for wednesday\n");
	printf("press 4 for thursday\n");
	printf("press 5 for fridar\n");
	printf("press 6 for seturday\n");
	printf("press 7 for sunday\n");
	printf("press 8 for sunday\n");
	printf("press 9 for sunday\n");
	printf("press 10 for sunday\n");
	printf("press 11 for sunday\n");	
	printf("press 12 for sunday\n");
	printf("-----------------------------\n");
	printf("enter your number here( IN 1 TO 7 ) : ");
	scanf("%d",&number);
			
		switch(number){
			
			case 1:
				printf("monday");
				break;
				
			
			case 2:
				printf("tuesday");
				break;
				
			
			case 3:
				printf("wednesday");
				break;
				
			
			case 4:
				printf("thursday");
				break;
				
			
			case 5:
				printf("friday");
				break;
				
			
			case 6:
				printf("seturday");
				break;
				
			
			case 7:
				printf("sunday");
				break;
				
			default:
				printf("error");
				
			}
		
}
