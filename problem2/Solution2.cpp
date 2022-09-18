//Given an 2D integer array A of size N x 2 denoting time intervals of different meetings.
//Where:
//A[i][0] = start time of the ith meeting.
//A[i][1] = end time of the ith meeting.
//Find the minimum number of conference rooms required so that all meetings can be done.
//Note :-If a meeting ends at time t, another meeting starting at time t can use the same conference room
//Problem Constraints
//1 <= N <= 105
//0 <= A[i][0] < A[i][1] <= 2 * 109
//	Input Format
//	The only argument given is the matrix A.
//	Output Format
//	Return the minimum number of conference rooms required so that all meetings can be done.
//    Example Input
//    Input 1:
//
//A = [[0, 30]
//[5, 10]
//[15, 20]
//]
//
//Input 2:
//
//A = [[1, 18]
//[18, 23]
//[15, 29]
//[4, 15]
//[2, 11]
//[5, 13]
//]
//Example Output
//Output 1:
//
//2
//Output 2 :
//
//	4
//
//	Example Explanation
//	Explanation 1 :
//
//	Meeting one can be done in conference room 1 form 0 - 30.
//	Meeting two can be done in conference room 2 form 5 - 10.
//	Meeting three can be done in conference room 2 form 15 - 20 as it is free in this interval.
//	Explanation 2 :
//
//	Meeting one can be done in conference room 1 from 1 - 18.
//	Meeting five can be done in conference room 2 from 2 - 11.
//	Meeting four can be done in conference room 3 from 4 - 15.
//	Meeting six can be done in conference room 4 from 5 - 13.
//	Meeting three can be done in conference room 2 from 15 - 29 as it is free in this interval.
//	Meeting two can be done in conference room 4 from 18 - 23 as it is free in this interval.


//Given  int Solution::solve(vector<vector<int> >& A) should return conference_room required
#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
class Solution
{
public:
	int solve(vector<vector<int> >& A);
};

bool sortFunc(const vector<int>  &p1, const vector<int>  &p2)
{
	return p1[0] < p2[0];
}

int Solution::solve(vector<vector<int> >& A)
{
	sort(A.begin(), A.end(), sortFunc);
	
	
	
	cout << "\n";
	for (int i = 0; i < A.size(); i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << A[i][j] << " ";
		}
		cout << "\n";
	}

	priority_queue<int, vector<int>, greater<int> > pq;
	pq.push(A[0][1]);

	for (int i = 1; i < A.size(); i++)
	{
		if (A[i][0] >= pq.top())
		{
			pq.pop();
			pq.push(A[i][1]);
		}
		else
		{
			pq.push(A[i][1]);
		}
	}

	return pq.size();
}


int main()
{
	//output should be 5 for following input

	vector<vector<int> > A{
	{1, 23},
  {1, 3},
  {22, 23},
  {8, 25},
  {14, 27},
  {4, 24}
	};

	//Output should be 2 for following input
	vector<vector<int> > B{
	   {0,30},
	 {5,10},
	 {15,20},
	};


	//output should be 4 for following input
	vector<vector<int> > C{
	{1, 18},
		{18,23},
   {15,29},
   {4,15},
   {2,11},
   {5,13}
	};




	Solution s;
	std::cout << s.solve(A);

}