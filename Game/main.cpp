/*
 * File: main.cpp
 * Author: Qihao Han
 * Created: 12/11/2023
 * Purpose: A simple board game based on console is implemented.
 */

#include "ChessBoard.h"
#include "Player.h"
#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    // Create a chessboard and two players with different symbols
    ChessBoard board;
    Player playA("A", 'O');
    playA.attachToBoard(&board);
    Player playB("B", 'X');
    playB.attachToBoard(&board);

    // Display the initial state of the chessboard
    board.show();

    // Game loop
    while (1)
    {
        // Player A's turn
        playA.setChess();

        // Display the updated chessboard
        board.show();

        // Check if Player A has won
        if (playA.isWin())
        {
            cout << "Player A is the winner!";
            break;
        }


        // Player B's turn
        playB.setChess();

        // Display the updated chessboard
        board.show();

        // Check if Player B has won
        if (playB.isWin())
        {
            cout << "Player B is the winner!";
            break;
        }


    }
    system("pause");
    return 0;

}
