#include<stdio.h>

void AllFunctions();
//Question 1
void Q1() {
	long int num, temp = 1;
	printf("\nEnter a number: ");
	scanf("%ld", &num);

	if (num > 9999 && num < 100000) {

		while (num != 0) {
			temp *= num % 10;
			num = num / 10;

		}
		printf("The product of the digits is: %ld\n\n", temp);
		fflush(stdin);
		AllFunctions();
	}

	else {
		printf("\nPlease enter a 5 digit integer only, re-run the program!\n");
		fflush(stdin);
		Q1();
	}

}

// Question 2
void Q2() {
	long int num, temp = 0;
	printf("\nEnter a number: ");
	scanf("%ld", &num);

	if (num > 9999 && num < 100000) {

		while (num != 0) {
			temp = num % 10 + temp * 10;
			num = num / 10;

		}
		printf("The reversed number is: %ld", temp);
		fflush(stdin);
		AllFunctions();
	}

	else {
		printf("\nPlease enter a 5 digit integer only!\n");
		fflush(stdin);
		Q2();
	}
}

//Question 3
void Q3() {
	long int num, temp = 0;
	printf("\n\nEnter a number: ");
	scanf("%ld", &num);

	if (num > 9 && num < 1000000000) {
		int compareVar = num;
		while (num != 0) {
			temp = num % 10 + temp * 10;
			num = num / 10;
		}
		if (temp == compareVar) {
			printf("%ld is a palindrome!", temp);
			fflush(stdin);
			AllFunctions();
		}
		else {
			printf("%ld is not a palindrome!", temp);
			fflush(stdin);
			AllFunctions();
		}

	}

	else {
		printf("\nPlease enter an integer number only between 9 and 1000000000!\n");
		fflush(stdin);
		Q3();
	}
}

//Question 4
void Q4() {
	int i, j, k, rows;
	printf("\n\nEnter the number of rows you want: ");
	scanf("%d", &rows);

	if (rows <= 10 && rows >= 1) {
		//Rows
		for (i = 0; i <= rows - 1; i++) {
			//Gap
			for (j = i; j <= (rows - 1) - 1; j++) {
				printf(" ");
			}
			//Pattern
			for (k = 1; k <= (i * 2) + 1; k++) {
				printf("%d", k);
			}
			printf("\n");
		}
		AllFunctions();
	}
	else {
		printf("\nPlease enter an integer only between 1 to 10, try again!");
		fflush(stdin);
		Q4();
	}
}

//Question 5
void Q5() {
	int year;

	printf("\n\nEnter a year: ");
	scanf("%d", &year);

	if (year >= 1000 && year <= 9999) {
		if (year % 4 == 0) {
			printf("%d is a leap year!", year);
			fflush(stdin);
			AllFunctions();
		}
		else {
			printf("%d is not a leap year!", year);
			fflush(stdin);
			AllFunctions();
		}
	}
	else {
		printf("\nPlease enter a valid year!");
		fflush(stdin);
		Q5();
	}
}

//Question 6
void Q6() {
	char value[1000];
	printf("\n\nEnter a character: ");
	scanf("%s", &value);

	if (strlen(value) > 1) {
		printf("\nPlease enter only a single character!");
		fflush(stdin);
		Q6();
	}
	else {
		if (value[0] >= 'a' && value[0] <= 'z')
		{
			printf("%s is a small case letter!", value);
			fflush(stdin);
			AllFunctions();
		}

		else if (value[0] >= 'A' && value[0] <= 'Z')
		{
			printf("%s is a upper case letter!", value);
			fflush(stdin);
			AllFunctions();
		}

		else if (value[0] >= '0' && value[0] <= '9') {
			printf("%s is a digit!", value);
			fflush(stdin);
			AllFunctions();
		}

		else {
			printf("%s is a special symbol!", value);
			fflush(stdin);
			AllFunctions();
		}
	}


}

//Question 7
void Q7() {
	long int num;
	printf("\n\nEnter a positive integer: ");
	scanf("%ld", &num);

	if (num > 0 && num < 16) {
		long int i, temp = 1;
		for (i = 2; i <= num; i++) {
			temp *= i;
		}
		printf("\nThe factorial of the number is: %ld", temp);
		fflush(stdin);
		AllFunctions();
	}
	else {
		printf("\nPlease enter an integer number between 1 and 15 only!");
		fflush(stdin);
		Q7();
	}
}

