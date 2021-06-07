#include <iostream>
using namespace std;
/* bitwise operations */

int main(int argc, char** argv) {
	int x=11,y=5,z;
	
	z=x&y;
	cout<<z<<endl;
	
	int x1=11,y1=5,z1;
	
	z1=x1|y1;
	cout<<z1<<endl;
	
	int x2=11,y2=7,z2;
	
	z2=x2^y2;
	cout<<z2<<endl;
	
	int x3=5, y3;
	y3=x3<<1;
	cout<<y3<<endl;
	
	int x4=5, y4;
	y4=x4>>1;
	cout<<y4<<endl;
	
	int x5=5, y5;
	y5=~x5;
	cout<<y5<<endl;
	
	return 0;
}
