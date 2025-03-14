#include <cstdlib>
#include <thread>
#include <iostream>

//Computer chooses a random number between 1 and 3
int computerChoice()
{
	srand((unsigned)time(NULL)); // research this to make sure you understand it
	//makes computer choose a random number
	int aiChoice{1 + (rand() % 3)};

	return aiChoice;
}

//Asks for user selection
int userInput()
{
	int x{};
	std::cout << "Your choice? ";
	std::cin >> x;
	std::cout << '\n';

	return x;
}
