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


//given  int Solution::solve(vector<vector<int> >& A) should return conference_room required
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
class Solution
{
public:
	int solve(vector<vector<int> >& A);
};

bool sortFunc(const vector<int> &p1, vector<int>& p2)
{
	return p1[0] < p2[0];
}

int check_conflict(int start_time, int end_time, vector<vector<int>>& track)
{
	for (int i = 0; i < track.size(); i++)
	{

		if (start_time > track[i][0] && start_time >= track[i][1])
		{
			track[i][1] = end_time;
			return 0;
		}


	}
	return 1;
}

int Solution::solve(vector<vector<int> >& A)
{
	sort(A.begin(),A.end(), sortFunc);
	vector < vector<int>> track;
	int conference_count = 0;
	int k = 1;
	for (auto e : A)
	{
		int start_time = e[0];
		int end_time = e[1];
		if (conference_count == 0)
		{
			track.push_back(e);
			conference_count++;
			continue;
		}
		else if (check_conflict(start_time, end_time, track))
		{
			track.push_back(e);
			conference_count++;
		}

 	}
	return (conference_count);
	return 1;
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
	std::cout << s.solve(C);

}