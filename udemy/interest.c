#include <stdio.h>
// Assignment - 1, Section - 2.

int main(){
	double rate = 0.06, principal_amount, total_interest;
	int duration;
	puts("Ente the duraion in year: ");
	scanf("%d", &duration);

	puts("Enter principal amount of loan");
	scanf("%lf", &principal_amount);

	total_interest = (double) principal_amount * duration * rate;
	printf("Your total payable interest is %.2lf  when the principal amount is %lf and the duration is %d", total_interest, principal_amount, duration);					 
	

	return 0;

}