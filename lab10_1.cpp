#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;


int main()
{	
	
	double loan,rate_per_year,pay_per_year,PrevBalance,Total,Interest,Payment,NewBalance;
	int count_year=1;
	cout << "Enter initial loan: ";
	cin>>loan;
	cout << "Enter interest rate per year (%): ";
	cin>>rate_per_year;
	cout << "Enter amount you can pay per year: ";
	cin>>pay_per_year;
	PrevBalance=loan;
	Payment=pay_per_year;



	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	while (true)
	{
		
	
	
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << count_year;
	count_year++;
	cout << setw(13) << left << PrevBalance;
	Interest=PrevBalance*(rate_per_year)*0.01;
	cout << setw(13) << left << Interest;
	Total=PrevBalance+Interest;
	cout << setw(13) << left << Total;
	if(Payment>Total)
	{
		Payment=Total;
	}
	cout << setw(13) << left << Payment;
	NewBalance=Total-Payment;
	cout << setw(13) << left << NewBalance;
	PrevBalance=NewBalance;
	cout << "\n";
	if(NewBalance==0)
	{
		break;
	}
	
	}	
	
	return 0;
}
