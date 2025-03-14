#include <iostream>
#include <thread>
#include "rpsShoot.h"
#include "aiComputer.h"

//Enter a number to wait for some number of seconds
void wait(int x)
{
	std::this_thread::sleep_for(std::chrono::seconds(x));
}

//Starts the count down
//Holds the user and bot values then returns the win or loss value
int shoot()
{
	std::cout << "\nReady?...";

	wait(1);

	std::cout << "Rock...";

	wait(1);

	std::cout << "Paper...";

	wait(1);

	std::cout << "Scissors...\n\n";

	wait(1);

	std::cout << "SHOOT!\n";
	std::cout << "Choose a number:\n" << "1. Rock\n" << "2. Paper\n" <<
		"3. Scissors\n\n";

	int opposingValue{computerChoice()};
	int user{userInput()};

	// shows what the user puts and what the ai chooses
	std::cout << "You chose: " << user << "\nI chose: " << opposingValue << '\n';
	int sameOrGain{rpsShootDiff(user,opposingValue)};

	return sameOrGain;
}

//rock paper scissors options
int rpsShootDiff(int userChoice,int compChoice)
{
	//Rock options
	if(userChoice == 1 && compChoice == 1) //rock vs rock
	{
		std::cout << "It's Rock versus Rock! "
			"I think we'll call this one a draw.\n";
		return 0;
	} else if(userChoice == 1 && compChoice == 2) //rock vs paper
	{
		std::cout << "Rock versus Paper!\n";
		return -1;
	} else if(userChoice == 1 && compChoice == 3) //rock vs scissors
	{
		std::cout << "Rock versus Scissors!\n";
		return 1;
	}

	//Paper options
	else if(userChoice == 2 && compChoice == 1) //paper vs rock
	{
		std::cout << "Paper versus Rock!\n";
		return 1;
	} else if(userChoice == 2 && compChoice == 2) //paper vs paper
	{
		std::cout << "Paper versus Paper! "
			"I think we'll call this one a draw.\n";
		return 0;

	} else if(userChoice == 2 && compChoice == 3) //paper vs scissors
	{
		std::cout << "Paper versus Scissors!\n";
		return -1;
	}

	//Scissors options
	else if(userChoice == 3 && compChoice == 1) //scissors vs rock
	{
		std::cout << "Scissors versus Rock!\n";
		return -1;
	} else if(userChoice == 3 && compChoice == 2) //scissors vs paper
	{
		std::cout << "Scissors versus Paper!\n";
		return 1;
	} else if(userChoice == 3 && compChoice == 3) //scissors vs scissors
	{
		std::cout << "Scissors versus Scissors! "
			"I think we'll call this one a draw.\n";
		return 0;
	}

	else
	{
		return 0;
	}
}

