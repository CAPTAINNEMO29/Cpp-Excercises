#include <iostream>
using namespace std;


// compound assignament
// las asignaciones como +=, -=, *=, /=, %=
// se ejecutan mas rapido que por ejemplo sum = sum + a
int main(int argc, char** argv) {
	
	int a=10, b=5, c=15;
	int sum=5;
	int prod=1;
	
	sum += a;
	sum += b;
	sum += c;
	cout<<sum<<endl;
	
	prod *= a*b*c;
	cout<<prod<<endl;
	
	return 0;
}
