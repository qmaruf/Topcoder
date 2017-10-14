#include <bits/stdc++.h>

#define pb push_back
#define ll long long
#define sz(a) (int)a.size()
#define len(a) (int)a.length()

using namespace std;
vector<int>A;
int f(int pos, int len)
{
	int sum = 0;
	// cout<<"-"<<pos<<" "<<len<<"-"<<endl;
	for(int i=pos;i<pos+len;i++){
		sum+=A[i];
		// cout<<A[i]<<" ";
	}
	// cout<<endl;
	return sum;
}
struct SumOfPower{
int findSum(vector <int> array)
{
	A = array;
    int ret=0;
    for(int i=0;i<sz(array);i++)
    {
    	for(int len=1;len<=sz(array);len++)
    	{
    		ret += f(i,len-i);
    	}
    }
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {1,2}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 6; verify_case(0, Arg1, findSum(Arg0)); }
	void test_case_1() { int Arr0[] = {1,1,1}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 10; verify_case(1, Arg1, findSum(Arg0)); }
	void test_case_2() { int Arr0[] = {3,14,15,92,65}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1323; verify_case(2, Arg1, findSum(Arg0)); }
	void test_case_3() { int Arr0[] = {1,2,3,4,5,6,7,8,9,10}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1210; verify_case(3, Arg1, findSum(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
SumOfPower ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
