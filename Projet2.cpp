// Projet2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Yuto Kawahara
#include <iostream>
float monthlyPMT(float principal, float monIntRate, float numOfMonths);
void tt(float* balance, float monIntRate, float monPMT, float* toInterest, float* toPrincipal);
float monthlyPMT(float principal, float monIntRate, float numOfMonths) {
	return (principal * monIntRate) / (1 - 1 / pow(1 + monIntRate, numOfMonths));

}
void tt(float* balance, float monIntRate, float monPMT, float* toInterest, float* toPrincipal) {


	*toInterest = *balance * monIntRate;
	*toPrincipal = monPMT - *toInterest;
	*balance -= *toPrincipal;





}
int main()
{
	float principal;
	float annualIntRate; //
	float monIntRate; //Monthly Interest rate
	float numOfYears; //Loan period in years
	float numOfMonths; //Loan period in months
	float monPMT; //Monthly payment
	float totalPMT; //Total payment paid over the loan year
	float toInterest; //Interest amount of monthly payments 
	float toPrincipal; //Amount of monthly payment deducted from loan balance
	float balance; //Monthly balance

	printf("\nEnter principal, annula interest rate and load period, in yeras:");
	scanf_s("%f %f %f", &principal, &annualIntRate, &numOfYears);
	//calculating monthly and total payment
	monIntRate = annualIntRate / 1200;
	numOfMonths = numOfYears * 12;

	printf("%f", monPMT = monthlyPMT(principal, monIntRate, numOfMonths));
	//monPMT = (principal * monIntRate) / (1.0 - 1.0 / pow(1 + monIntRate, numOfMonths));
	totalPMT = monPMT * numOfMonths;

	//Printing Results
	printf("\n");
	printf("Principal = %.2f\n", annualIntRate);
	printf("Years of Loan = %.2f\n", numOfYears);
	printf("Monthly Payment = %.2f\n", monPMT);
	printf("Total Payment = %.2f\n", totalPMT);
	printf("Name, Project Number:Yuto Kawahara, Project 2\n");
	printf("\n");

	//Calculate loan balance for 24 months
	//The header must be printed before the loop
	printf("Month To Interest To Principal Balance\n");
	printf("----------------------------------------\n");

	balance = principal;
	for (int monNum = 1; monNum <= 24; monNum++)
	{

		tt(&balance, monIntRate, monPMT, &toInterest, &toPrincipal);
		printf("%4d %8.2f %8.2f %8.2f\n", monNum, toInterest, toPrincipal, balance);
	}

	//tt(balance, monIntRate, monPMT, toInterest, toPrincipal);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
