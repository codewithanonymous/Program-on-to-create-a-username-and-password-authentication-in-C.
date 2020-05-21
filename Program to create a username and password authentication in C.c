#include <stdio.h>
#include <string.h>
#include <conio.h>
 
//created by anonymous
 
int main()
{
	
	
    char username[15];
    char password[12];
    
   
 
 
    printf("Enter your username:\n");
    scanf("%s",&username);
 
    printf("Enter your password:\n");
    scanf("%s",&password);
 
    if(strcmp(username,"amit")==0){
        if(strcmp(password,"123")==0){
 
 	printf("Welcome..login succssful");
			printf("\n\n\n\t===================================");
 printf("\n\t         YOUR BANK DETAILS");
 printf("\n\t===================================");
 printf("\n");
 	printf("\n Name:Amit");
	printf("\n Bank No:32324566");
	printf("\n CVV:136");
	printf("\n Pho.No:9246891902:");
	printf("\n Address:#12-8-294/1,\n HUNTER ROAD,\nOPP PADMAVATI GARDENS,\n WARANGAL,\n WARANGAL");
	
	printf("\n Amount:25000");
 
        }

 		else{
    printf("\nwrong password");
}
    }
	else{
    printf("\nUser doesn't exist");
}
    getch();
}
