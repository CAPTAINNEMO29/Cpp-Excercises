#include <iostream>
using namespace std;


int main() {
	
	//sum of first natural numbers
	//this is like sum 1+2+3+4+5 = 15
	//hay una formula que es sum = n*(n-1)/2;
	
	int n,sum;
	cout<<"enter number: ";
	cin>>n;
	sum=n*(n+1)/2;
	cout<<"sumatory is : "<<sum;
	
	return 0;
}
