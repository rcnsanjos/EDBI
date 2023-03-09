#include <iostream>
#include <string>
#include <sstream>


std::string to_string(int vet[], std::size_t len){
	
	std::ostringstream oss;
	//criei uma variável do tipo ostringstream
	
}

int main(){

	int vet[]{5, 0, 0, 3, 0, 0, 8};
	std::size_t len{7};

	std::cout << "Vetor original: " << to_string(vet, len) << std::endl;

	return 0;
}
