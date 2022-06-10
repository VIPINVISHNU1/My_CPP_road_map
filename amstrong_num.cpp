#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n= 153;
	 
	int reminder;   //variable to store the last number 
	int sum=0; //initializing variable to zero to add cubes of all nums
	while(n>0){

		reminder = n % 10;  //taking the last digit
		sum = sum+ pow(reminder,3);
		/*cout<<reverse<<" ";*/
		n = n/10;

	}
    if(sum == n){

       cout<<"entered number is Amstrong"<<endl;
    }
	
}
