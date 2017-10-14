#include <bits/stdc++.h>

#define pb push_back
#define ll long long
#define sz(a) (int)a.size()
#define len(a) (int)a.length()

using namespace std;

bool taken[21];
vector<int>res;
vector<ll>sm;
vector<int>a;
int ret = 0;


struct NumbersChallenge{
int MinNumber(vector <int> s)
{
	int tot = accumulate(s.begin(), s.end(), 0);
	vector<int>v = vector<int>(tot+1, 0);
	v[0] = 1;
	for(int i = 0; i < s.size(); i++)v[s[i]] = 1;
	for(int i = tot; i>0;i--)
	{
		for(int j = 0; j < s.size(); j++)
		{
			int pos = i - s[j];
			if(v[pos])
			{
				v[i] = 1;
				break;
			}
		}
	}
	for(int i = 0; i <= tot; i++)
		if(v[i] == 0)
			return i;

}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {5, 1, 2}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 4; verify_case(0, Arg1, MinNumber(Arg0)); }
	void test_case_1() { int Arr0[] = {2, 1, 4}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 8; verify_case(1, Arg1, MinNumber(Arg0)); }
	void test_case_2() { int Arr0[] = {2, 1, 2, 7}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 6; verify_case(2, Arg1, MinNumber(Arg0)); }
	void test_case_3() { int Arr0[] = {94512, 2, 87654, 81316, 6, 5, 6, 37151, 6, 139, 1, 36, 307, 1, 377, 101, 8, 37, 58, 1}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1092; verify_case(3, Arg1, MinNumber(Arg0)); }
	void test_case_4() { int Arr0[] = {883, 66392, 3531, 28257, 1, 14131, 57, 1, 25, 88474, 4, 1, 110, 6, 1769, 220, 442, 7064, 7, 13}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 56523; verify_case(4, Arg1, MinNumber(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
NumbersChallenge ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
