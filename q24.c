/*
Q--> WAP in C to read marks for physics,chemistry and biology,calculate the average marks in science subject and display the grade in science using the table given below (using switch-case).
	MarksinScience(outof100)  Grade
	90 and above				S
	Below 90, 80 and above		A
	Below 80,70 and above 		B
	Below 70,60 and above 		C
	Below 60,50 and above 		D
	Below 50,40 and above 		E
	Below 40					F
*/

#include <stdio.h>

int main(){
	int marks;
	printf("Enter the marks b/w 0-100 : ");
	scanf("%d",&marks);
	
	switch (marks/10){
	case 10:
	case 9:
		printf("Your Grade is S");
		break;
	case 8:
		printf("Your Grade is A");
		break;
	case 7:
		printf("Your Grade is B");
		break;
	case 6:
		printf("Your Grade is C");
		break;
	case 5:
		printf("Your Grade is D");
		break; 
	case 4:
		printf("Your Grade is E");
		break; 
	default:
		printf("Your Grade is F");
		break;
	}

	return 0;
} 