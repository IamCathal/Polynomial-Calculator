#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100


	int calculate(int degreeCount, int pArray[], int cArray[], int resArray[], int xVal);


	void main() {
		
		int xValue, degree = 0, i, active = 1;
		char inputString[MAX];
		
			printf("************Polynomial calculator************");
			
			
			/* Loop starts here again */
			while (active != 0) {
			
			
			printf("\n\nWhat is the highest power of x: ");
			scanf("%s", &inputString);
			printf("\n");
			
			degree = atoi(inputString);
			
			/* Loop to filter invalid input */
				while (degree == 0) {
					printf("\"%s\" is not a valid integer, please try again.\n", inputString);
					printf("\n*********************************************");
					
						printf("\n\nWhat is the highest power of x: ");
						scanf("%s", &inputString);
						printf("\n");
						
						degree = atoi(inputString); 
				} 
			
			
			/* Initiates the arrays for the equation */
			
			int coeffArray[degree], powerArray[degree], resultArray[degree];
			
				for (i = 0; i < degree; i++) {
					printf("Enter coefficient #%d of x: ", i+1);
					scanf("%d", &coeffArray[i]);
					
					printf("Enter power #%d of x: ", i+1);
					scanf("%d", &powerArray[i]);
					
					printf("\n");
				}
				
				printf("Enter a value for x: ");
				scanf("%d", &xValue);
				
				/* passes the arguments to the calculate function and produces an answer 
					to the polynomial */
				
					calculate(degree, powerArray, coeffArray, resultArray,  xValue);
					
					printf("\n\n*********************************************");
					printf("\n\nWould you like to do another 1 for yes, 0 for no: ");
					scanf("%d", &active);
			}
	}
	
		int calculate(int degreeCount, int pArray[], int cArray[], int resArray[], int xVal) {
			int result = 0, i;
			
				for (i = 0; i < degreeCount; i++) {
						resArray[i] = cArray[i]*pow(xVal, pArray[i]);
						result += resArray[i];
				}
				
					printf("The result is: %d", result);
		}
