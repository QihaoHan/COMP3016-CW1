# COMP3016 Coursework1

## Development Environment
Visual Studio Version: 17.1.0<br/>
Operating System Version: Windows 10 Home Chinese version (version number 22H2)

## Introduction
The code implements a simple console-based two-player pentoku game. Players A and B take turns entering their desired coordinates on a 21x16 board. The pieces are displayed at the corresponding coordinates until one of the players lines up in a row of five consecutive pieces horizontally, vertically, or diagonally, the winner.

## UML Design Diagram
use case diagram: <br/>
![Screenshot](usecase_diagram.jpg)<br/>
class diagram: <br/>
![Screenshot](class_diagram.jpg)<br/>
activity diagram: <br/>
![Screenshot](activity_diagram.jpg)


## Exception Handling and Test Cases
1. Input Validation: The code checks for valid user input when players enter coordinates. If the input is invalid (e.g., non-integer or already occupied position), it prompts the user to re-enter the coordinates until valid input is provided.

2. Game Termination: The game loop continues until a player wins. Once a player wins, the corresponding message is displayed, and the game exits.

3. Out of Bounds: The `isInChessBoard` method checks if the provided coordinates are within the bounds of the chessboard.

4. Line Detection: The `isLine` method checks for a line of five consecutive pieces in all possible directions.

## Further Details
The game is a simple console based chess game. Two players take turns at the console to input the board coordinates. When the pieces meet the horizontal line, vertical line, diagonal line five pieces link to win.

## Video Link
- [Unlisted YouTube Video](#) (Replace with the actual link)

## Git Repository
[GitHub](https://github.com/QihaoHan/COMP3016-CW1)
