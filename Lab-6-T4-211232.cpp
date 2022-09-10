#include <iostream>

using namespace std;
/*program that inputs a number from the user and displays the factorial of that
number using while loop.*/
int main()
{
	int num,result=1; //variable declaration
	cout<<"\n\n\t\t\t\"FACTORIAL CALCULATOR\"\n\n";
	cout<<"\n\n\t\tEnter the number: "; cin>>num; //input from user
	int i=1;
	while (i<=num) //while loop for factorial
	{
		result=result*i;
		i++;
	}
	cout<<"\n\n\t\tFactorial of "<<num<<" = "<<result;
	
	
	return 0;
}
