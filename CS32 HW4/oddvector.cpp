//#include <vector>
//#include <algorithm>
//#include <iostream>
//#include <cassert>
//using namespace std;
//
////Implement the removeOdd function; you must use vector's erase member function. Each int in the vector must be examined for oddness no more than once.
//
//// Remove the odd integers from v.
//// It is acceptable if the order of the remaining even integers is not
//// the same as in the original vector.
//void removeOdd(vector<int>& v)
//{
//	int size = v.size();
//	int temp;
//
//	for (int i = 0; i < size; i++) {
//
//		if ((v.front() % 2) == 0) {
//			temp = v.front();
//			v.erase(v.begin());
//			v.push_back(temp);
//		} else {
//			v.erase(v.begin());
//		}
//		
//	}
//}
//
//void test()
//{
//	int a[8] = { 2, 8, 5, 6, 7, 3, 4, 1 };
//	vector<int> x(a, a + 8);  // construct x from the array
//	assert(x.size() == 8 && x.front() == 2 && x.back() == 1);
//	removeOdd(x);
//	assert(x.size() == 4);
//	sort(x.begin(), x.end());
//	int expect[4] = { 2, 4, 6, 8 };
//	for (int k = 0; k < 4; k++)
//		assert(x[k] == expect[k]);
//}
//
//int main()
//{
//	test();
//	cout << "Passed" << endl;
//}