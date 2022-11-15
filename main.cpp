#include <iostream>
// using namespace std; 
//using driective 
double pow(double  base,int exponent){
  double result=1;
  for (int i = 0; i < exponent;i++)
  {
  	result *=base;
  }
  return result;
}


void print_pow(double base,int exponent){
	
	double myPower=pow(base,exponent);
	std::cout<<base<<"raise to"<<exponent<<"power is"<<myPower<<std::endl;
}



int main(){ 
    int base,exponent;
    std::cout<<"What is the base :"<<std::endl;
    std::cin>>base;
    std::cout<<"what is the  exponent"<<std::endl;
    std::cin>>exponent;

    print_pow(base,exponent);
	return 0;	    
}