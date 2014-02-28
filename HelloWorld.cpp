//HelloWorld.cpp

#include<iostream>

int main( void ){
	int i=0;
	
	for( char message[20] = "Hello World !!" ; i<14 ; std::cout<<message[i++]<<std::flush );
	std::cout<<endl;
	
	return 0;
}
