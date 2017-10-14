#include <bits/stdc++.h>
using namespace std;
vector<int>vec;
struct MatchNumbersEasy{

string dp[10001];

string big(string a, string b)
{
	a.erase(0, a.find_first_not_of('0'));
	b.erase(0, b.find_first_not_of('0'));
	int la = a.length();
	int lb = b.length();
	if(la > lb)return a;
	else if(la < lb)return b;
	else {
		return a.compare(b) > 0 ? a : b;
	}
}
string maxNumber(vector <int> matches, int n)
{
	vec = matches;
	string ret;
    int sz = vec.size();
    dp[0] = "";
    for(int i = 1; i <= n; i++)
    {
    	string mx = "";
    	for(int j = sz - 1; j >= 0; j--)
    	{
    		int prev = i - vec[j];    	    		
    		if(prev >= 0)
    		{
    			char ch = '0' + j;
    			string curv = dp[prev] + string(1, ch);    		
    			mx = big(mx, curv);
    			if(i == 21)cout<<" ++ "<<prev<<" "<<dp[prev]<<" "<<curv<<" "<<mx<<" "<<(curv>mx)<<endl;	
    		}
    	}
    	dp[i] = mx;
    }

    for(int i = 0; i <= n; i++)
    	cout<<i<<" "<<dp[i]<<endl;
    if(dp[n]=="")return "0";
    return dp[n];
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arr0[] = {6,7,8}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 21; string Arg2 = "210"; verify_case(0, Arg2, maxNumber(Arg0, Arg1)); }
	void test_case_1() { int Arr0[] = {5,23,24}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 30; string Arg2 = "20"; verify_case(1, Arg2, maxNumber(Arg0, Arg1)); }
	void test_case_2() { int Arr0[] = {1,5,3,2}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; string Arg2 = "0"; verify_case(2, Arg2, maxNumber(Arg0, Arg1)); }
	// void test_case_3() { int Arr0[] = {1,5,3,2}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; string Arg2 = "0"; verify_case(2, Arg2, maxNumber(Arg0, Arg1)); }
	void test_case_3() { int Arr0[] = {1,1,1,1,1,1,1,1,1,1}; vector <int> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 50; string Arg2 = "99999999999999999999999999999999999999999999999999"; verify_case(3, Arg2, maxNumber(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
MatchNumbersEasy ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
