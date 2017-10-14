#include <bits/stdc++.h>
using namespace std;
#define inf 1<<20
struct OrderOfOperationsDiv2{
vector<int>vec;
int N, M;

int tonum(string s)
{
	int ret = 0;
	for(int i = 0; i < s.length(); i++)	
		if(s[i] == '1')
			ret = ret | (1<<i);	
	return ret;
}

int solve(int tp, int tpbit, int occ)
{	

	int sc = 0;
	for(int i = 0; i < M; i++)
	{
		bool a = vec[tp]&(1<<i);
		bool b = occ&(1<<i);
		if(a && !b)
		{
			sc++;
			occ = occ|(1<<i);
		}
	}
	sc = sc * sc;
	
	if((1<<N)-1 == tpbit)return sc;		
	int ret = inf;	
	for(int i = 0; i < N; i++)
	{
		if(tpbit&(1<<i))continue;
		ret = min(ret, sc + solve(i, tpbit|(1<<i), occ));
	}
	return ret;
	
}
int minTime(vector <string> s)
{	

	N = s.size();
	M = s[0].length();	
	vec.clear();
	for(int i = 0; i < s.size(); i++)
		vec.push_back(tonum(s[i]));
		
    int ret = inf;
    for(int i = 0; i < vec.size(); i++){
		int ans = solve(i, 1<<i, 0);		
		ret = min(ret, ans); //taken person, occupied bits
	}		
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {
 "111",
 "001",
 "010"
}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 3; verify_case(0, Arg1, minTime(Arg0)); }
	void test_case_1() { string Arr0[] = {
 "11101",
 "00111",
 "10101",
 "00000",
 "11000"
}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 9; verify_case(1, Arg1, minTime(Arg0)); }
	void test_case_2() { string Arr0[] = {
  "11111111111111111111"
}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 400; verify_case(2, Arg1, minTime(Arg0)); }
	void test_case_3() { string Arr0[] = {
  "1000",
  "1100",
  "1110"
}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 3; verify_case(3, Arg1, minTime(Arg0)); }
	void test_case_4() { string Arr0[] = {
  "111",
  "111",
  "110",
  "100"
}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 3; verify_case(4, Arg1, minTime(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
OrderOfOperationsDiv2 ___test;
___test.run_test(-1);
int gbase;  
//cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
