#include<stdio.h>
int main()
{
	printf("Pick a Food item of your choice:- \n1. Idli-Dosa \n2. Momos \n3. Biryani \n4. Paratha \n5. Wadapav\n ");
	int choice=0;
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1: 
			printf("You have choose Idli-Dosa to eat.\nPrice - 100 Rs");
			break;
		case 2:
			printf("You have choose Momos to eat\nPrice - 120 Rs");
			break;
		case 3:
			printf("You have choose Biryani to eat\nPrice - Rs 350");
			break;
		case 4:
			printf("You have choose Paratha to eat\n Price - Rs 110");
			break;
		case 5:
			printf("You have choose Wadapav to eat\nPrice - Rs 30");
			break;
		default:
			printf("Invalid Input");
	}
}
