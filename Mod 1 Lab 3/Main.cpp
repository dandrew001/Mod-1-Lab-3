/*
 * tttsudip.cpp
 *
 *  Created on: Dec 17, 2016
 *      Author: Sudip
 */


 // lab 3
 // Tic-tak-toe
 // email:  kingrijal1@gmail.com
#include<iostream>
#include<cstdlib>
#include<TicTacToe.h>
using namespace std;

int main()// start the main() function
{
	Draw();
	while (1)
	{
		input();// checking the input function
		Draw();// checking the draw function
		if (win() == 'X')// checking win function for X
		{
			cout << " Player X wins!" << endl;
			break;// exit the loop
		}
		else if (win() == 'O')// checking win function for O
		{
			cout << " O wins!" << endl;
			break;
		}
		toogleplayer();// change the player
	}

	system("pause");
	return 0;

}// end of main() function
// console
//Welcome to Tic- Tac - Toe build by: Sudip Rjal. verson 1.0
//1 2 3
//4 5 6
//7 8 9
//press a number to fill the field.1
//Welcome to Tic- Tac - Toe build by: Sudip Rjal. verson 1.0
//X 2 3
//4 5 6
//7 8 9
//press a number to fill the field.2
//Welcome to Tic- Tac - Toe build by: Sudip Rjal. verson 1.0
//X O 3
//4 5 6
//7 8 9
//press a number to fill the field.5
//Welcome to Tic- Tac - Toe build by: Sudip Rjal. verson 1.0
//X O 3
//4 X 6
//7 8 9
//press a number to fill the field.6
//Welcome to Tic- Tac - Toe build by: Sudip Rjal. verson 1.0
//X O 3
//4 X O
//7 8 9
//press a number to fill the field.9
//Welcome to Tic- Tac - Toe build by: Sudip Rjal. verson 1.0
//X O 3
//4 X O
//7 8 X
//X wins!
//Press any key to continue . . .






