#include <stdio.h>
#include <stdlib.h>

int main()
{
int numOne,numTwo,choice;

do{

printf(" 1: Sum of two numbers.\n 2: Difference of two numbers.\n 3: Product of two numbers.\n 4: Quotient of two numbers.\n 0: Terminate the program.\n Select calculation [0 - 4]:");
scanf("%d", &choice);

    if (choice==1){
	printf("Enter the first number:");
    scanf("%d", &numOne);
    printf("Enter the second number:");
    scanf("%d", &numTwo);
	printf("%d+%d=%d\n",numOne,numTwo,numOne+numTwo);
	}
    else if (choice==2){
	  printf("Enter the first number:");
      scanf("%d", &numOne);
      printf("Enter the second number:");
      scanf("%d", &numTwo);
	  printf("%d-%d=%d\n",numOne,numTwo,numOne-numTwo);
	}
	else if (choice==3){
		printf("Enter the first number:");
        scanf("%d", &numOne);
        printf("Enter the second number:");
        scanf("%d", &numTwo);
		printf("%d*%d=%d\n",numOne,numTwo,numOne*numTwo);
	}
	else if (choice==4){
		printf("Enter the first number:");
        scanf("%d", &numOne);
        printf("Enter the second number:");
        scanf("%d", &numTwo);
        float quotient=numOne/numTwo;
		printf("%d / %d=%.2f\n",numOne,numTwo,quotient);
	}
	else{
	  printf("Please choose a number between 0-4.\n");
}} while(choice>0);
    return 0;
}
