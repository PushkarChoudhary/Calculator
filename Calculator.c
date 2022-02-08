#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define note "Please, enter the valid operation"
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void factorial();
void power();
void square();
void cube();
void squareroot();

int main(){
	printf("\t\tWelcome to the scientific calculator!\n\n");
	int choices;
	printf("\n******* Press 0 to exit the program ********\n");
	printf("Enter 1 for Addition \n");
	printf("Enter 2 for Subtraction \n");
	printf("Enter 3 for Multiplication \n");
	printf("Enter 4 for Division \n");
	printf("Enter 5 for Modulus \n");
	printf("Enter 6 for Power \n");
	printf("Enter 7 for Factorial \n");
	printf("Enter 8 for Square \n");
	printf("Enter 9 for Cube \n");
	printf("Enter 10 for Square root\n\n");
	while(1){
	printf("\n\nEnter the operation you want to do: ");
	
	scanf("%d",&choices);
	
	switch(choices)
	{
		        
		        case 1:
		            addition();
		            break;
		        case 2:
				    subtraction();
					break;
				case 3:
					multiplication();
					break;
				case 4:
					division();
					break;
				case 5:
					modulus();
					break;
				case 6:
					power();
					break;
				case 7:
					factorial();
					break;
				case 8:
					square();
					break;
				case 9:
					cube();
					break;
				case 10:
				 	squareroot();
				 	break;
				case 0:
					exit(0);
				default:
					printf("\n********** %s **********\n",note);
						    
		}	
	}
	return 0;
}

void addition(){
	FILE *ptr = fopen("records.txt", "a+");
	printf("Enter the numbers you want to add: ");
	int a,b;
	scanf("%d%d",&a,&b);
	printf("The sum of given numbers are %d\n",a+b);
	if (ptr == NULL){
		printf("error");
	}
	else{
		fprintf(ptr, "%d + %d = %d\n", a, b, a+b);
	}
	fclose(ptr);
	
}
void subtraction(){
	FILE *ptr = fopen("records.txt", "a+");
	printf("Enter the numbers you want to subtract: ");
	int a,b;
	scanf("%d%d",&a,&b);
	printf("The difference of given numbers are %d\n",a-b);
	if (ptr == NULL){
		printf("error");
	}
	else{
		fprintf(ptr, "%d - %d = %d\n", a, b, a-b);
	}
	fclose(ptr);
}
void multiplication(){
	FILE *ptr = fopen("records.txt", "a+");
	printf("Enter the numbers you want to multiply: ");
	int a,b;
	scanf("%d%d",&a,&b);
	printf("The multiplication of given numbers are %d\n",a*b);
	if (ptr == NULL){
		printf("error");
	}
	else{
		fprintf(ptr, "%d x %d = %d\n", a, b, a*b);
	}
	fclose(ptr);
}
void division(){
	FILE *ptr = fopen("records.txt", "a+");
	printf("Enter the numbers you want to divide: ");
	int a,b;
	scanf("%d%d",&a,&b);
	printf("The division of given numbers are %f\n",(float)a/(float)b);
	if (ptr == NULL){
		printf("error");
	}
	else{
		fprintf(ptr, "%d / %d = %f\n", a, b, a/b);
	}
	fclose(ptr);
}
void modulus(){
	FILE *ptr = fopen("records.txt", "a+");
	printf("Enter the numbers you want to find modulus of: ");
	int a,b;
	scanf("%d%d",&a,&b);
	printf("The modulus of given numbers are %d\n",a%b);
	if (ptr == NULL){
		printf("error");
	}
	else{
		fprintf(ptr, "%d %% %d = %d\n", a, b, a%b);
	}
	fclose(ptr);
}
void factorial(){
	FILE *ptr = fopen("records.txt", "a+");
	int n,factorial;
	printf("Enter the number you want to factorial of: ");
	scanf("%d",&n);
	factorial=1;
	int i; 
	for( i=1;i<=n;i++){
		factorial=factorial*i; // factorial*=i
	}
	printf("\nFactorial of %d is %d",n,factorial);
	if (ptr == NULL){
		printf("error");
	}
	else{
		fprintf(ptr, "Factorial of %d = %d\n", n, factorial);
	}
	fclose(ptr);
}
void power(){
	FILE *ptr = fopen("records.txt", "a+");
	double b;
	double p;
	printf("Enter the base and the power: ");
	scanf("%lf%lf",&b,&p);
	double e=pow(b,p);
	printf("The power is %lf",e);
	if (ptr == NULL){
		printf("error");
	}
	else{
		fprintf(ptr, "%lf ^ %lf = %lf\n", b, p, e);
	}
	fclose(ptr);
}
void square(){
	FILE *ptr = fopen("records.txt", "a+");
	double b;
	printf("Enter the number you want the square of: ");
	scanf("%lf",&b);
	double p=pow(b,2);
	printf("The square of %lf is %lf",b,p);
	if (ptr == NULL){
		printf("error");
	}
	else{
		fprintf(ptr, "%lf^2 = %lf\n", b, p);
	}
	fclose(ptr);
}
void cube(){
	FILE *ptr = fopen("records.txt", "a+");
	double b;
	printf("Enter the number you want the cube of: ");
	scanf("%lf",&b);
	double p=pow(b,3);
	printf("The cube of %lf is %lf",b,p);
	if (ptr == NULL){
		printf("error");
	}
	else{
		fprintf(ptr, "%lf^3 = %lf\n", b, p);
	}
	fclose(ptr);
}
void squareroot(){
	FILE *ptr = fopen("records.txt", "a+");
	double b;
	printf("Enter the number you want the square root of: ");
	scanf("%lf",&b);
	double s = sqrt(b);
	printf("The square root of %lf is %lf",b,s);
	if (ptr == NULL){
		printf("error");
	}
	else{
		fprintf(ptr, "Sqrt of %lf = %lf\n", b, s);
	}
	fclose(ptr);
}

