#include <stdio.h>
#include <stdlib.h>


int main() {
	int n1, n2;
	char operation;
	
	printf("-----SUPER CALC------\n");
	
	printf("Define n1: ");
	scanf("%d",&n1);
	
	printf("Define operation: ");
	scanf(" %s",&operation);
	
	printf("Define n2: ");
	scanf("%d",&n2);
	
	switch(operation) {
		case '+':
		    printf("%d", n1+n2);
		    break;
		case '-':
		    printf("%d", n1-n2);
		    break;
		case '/':
		    printf("%d", n1/n2);
		    break;
		case 'X':
		    case 'x':
		    case '*':
		    printf("%d", n1*n2);
		    break;
            default: 
            printf("Invalid operation");
	}
return 0;}
