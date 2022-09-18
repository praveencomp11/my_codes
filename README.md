# my_codes
All are my codes to the difficult problem


--------------------------------------------------------------------------------------------------------
**1. Problem statement**


Find the pair of elements <br/>
E.g. A=[1 ,2, 3, 4, 5] <br/>
     B=[1 ,2, 3, 4, 5] <br/>
 Output= (1,1), (1,2), (1,3), (1,4), (1,5), (2,1), (2,2), <br/>
         (2,3), (2,4), (2,5), (3,1), (3,2), (3,3), (3,4) <br/>
         (3,5), (4,1), (4,2), (4,3), (4,4), (4,5), (5,1) <br/>
         (5,2), (5,5), (5,4), (5,5) <br/>
         
-----------------------------------------------------------------------------------------------------
**2. Problem Statment** 

Given an 2D integer array A of size N x 2 denoting time intervals of different meetings.
Where:
A[i][0] = start time of the ith meeting.
A[i][1] = end time of the ith meeting.
Find the minimum number of conference rooms required so that all meetings can be done.
Note :-If a meeting ends at time t, another meeting starting at time t can use the same conference room
Problem Constraints
1 <= N <= 105
0 <= A[i][0] < A[i][1] <= 2 * 109
**Input Format**
	The only argument given is the matrix A.
	Output Format
	Return the minimum number of conference rooms required so that all meetings can be done.
**Example Input**
**Input 1:**
A = [[0, 30]
[5, 10]
[15, 20]
]

**Input 2:**

A = [[1, 18]
[18, 23]
[15, 29]
[4, 15]
[2, 11]
[5, 13]
]


**Example Output**
**Output 1:**
2

**Output 2 :**
4

**Example Explanation**
	**Explanation 1 :**

	Meeting one can be done in conference room 1 form 0 - 30.
	Meeting two can be done in conference room 2 form 5 - 10.
	Meeting three can be done in conference room 2 form 15 - 20 as it is free in this interval.
	**Explanation 2 :**

	Meeting one can be done in conference room 1 from 1 - 18.
	Meeting five can be done in conference room 2 from 2 - 11.
	Meeting four can be done in conference room 3 from 4 - 15.
	Meeting six can be done in conference room 4 from 5 - 13.
	Meeting three can be done in conference room 2 from 15 - 29 as it is free in this interval.
	Meeting two can be done in conference room 4 from 18 - 23 as it is free in this interval.

  Given  int Solution::solve(vector<vector<int> >& A) should return conference_room required

-------------------------------------------------------------------------------------------------------------

