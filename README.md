# Sudoku
A C++ application that loads a 9×9 Sudoku grid from a file, presents it, and checks its correctness by ensuring that the sum of each row and column equals 45. If the information is wrong, the program pinpoints the row, column, or either where the mistake happens

This program reads a 9×9 Sudoku grid from a text file and checks whether it is valid.

## Features
- Reads Sudoku data from a file
- Displays the Sudoku grid
- Verifies correctness by checking row and column sums
- Reports the row and/or column containing an error

## How It Works
Each row and column must sum to 45 for the Sudoku to be considered correct.

## How to Run
1. Compile the program:
   g++ sudoku.cpp -o sudoku
2. Run the executable:
   ./sudoku
3. Enter the input file name when prompted

## Input Format
The input file should contain 9 rows with 9 integers each, separated by spaces.

## Example Output
- "Sudoku is correct."
- OR reports the row and/or column where the problem occurs
