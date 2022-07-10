Problem
Sudoku is a popular single player game. The objective is to fill a 9x9 matrix with digits so that each column, each row, and all 9 non-overlapping 3x3 sub-matrices contain all of the digits from 1 through 9. Each 9x9 matrix is partially completed at the start of game play and typically has a unique solution.

![image]("./sudoku.PNG")



Given a completed N2xN2 Sudoku matrix, your task is to determine whether it is a valid solution. A valid solution must satisfy the following criteria:

Each row contains each number from 1 to N2, once each.
Each column contains each number from 1 to N2, once each.
Divide the N2xN2 matrix into N2 non-overlapping NxN sub-matrices. Each sub-matrix contains each number from 1 to N2, once each.
You don't need to worry about the uniqueness of the problem. Just check if the given matrix is a valid solution.

Input
The first line of the input gives the number of test cases, T. T test cases follow. Each test case starts with an integer N. The next N2 lines describe a completed Sudoku solution, with each line contains exactly N2 integers. All input integers are positive and less than 1000.

Output
For each test case, output one line containing "Case #x: y", where x is the case number (starting from 1) and y is "Yes" (quotes for clarity only) if it is a valid solution, or "No" (quotes for clarity only) if it is invalid. Note that the judge is case-sensitive, so answers of "yes" and "no" will not be accepted.

Limits
Time limit: 30 seconds per test set.
Memory limit: 1GB.
1 ≤ T ≤ 100.

Test set 1 - Visible
N = 3.

Test set 2 - Hidden
3 ≤ N ≤ 6.

Sample