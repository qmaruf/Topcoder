#include <bits/stdc++.h>
using namespace std;

struct CarolsSinging{
bool vis[31];

void dfs(int p, vector<string> lyrics)
{
	if(!vis[p])
	{
		vis[p] = true;
		for(int i = 0; i < lyrics[p].size(); i++)
		{
			if(lyrics[p][i] == 'Y')
				dfs(i, lyrics);
		}
	}
}
int choose(vector <string> lyrics)
{
    int ret = 0;
    // return ret;
    memset(vis, 0, sizeof(vis));
    for(int i = 0; i < lyrics.size(); i++)
    {
    	if(!vis[i])
    	{
    		dfs(i, lyrics);
    		ret++;
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
	void test_case_0() { string Arr0[] = {"YN","NY"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2; verify_case(0, Arg1, choose(Arg0)); }
	void test_case_1() { string Arr0[] = {"YN","YY","YN"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; verify_case(1, Arg1, choose(Arg0)); }
	void test_case_2() { string Arr0[] = {"YNN","YNY","YNY","NYY","NYY","NYN"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2; verify_case(2, Arg1, choose(Arg0)); }
	void test_case_3() { string Arr0[] = {"YNNYYY","YYNYYY","YNNYYN","NYYNNN","YYYNNN","YYYNNY","NYYYYY","NYNYYY","NNNNYY",
 "YYYYYY","YNNNNN","YYYYNY","YYNNNN","NNYYYN","NNNNYY","YYYNNN","NYNNYN","YNNYYN",
 "YYNNNY","NYYNNY","NNYYYN","YNYYYN","NNNYNY","YYYYNN","YYNYNN","NYYNYY","YYNYYN"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 4; verify_case(3, Arg1, choose(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
CarolsSinging ___test;
___test.run_test(-1);
int gbase;
//cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
