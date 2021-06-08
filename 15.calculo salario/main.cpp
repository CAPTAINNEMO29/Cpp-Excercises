#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	float basic, percentAllow, percentDeduct, netSalary;
	
	cout<<"enter the basic salary"<<endl;
	cin>>basic;
	cout<<"enter the percent of allowance"<<endl;
	cin>>percentAllow;
	cout<<"enter the percent of deductions"<<endl;
	cin>>percentDeduct;
	
	netSalary=basic+percentAllow/100-basic*percentDeduct/100;
	cout<<"net salary is: "<<netSalary;
	
	return 0;
}
