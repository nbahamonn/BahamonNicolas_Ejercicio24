#include <iostream>
#include <random>
#include <stdlib.h>

int main(){
	
	int i;
	int N = 100000;
	float sigma = 1.0;
	float delta = 1.0;
	float n = 0;
	float alpha;
	float propuesta;
	float r;
	
	srand48(8);
	n = drand48();
	alpha = drand48();
	
	for (i=0;i<N;i++){
		propuesta = n + (drand48()-0.5)*delta;
		r = exp(-propuesta*propuesta/(2.0*sigma*sigma))/exp(-n*n/(2.0*sigma*sigma));
		if(alpha<r){
			n = propuesta;
			std::cout << n << std::endl;
		}else{
			n = n;
			std::cout << n << std::endl;
		}
	}
  
  return 0;
}
