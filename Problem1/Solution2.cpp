//Find the pair of elements
//E.g. A=[1 ,2, 3, 4, 5]
//     B=[1 ,2, 3, 4, 5]
// Output= (1,1), (1,2), (1,3), (1,4), (1,5), (2,1), (2,2),
//         (2,3), (2,4), (2,5), (3,1), (3,2), (3,3), (3,4)
//         (3,5), (4,1), (4,2), (4,3), (4,4), (4,5), (5,1)
//         (5,2), (5,5), (5,4), (5,5)


#include<iostream>
#include<vector>
void display(const std::vector<std::pair<int, int> > &result)
{
	for (const auto e : result)
	{
		std::cout << "   (" << e.first << "," << e.second << "),";
	}
}
void  find_pairs(const std::vector<int> &A, const std::vector<int> &B,std::vector<std::pair<int,int> > &result)
{
	for (int i = 0; i < A.size(); i++)
	{
		for (int j = 0; j < B.size(); j++)
		{
			std::pair<int, int> p;
			p=std::make_pair(A[i], B[j]);
			result.emplace_back(p);
		}
	}
}
int main()
{
	std::vector<std::pair<int, int> > result;
	std::vector<int> A;
	std::vector<int> B;
	A = { 1,2,3,4,5 };
	B = { 1,2,3,4,5 };
	find_pairs(A, B, result);
	display(result);
	return 0;
}