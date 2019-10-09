#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
					//This format makes argc the # of char elements in the array argv.
	float operand1 = atof(argv[2]); //atof converts the second char in argv to a float
	float operand2 = atof(argv[3]); //Same for the third char in argv
	char operator = argv[1][0]; //Redefines the first element as the operator
	float result = 0; //Initializes output result as 0, just in case.


	if (argc < 3){
	printf("Not enough arguments.\n");}
		else if (operator == '/' && operand2 == 0){
			printf("Undefined operation: zero denominator.\n");
	return(-1); /*This is an exit code to indicate one of two problems with program usage,
					incorrect denominator or missing arguments.*/
	}
	
	switch(operator) /*This checks the value of the operator char entered against the four
						possible cases.*/
	{

		case '+': result = (operand1 + operand2);
			printf("%g\n", result); /*%g is used to make the output have a specific # sig.
										figs. When no specification is given, the default 
										is 6, as in the calc_test.txt output file.*/
			break;
		case '-': result = (operand1 - operand2);
			printf("%g\n", result);
			break;
		case 'x': result = (operand1 * operand2);
			printf("%g\n", result);
			break;
		case '/': result = (operand1 / operand2);
			printf("%g\n", result);
			break;
		
		default: printf("Operator invalid.\n"); /*This will indicate if an invalid operator
													has been used.*/
	}
		
return 0;
}
	