//Question 8
void Q8() {
	long int num, remainder = 0, temp = 0, numStore;

	printf("\n\nEnter a positive integer : ");
	scanf("%ld", &num);
	numStore = num;

	if (num > 0 && num < 999999990) {
		while (num != 0) {
			remainder = (remainder * 10) + (num % 8);
			num /= 8;
		}
		while (remainder != 0) {
			temp = (temp * 10) + (remainder % 10);
			remainder /= 10;
		}
		printf("\nThe octal equivalent of %ld is %ld.", numStore, temp);
		fflush(stdin);
		AllFunctions();
	}
	else {
		printf("\nPlease enter an integer number between 1 and 999999989 only!");
		fflush(stdin);
		Q8();
	}
}

//Question 9
void Q9() {

	int row, i, j, k, gap, repeatCharCounter = 0;
	printf("\n\nEnter the number of rows you want: ");
	scanf("%d", &row);

	if (row > 1 && row <= 26) {
		for (i = 0; i <= row - 1; i++) {

			//Left side
			for (j = 0; j <= (row - 1) - i; j++) {
				printf("%c", 'A' + j);
			}
			//Gap
			for (gap = 1; gap <= i; gap++) {
				printf(" ");
				if (gap > 1)
					printf(" ");
			}
			//Right Side
			for (k = (row - 1) - i; k >= 0; k--) {
				//Eliminate the repeated character
				if (repeatCharCounter != 0)
					printf("%c", 'A' + k);

				else
					repeatCharCounter++;
			}
			printf("\n");
		}
		fflush(stdin);
		AllFunctions();
	}
	else {
		printf("Please enter an integer only ranging between 2 and 26!");
		fflush(stdin);
		Q9();
	}
}

//Question 10
void Factorial() {
	long int i, num, temp = 1;
	printf("\n\nEnter an integer number: ");
	scanf("%ld", &num);

	if (num >= 1 && num <= 25)
	{
		for (i = 2; i <= num; i++)
			temp *= i;

		printf("The factorial of %ld is: %ld", num, temp);
		fflush(stdin);
		AllFunctions();
	}
	else {
		printf("Please enter an integer ranging between 1 and 25 only!\n\n");
		fflush(stdin);
		Factorial();
	}
}
void PrimeNumber() {
	long int i, num, isPrime = 1;
	printf("\n\nEnter an integer number: ");
	scanf("%ld", &num);

	if (num == 1) {
		printf("1 is neither prime nor composite!");
		fflush(stdin);
		AllFunctions();
	}
	else if (num > 1 && num <= 999999) {
		for (i = 2; i < num; i++) {
			if (num % i == 0)
				isPrime = 0;
		}
		if (isPrime == 0)
			printf("%ld is not a prime number!", num);

		else
			printf("%ld is a prime number!", num);

		fflush(stdin);
		AllFunctions();
	}
	else {
		printf("The entered number should be an integer and it should not be less than or equal to 0 and it should also be between 1 and 999999!\n\n");
		fflush(stdin);
		PrimeNumber();
	}
}
void OddEven() {
	long int num;
	printf("\n\nEnter an integer number: ");
	scanf("%ld", &num);

	if (num > 0 && num <= 1000000000) {
		if (num % 2 == 0)
			printf("%ld is an even number!", num);
		else
			printf("%ld is an odd number!", num);

		fflush(stdin);
		AllFunctions();
	}
	else {
		printf("Please enter a valid integer with upto 10 digits!\n\n");
		fflush(stdin);
		OddEven();
	}
}
void Q10() {
	int num;
	printf("\n\nEnter 1 for factorial\nEnter 2 for prime number\nEnter 3 for odd even\nEnter 4 for exit\nPlease select an option from the above: ");
	scanf("%d", &num);

	switch (num) {
	case 1:
		Factorial();
		break;
	case 2:
		PrimeNumber();
		break;
	case 3:
		OddEven();
		break;
	case 4:
		exit(0);
		break;
	default:
		printf("\nPlease enter the value between 1 and 4!\n");
		fflush(stdin);
		Q10();
	}
	fflush(stdin);
	AllFunctions();
}
//Question 11
void Q11() {
	char op;
	long int a, b;

	printf("\n\nEnter first positive integer value: ");
	scanf("%ld", &a);
	fflush(stdin);

	printf("Enter second positive integer value: ");
	scanf("%ld", &b);
	fflush(stdin);

	if ((a >= 0 && a <= 999999999) && (b >= 0 && b <= 999999999)) {
		printf("\nEnter a operand + or - or * or / or %: ");
		scanf("%c", &op);

		switch (op)
		{
		case '+':
			printf("Result is: %ld", (a + b));
			fflush(stdin);
			break;
		case '-':
			printf("Result is: %ld", (a - b));
			fflush(stdin);
			break;
		case '*':
			printf("Result is: %ld", (a * b));
			fflush(stdin);
			break;
		case '/':
			if (b == 0) {
				printf("can't divide by zero!");
			}
			else {
				printf("Result is: %ld", (a / b));
			}
			fflush(stdin);
			break;
		case '%':
			printf("Result is: %ld", (a % b));
			fflush(stdin);
			break;
		default:
			printf("Invalid operand!");
			fflush(stdin);
			Q11();
		}
		AllFunctions();
	}
	else {
		printf("\nPlease check if both values are positive integers or not and also each of them should be of not more than 9 digits!");
		fflush(stdin);
		AllFunctions();
	}
}

