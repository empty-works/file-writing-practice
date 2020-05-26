#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main() {

	std::vector<std::string> output_vec {"It's a beautiful day in the neighborhood", 
		"A beautiful day in the neighborhood", 
		"Won't you be my neighbor"};
	std::ofstream out_file {"write_output.txt"};
	
	if(out_file.is_open()) {
		for(size_t i {0}; i < output_vec.size(); i++) {
			out_file << i + 1 << ". " << output_vec.at(i) << std::endl;
		}			
	}
	else {
		std::cout << "Error opening file." << std::endl;
	}

	return 0;
}
