#include <iostream>
#include "aiComputer.h"
#include "rpsShoot.h"

//Plays a rock paper scissors game between the user and computer
//Best 2 out of 3
int main()
{

	std::cout << "Lets play Rock, Paper, Scissors!\n";
	wait(2);
	int holdingPattern{};
	int userScore{};
	int compScore{};
	int gameNum{1};

	//repeats game until it's been won 2 times 
	while(userScore != 2 || compScore != -2)
	{
		std::cout << "\nGame #" << gameNum;
		gameNum++;

		//hold the win or loss value
		holdingPattern = shoot();

		//if computer wins add to it's score
		if(holdingPattern == -1)
		{
			compScore += holdingPattern;
		}

		//if user wins add to their score
		if(holdingPattern == 1)
		{
			userScore += holdingPattern;
		}
		
		//printed score results
		//only asks to play again if we haven't finished the game
		if(userScore <= 2 && compScore >= -2)
		{
			std::cout << "User: " << userScore << '\n';
			std::cout << "Computer: " << compScore << '\n';
			if(userScore <= 1 && compScore >= -1)
			{
				std::cout << "Lets play again!\n";
			}

		}
		//Game ending dialog
		if(userScore == 2 || compScore == -2)
		{
			if(userScore == 2)
			{
				std::cout << "You Win!\n";
			}
			else
			{
				std::cout << "You lost to a bot oof!\n";
			}

			std::cout << "Good game!\n";
			
			break;
		}

	}

	return 0;
}
