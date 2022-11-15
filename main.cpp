#include <iostream>
#include <climits>

int main(){ 
	 short a; //16 ->  1 byte  = 8 bit     
	 int b;  //32 ->   1 byte  = 8 bit
	 long c; // 32 ->  1 byte  = 8 bit
	 long long d; //64 -> 1 byte  = 8 bit 
	 
	 // short<=int<=long<=long long
	 
	 unsigned short aa;
	 unsigned int bb;
	 unsigned long cc;
	 unsigned long long dd;
	 
	  // std::cout<<SHRT_MAX<<std::endl;
	  // std::cout<<SHRT_MIN<<std::endl;
	  // std::cout<<USHRT_MAX <<std::endl;
	  // std::cout<<SHRT_MIN<<std::endl;
	  
	  std::cout<<ULLONG_MAX<<std::endl;
	 
   
}