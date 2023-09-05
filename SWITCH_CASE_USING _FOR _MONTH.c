#include<stdio.h>
int main()
{
	int a;
	
	printf("\nTYPE 01 NUMBER  FOR   JANUARY   MONTH");
	printf("\nTYPE 02 NUMBER  FOR   FEBRUARY  MONTH");
	printf("\nTYPE 03 NUMBER  FOR   MARCH     MONTH");
	printf("\nTYPE 04 NUMBER  FOR   APRIL     MONTH");
	printf("\nTYPE 05 NUMBER  FOR   MAY       MONTH");
	printf("\nTYPE 06 NUMBER  FOR   JUNE      MONTH");
	printf("\nTYPE 07 NUMBER  FOR   JULY      MONTH");
	printf("\nTYPE 08 NUMBER  FOR   AUGUST    MONTH");
	printf("\nTYPE 09 NUMBER  FOR   SEPTEMBER MONTH");
	printf("\nTYPE 10 NUMBER  FOR   October   MONTH");
	printf("\nTYPE 11 NUMBER  FOR   November  MONTH");
	printf("\nTYPE 12 NUMBER  FOR   December  MONTH");
	
	printf("\nENTER THE NUMBER OF THE MONTH = ");
	scanf("%d",&a);
	
	switch(a)
	{
		    case 1 :
			printf("JANUARY");
			break;
			
			case 2 :
			printf("FEBRUARY");
			break;
			
			case 3 :
			printf("MARCH");
			break;
			
			case 4 :
			printf("APRIL");
			break;
			
			case 5 :
			printf("MAY");
			break;
			
			case 6 :
			printf("JUNE");
			break;
			
			case 7 :
			printf("JULY");
			break;
			
			case 8 :
			printf("AUGUST");
			break;
			
			case 9 :
			printf("SAPTEMBER");
			break;
			
			case 10 :
			printf("OCTOBER");
			break;
			
			case 11 :
			printf("NOVEMBER");
			break;
			
			case 12 :
			printf("DECEMBER");
			break;
 		
			default :
			printf("PLEASE ENTER THE VALID MONTH NUMBER");
			break;
	
	}
	
	return 0;
}