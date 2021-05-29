#include <iostream>
#include<cmath>

using namespace std;

int main() {
	
	//encontrar la solucion a ecuacion de segundo grado
	//ax^2+bx+c=0
	//r=-b +-raiz cuadrado de b^2 -4*a*c/2*a
	
	//to prove the excersice give values a = 1, b = -6 and c = 8
	//should be 2 and 4
	float a,b,c,r1,r2;
	cout<<"Enter the three numbers: ";
	cin>>a>>b>>c;
	//root1=(-b+sqrt(b*b-4*a*c))/(2*a);
	r1=(-b+sqrt(b*b-4*a*c))/(2*a);
	r2=(-b-sqrt(b*b-4*a*c))/(2*a);
	cout<<"the result is: "<<r1<<" "<<r2;
	
	return 0;
}
