#include <iostream>
using namespace std;

/* los enum sirven para alamcenar varios datos  que podran ser asignados*/
// los valores introducidos dentro actuan como constantes
enum day {mon,tue,wed,thu,fri,sat,sun};
enum day2 {mon2=10,tue2,wed2,thu2,fri2,sat2,sun2};
int main() {
	
	// day solo puede contener datos que tenga dentro
	day d;
	d=tue;
	// nos devolvera como valor su posicion como si fuera un array
	cout<<d<<endl;
	// tambien podemos acceder a sus valores directamente
	cout<<fri<<endl;
	// si cambiamos el valor dentro de el enum alterara al resto
	cout<<mon2<<endl;
	cout<<wed2<<endl;
	cout<<fri2<<endl;
	
	return 0;
}
