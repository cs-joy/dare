"""
# Cut Tiles

Problem
Enzo is doing renovation for his new house. The most difficult part is to buy exactly the right number of tiles. He wants N tiles of different sizes. Of course they have to be cut from the tiles he bought. All the required tiles are square. The lengths of side of the tiles are 2S1, 2S2, ..., 2SN. He can only buy a lot of tiles sized M*M, and he decides to only cut tiles parallel to their sides for convenience. How many tiles does he need to buy?

Input
The first line of the input gives the number of test cases: T. T lines follow. Each line start with the number N and M, indicating the number of required tiles and the size of the big tiles Enzo can buy. N numbers follow: S1, S2, ... SN, showing the sizes of the required tiles.

Output
For each test case, output one line containing "Case #x: y", where x is the test case number (starting from 1) and y is the number of the big tiles Enzo need to buy.

Limits
Time limit: 30 seconds per test set.
Memory limit: 1GB.
1 ≤ 2Sk ≤ M ≤ 231-1.

Small dataset (Test set 1 - Visible)
1 ≤ T ≤ 100.
1 ≤ N ≤ 20.
Large dataset (Test set 2 - Hidden)
1 ≤ T ≤ 1000.
1 ≤ N ≤ 500.
Sample
Sample input
4
1 6 2
2 6 2 2
3 6 2 1 1
7 277 3 8 2 6 1 3 6


Sample output
Case #1: 1
Case #2: 2
Case #3: 1
Case #4: 2


@ source - https://codingcompetitions.withgoogle.com/kickstart/round/0000000000434d9c/0000000000434ba2
"""

print("Cut Tiles")