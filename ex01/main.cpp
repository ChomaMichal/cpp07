#include "iter.hpp"
#include <iostream>

void	add_2(int *i){
	(*i) += 2;
}

void	hehe(const float *i){
	std::cout << *i << std::endl;
}


int main(){
	int		arri[7] = {1,2,3,4,5,6,7};

	for(size_t i = 0; i < 7; i ++){
		std::cout << arri[i] << " ,";
	}
	std::cout << std::endl;
	iter(arri, 7, add_2);
	for(size_t i = 0; i < 7; i ++){
		std::cout << arri[i] << " ,";
	}
	std::cout << std::endl;
	
	const float arrf[7] = {1,2,3,4,5,6,7};

	for(size_t i = 0; i < 7; i ++){
		std::cout << arrf[i] << " ,";
	}
	std::cout << std::endl;
	iter(arrf, 7, hehe);
	for(size_t i = 0; i < 7; i ++){
		std::cout << arrf[i] << " ,";
	}
	std::cout << std::endl;
}
