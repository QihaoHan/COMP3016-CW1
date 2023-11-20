/*
 * File: Player.h
 * Author: Qihao Han
 * Created: 10/11/2023
 * Purpose: Declaration of the Player class.
 */

#pragma once
#include "ChessBoard.h" 
#include <iostream>
#include <string>

// Constants to represent different directions on the chessboard
#define HORIZON 0
#define VERTICAL 1
#define LEFTBOTTOMTORIGHTTOP 2
#define LEFTTOPTORIGHTBOTTOM 3

using namespace std;

// Player class declaration
class Player
{
private:
    string m_name;        // Player's name
    char m_chessType;     // Player's assigned chess piece type
    int m_x;              // X-coordinate on the chessboard
    int m_y;              // Y-coordinate on the chessboard
    ChessBoard* m_ptBoard; // Pointer to the ChessBoard object

public:
    // Constructor that initializes player's name and chess piece type
    Player(string name, char chessType) : m_name(name), m_chessType(chessType), m_ptBoard(nullptr) {}

    // Method to attach the player to a ChessBoard
    void attachToBoard(ChessBoard* ptBoard) { m_ptBoard = ptBoard; }

    // Method to check if the specified coordinates are within the chessboard
    bool isInChessBoard(int x, int y);

    // Method to check if there is a line formed by the player's chess piece at the specified coordinates
    bool isLine(int x, int y);

    // Method to check if the player has won the game
    bool isWin();

    // Method to set the player's chess piece on the chessboard
    void setChess();
};
