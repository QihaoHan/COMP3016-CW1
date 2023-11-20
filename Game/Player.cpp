/*
 * File: Player.cpp
 * Author: Qihao Han
 * Created: 11/11/2023
 * Purpose: Implementation of the Player class methods.
 */

#include "Player.h"
#include <iostream>

using namespace std;

// Method to check if the specified coordinates are within the chessboard
bool Player::isInChessBoard(int x, int y)
{
    return (x > 0 && x < ROW - 1 && y > 0 && y < COL - 1);
}

// Method to check if there is a line formed by the player's chess piece at the specified coordinates
bool Player::isLine(int x, int y)
{
    for (int direc = HORIZON; direc <= LEFTTOPTORIGHTBOTTOM; direc++)
    {
        int tempX, tempY, cnt = 1;
        for (int i = -4; i <= 4; i++)
        {
            if (i == 0)
                continue;

            // Determine the coordinates based on the direction
            switch (direc)
            {
            case HORIZON:
                tempX = x;
                tempY = y + i;
                break;
            case VERTICAL:
                tempX = x + i;
                tempY = y;
                break;
            case LEFTBOTTOMTORIGHTTOP:
                tempX = x - i;
                tempY = y + i;
                break;
            case LEFTTOPTORIGHTBOTTOM:
                tempX = x + i;
                tempY = y + i;
                break;
            }

            // Check if the coordinates are within the chessboard and the square contains the player's chess piece
            if (isInChessBoard(tempX, tempY) && m_ptBoard->m_cSquare[tempX][tempY] == m_chessType)
                cnt++;
            else
                cnt = 0;

            // Check if there is a winning line
            if (cnt == 5)
                return true;
        }
    }

    return false;
}

// Method to prompt the player for input and set their chess piece on the chessboard
void Player::setChess()
{
    cout << "Please input player " << m_name << "'s x-coordinate and y-coordinate:" << endl;
    cin >> m_x >> m_y;

    // Validate input and ensure the selected square is empty
    while (cin.fail() || m_ptBoard->m_cSquare[m_x][m_y] != ' ')
    {
        cout << "Input error, please input " << m_name << "'s x-coordinate and y-coordinate again:" << endl;
        cin.clear();
        cin.sync();
        cin >> m_x >> m_y;
    }

    // Set the player's chess piece on the chessboard
    if (isInChessBoard(m_x, m_y))
        m_ptBoard->m_cSquare[m_x][m_y] = m_chessType;
}

// Method to check if the player has won the game
bool Player::isWin()
{
    return isLine(m_x, m_y);
}
