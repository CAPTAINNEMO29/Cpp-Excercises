#include <iostream>
#include <math.h>

using namespace std;

int main() {
	
	int u,v,a;
	float speed;
	
	cout<<"Enter three numbers: ";
	cin>>u>>v>>a;
	speed=(v*v-u*u)/(2*a);
	
	cout<<"speed is : "<<speed<<endl;
	
	return 0;
}
