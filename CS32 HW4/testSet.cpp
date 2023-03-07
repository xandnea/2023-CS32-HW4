//#include "Set.h"  // class template from problem 2
//#include <string>
//using namespace std;
//
//class Coord
//{
//public:
//	Coord(int r, int c) : m_row(r), m_col(c) {}
//	Coord() : m_row(0), m_col(0) {}
//	double r() const { return m_row; }
//	double c() const { return m_col; }
//private:
//	double m_row;
//	double m_col;
//};
//
//int main()
//{
//	Set<int> si;
//	si.insert(7);               // OK
//	Set<string> ss;
//	ss.insert("7-Up");          // OK
//	Set<Coord> sc;
//	sc.insert(Coord(7, -7));    // error!
//}
//
////#include "Set.h"
////#include <iostream>
////#include <string>
////#include <cassert>
////using namespace std;
////
////void test()
////{
////	Set<int> si;
////	Set<string> ss;
////	assert(si.empty());
////	assert(ss.empty());
////	assert(si.size() == 0);
////	assert(ss.size() == 0);
////	assert(si.insert(10));
////	assert(ss.insert("hello"));
////	assert(si.contains(10));
////	assert(ss.contains("hello"));
////	int i;
////	assert(si.get(0, i) && i == 10);
////	string s;
////	assert(ss.get(0, s) && s == "hello");
////	assert(si.erase(10));
////	assert(ss.erase("hello"));
////	Set<int> si2(si);
////	Set<string> ss2(ss);
////	si.swap(si2);
////	ss.swap(ss2);
////	si = si2;
////	ss = ss2;
////	unite(si, si2, si);
////	unite(ss, ss2, ss);
////	butNot(si, si2, si);
////	butNot(ss, ss2, ss);
////}
////
////int main()
////{
////	test();
////	cout << "Passed all tests" << endl;
////}