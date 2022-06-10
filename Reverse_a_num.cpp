#include<iostream>
using namespace std;

int main()
{
	int n= 4321;
	 
	int reminder;   //variable to store the last number 
	int reverse=0; //initializing reversed number as zero
	while(n>0){

		reminder = n%10;  //taking the last digit
		reverse = reverse*10+ reminder;
		/*cout<<reverse<<" ";*/
		n=n/10;

	}
	cout<<reverse;
}
