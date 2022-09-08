//Rich Davis
//Sep 7, 2022
//Project 5

#include <iostream>

int main() {

	const float blockSetWeight = 12.5;
	float palletWeight;
	float palletAndBlocksWeight;
	int result;
	std::cout << "Enter the weight of the pallet alone: " << std::endl;
	std::cin >> palletWeight;
	std::cout << std::endl << std::endl << "Enter the weight of the pallet with the block sets included: " << std::endl;
	std::cin >> palletAndBlocksWeight;
	result = (palletAndBlocksWeight - palletWeight) / blockSetWeight;
	std::cout << std::endl << std::endl << "There are " << result << " plastic block sets on the pallet.";

	return 0;
}