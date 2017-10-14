#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cctype>

#include<cmath>
#include<iostream>
#include<fstream>

#include<string>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>
#include<set>
#include<sstream>
#include<stack>
using namespace std;

struct Car{
    int u,v;
};

bool compare(Car a, Car b)
{
    if(a.v <= b.u)return true;
    else return false;
}
struct ConnectingCars{
long long minimizeCost(vector <int> positions, vector <int> lengths)
{
    vector<Car>cars;
    for(int i=0;i<positions.size();i++)
    {
        Car c;
        c.u = positions[i];
        c.v = positions[i] + lengths[i];
        cars.push_back(c);
    }
    sort(cars.begin(), cars.end(), compare);

    int sz = positions.size();
    long long ret = 1<<20;
    for(int i=0;i<cars.size();i++)
    {
        long long sum = 0, carry = 0;
        for(int j=i-1;j>=0;j--)
        {
            sum += cars[j].u - cars[j-1].v + carry;
            carry = sum;
        }

        carry = 0;
        for(int j=sz-1;j>i;j--)
        {
            sum += cars[j].u - cars[j-1].v + carry;
            carry = sum;
        }

        ret = min(ret, sum);

    }

    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const long long &Expected, const long long &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {1, 3, 10, 20}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {2, 2, 5, 3}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); long long Arg2 = 15LL; verify_case(0, Arg2, minimizeCost(Arg0, Arg1)); }
	void test_case_1() { int Arr0[] = {100, 50, 1}
; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {10, 2, 1}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); long long Arg2 = 96LL; verify_case(1, Arg2, minimizeCost(Arg0, Arg1)); }
	void test_case_2() { int Arr0[] = {4, 10, 100, 13, 80}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {5, 3, 42, 40, 9}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); long long Arg2 = 66LL; verify_case(2, Arg2, minimizeCost(Arg0, Arg1)); }
	void test_case_3() { int Arr0[] = {5606451, 63581020, 81615191, 190991272, 352848147, 413795385, 468408016, 615921162, 760622952, 791438427}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arr1[] = {42643329, 9909484, 58137134, 99547272, 39849232, 15146704, 144630245, 604149, 15591965, 107856540}; vector <int> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); long long Arg2 = 1009957100LL; verify_case(3, Arg2, minimizeCost(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
ConnectingCars ___test;
___test.run_test(-1);
int gbase;
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
