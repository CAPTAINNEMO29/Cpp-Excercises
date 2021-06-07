#include <iostream>
using namespace std;

/* explicacion del overflow */

int main(int argc, char** argv) {
	
	char a=128;
	// al hacer el cambio de char a int lo cambiara a -128
	// porque al almacenarlo en los bits el maximo es 127
	cout<<(int)a<<endl;
	
	char b=127;
	b++;
	cout<<(int)b<<endl;
	
	char c=-129;
	cout<<(int)c<<endl;
	
	char d=-128;
	d--;
	cout<<(int)d<<endl;
	
	int e=INT_MAX;
	e++;
	cout<<(int)e<<endl;
	
	// por esto es peligroso el overflow
	// dara como resultado 125
	
	char f=130;
	f++;
	cout<<(int)f<<endl;
	
	return 0;
}
