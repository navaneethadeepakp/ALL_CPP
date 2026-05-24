#include "Harl.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "Usage: ./harlFilter <level>" << std::endl;
		return 1;
	}
	std::string input = argv[1];
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int levelIndex = -1;

	for (int i = 0; i < 4; i++) {
		if (levels[i] == input) {
			levelIndex = i;
			break;
		}
	}
	Harl harl;

	switch (levelIndex) {
		case 0:
			harl.debug();
			/* fall through */
		case 1:
			harl.info();
			/* fall through */
		case 2:
			harl.warning();
			/* fall through */
		case 3:
			harl.error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
	return 0;
}