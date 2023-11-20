/*
 * File: ChessBoard.cpp
 * Author: Qihao Han
 * Created: 9/11/2023
 * Purpose: Implementation of the ChessBoard class.
 */

#include "ChessBoard.h"
#include <iomanip>

// Constructor for ChessBoard class
ChessBoard::ChessBoard()
{
    // Initialize the chessboard with empty spaces
    for (int i = 1; i < ROW - 1; i++)
    {
        for (int j = 1; j < COL - 1; j++)
        {
            m_cSquare[i][j] = ' ';
        }
    }

    // Draw the borders of the chessboard
    for (int j = 0; j < COL; j++)
    {
        m_cSquare[0][j] = m_cSquare[ROW - 1][j] = '-';
    }

    for (int i = 1; i < ROW; i++)
    {
        m_cSquare[i][0] = m_cSquare[i][COL - 1] = '|';
    }
}

// Method to display the current state of the chessboard
void ChessBoard::show()
{
    // Clear the console screen
    system("cls"); 

    // Display column indices
    cout << "   ";
    for (int j = 0; j < COL; j++)
    {
        cout << setw(2) << j << ' ';
    }
    cout << endl;

    // Display the chessboard content
    for (int i = 0; i < ROW; i++)
    {
        // Display row index
        cout << setw(2) << i << ' ';

        // Display each square's content
        for (int j = 0; j < COL; j++)
        {
            cout << setw(2) << m_cSquare[i][j] << ' ';
        }

        cout << endl;
    }
    cout << endl;
}