//Question 12
long int power(long int a, long int b);
void Q12()
{
	long int a, b;

	printf("\n\nEnter an integer: ");
	scanf("%ld", &a);
	fflush(stdin);

	printf("Enter the power of the above integer integer: ");
	scanf("%ld", &b);

	if ((a > 0 && a <= 100) && (b > 0 && b <= 100)) {
		printf("%ld raise to the power %ld is: %ld", a, b, power(a, b));
		fflush(stdin);
		AllFunctions();
	}
	else {
		printf("The integer and it's power should be between 1 to 100!");
		fflush(stdin);
		Q12();
	}
}
long int power(long int a, long int b)
{
	long int i, temp = 1;
	for (i = 0; i < b; i++)
		temp *= a;

	return temp;
}

//Quesion 13
long int rec_func(long int num);
long int non_rec_func(long int num);

void Q13()
{
	long int num, rec, non_rec;
	printf("\n\nEnter an integer: ");
	scanf("%ld", &num);

	if (num > 9999 && num <= 99999) {
		rec = rec_func(num);
		non_rec = non_rec_func(num);

		printf("\n Calculate sum using recursion: %ld", rec);
		printf("\n Calculate sum without recursion: %ld", non_rec);
		fflush(stdin);
		AllFunctions();
	}
	else {
		printf("Enter the integer of 5 digit only!");
		fflush(stdin);
		Q13();
	}
}

long int rec_func(long int num)
{
	if (num == 0)
	{
		return 0;
	}

	return (num % 10 + rec_func(num / 10));
}

long int non_rec_func(long int num)
{
	long int res, count = 0;
	while (num != 0)
	{
		res = num % 10;
		count += res;
		num = num / 10;
	}
	return count;
}
//Quesion 14
void Q14() {
	long int num, length, i;
	long int a[10];
	printf("\n\nEnter a positive integer: ");
	scanf("%ld", &num);

	if (num >= 0 && num <= 1000) {
		length = 0;
		i = 0;
		printf("Binary equivalent of %d is: ", num);

		while (num > 0)
		{
			a[i] = num % 2;
			num /= 2;
			length++;
			i++;
		}

		for (i = length - 1; i >= 0; i--)
			printf("%ld", a[i]);

		fflush(stdin);
		AllFunctions();
	}
	else {
		printf("Enter an integer between 0 and 1000 only!");
		fflush(stdin);
		Q14();
	}
}

// Calling all functions
void AllFunctions() {
	long int num;
	printf("\nEnter a question number between 1 and 14 or press any other key to exit: ");
	scanf("%ld", &num);

	switch (num) {
	case 1:
		Q1();
		break;
	case 2:
		Q2();
		break;
	case 3:
		Q3();
		break;
	case 4:
		Q4();
		break;
	case 5:
		Q5();
		break;
	case 6:
		Q6();
	case 7:
		Q7();
		break;
	case 8:
		Q8();
		break;
	case 9:
		Q9();
		break;
	case 10:
		Q10();
		break;
	case 11:
		Q11();
		break;
	case 12:
		Q12();
		break;
	case 13:
		Q13();
		break;
	case 14:
		Q14();
		break;
	default:
		//printf("Please enter a valid input raning between 1 to 14!\n");
		fflush(stdin);
		exit(0);
	}
}

void main() {

	clrscr();

	//Q1();
	//Q2();
	//Q3();
	//Q4();
	//Q5();
	//Q6();
	//Q7();
	//Q8();
	//Q9();
	//Q10();
	//Q11();
	//Q12();
	//Q13();
	//Q14();
	AllFunctions();
	getch();

}