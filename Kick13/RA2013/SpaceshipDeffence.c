/*

Problem
The enemy has invaded your spaceship, and only superior tactics will allow you to defend it! To travel around your spaceship, your soldiers will use two devices: teleporters and turbolifts.

Teleporters allow your soldiers to move instantly between rooms. Every room contains a teleporter, and rooms are color-coded: if a soldier is in a room with some color, she can use the teleporter in that room to immediately move to any other room with the same color.

Turbolifts allow your soldiers to move between rooms more slowly. A turbolift is like an elevator that moves in many directions. Each turbolift moves from one room to one other room, and it takes a certain amount of time to travel. Notes about turbolifts:

Turbolifts are not two-way: if a turbolift moves soldiers from room a to room b, the same turbolift cannot move soldiers from room b to room a, although there might be another turbolift that does that.
More than one soldier can use the same turbolift, and they do not interfere with each other in any way.
You will be given the locations and destinations of several soldiers. For each soldier, output the minimum amount of time it could take that soldier to travel from his location to his destination.

Input
The first line of the input gives the number of test cases, T. T test cases follow.

For every test case:

The first line of every test case contains an integer N, which is the number of rooms in your spaceship. The rooms are numbered from 1 to N. The following N lines each contain a string telling the color of the rooms, from room 1 to room N. The strings only contain characters a-z (the lower-case English letters) and 0-9 (the number 0 to 9), and the length of each string will be less than or equal to 2.

The next line in the test case is an integer M, which indicates the number of turbolifts in your spaceship. The following M lines each contain 3 space-separated integers ai, bi, ti, telling us that there is a turbolift that can transport soldiers from room ai to room bi in ti seconds.

The next line in the test case contains an integer S, which is the number of soldiers at your command. The following S lines each contain two integers: the location and destination of one soldier, pj and qj.

Output
For each test case, output one line containing only the string "Case #x:", where x is the number of the test case (starting from 1). On the next S lines, output a single integer: on line j, the smallest number of seconds it could take for a soldier to travel from pj to qj. If there is no path from pj to qj, the integer you output should be -1.

Limits
Time limit: 30 seconds per test set.
Memory limit: 1GB.
1 ≤ S ≤ 100.
1 ≤ ai, bi ≤ N.
0 ≤ ti ≤ 1000.
1 ≤ pj, qj ≤ N.
Test set 1 - Visible
1 ≤ T ≤ 10.
1 ≤ N ≤ 1000.
0 ≤ M ≤ 3000.
Test set 2 - Hidden
T = 1.
1 ≤ N ≤ 80000.
0 ≤ M ≤ 3000.

Sample
Sample input                                                 Sample output
3                                                            Case #1:
                                                             -1
                                                              0
3                                                            Case #2:
                                                             -1
                                                              0
                                                              0
gl                                                           Case #3:
                                                              3
                                                             55
                                                             -1
t3
t3
3
1 2 217
3 2 567
1 1 21
2
2 1
2 3
4
ca
bl
bl
8z
0
3
1 2
2 3
1 1
8
re
b7
ye
gr
0l
0l
ye
b7
7
4 1 19
2 4 21
2 5 317
4 5 34
4 7 3
4 8 265
8 6 71
3
4 3
2 6
1 4



@ source - https://codingcompetitions.withgoogle.com/kickstart/round/0000000000434ba1/00000000004348df

*/

#include <stdio.h>

int main(){

    printf("Spaceship Deffence");

    return 0;
}
