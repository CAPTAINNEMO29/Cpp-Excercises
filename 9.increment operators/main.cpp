#include <iostream>
using namespace std;

// es mas efectivo usar i++, que multiples veces i+=i;

int main(int argc, char** argv) {
	int x=5, y=0;
	int x1=5, y1=0;
	int j;
	int i = 5;
	
	y = ++x;
	cout<<"valor de y: "<<y<<endl;
	cout<<"valor de x: "<<x<<endl;
	// aqui primero asgina la variable y luego la incrementa
	y1 = x1++;
	cout<<"valor de y1: "<<y1<<endl;
	cout<<"valor de x1: "<<x1<<endl;
	
	j = 2*i++ + 2*i++;
	cout<<"valor de j: "<<j<<endl;
	
	return 0;
}
