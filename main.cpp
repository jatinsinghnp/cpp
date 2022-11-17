#include <iostream>
#include <float.h>
using std::cout;
using std::cin;

int main(){ 
	float a=10.0/3;
	a=a*10000000000000000;
	double b=7.7E4; //7.7E4
		long double c;
	cout<<b;
	cout<<std::fixed<<a<<std::endl;
	cout<<DBL_DIG<<std::endl;
	cout<<FLT_DIG<<std::endl;
	cout<<LDBL_DIG<<std::endl;
}
