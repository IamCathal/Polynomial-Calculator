#include <stdio.h>
#include <math.h>

	int calculate(int degreeCount, int pArray[], int cArray[], int resArray[], int xVal);

	void main() {
		int xValue, degree = 0, i, active = 1;
		
			printf("************Polynomial calculator************");
			
			/* Asks the user for degree of polynomial */
			
			while (active != 0) {
			
			
			printf("\n\nWhat is the highest power of x: ");
			scanf("%d", &degree);
			printf("\n");
			
			
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
					
					printf("\n\n*******************************");
					printf("\n\nWould you like to do anothe 1 for yes, 0 for no: ");
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
