/*
 * File: ChessBoard.h
 * Author: Qihao Han
 * Created: 9/11/2023
 * Purpose: Declaration of the ChessBoard class.
 */

#pragma once
#include <iostream>
// Constants to define the number of rows and columns in the chessboard
#define ROW 21
#define COL 16

using namespace std;

// ChessBoard class declaration
class ChessBoard
{
public:
    // Array to represent the chessboard
    char m_cSquare[ROW][COL]; 

public:
    // Constructor for the ChessBoard class
    ChessBoard();
    // Method to display the current state of the chessboard
    void show();
};
