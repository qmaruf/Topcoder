#include <bits/stdc++.h>
using namespace std;

struct PenguinPals{
string colors;
int N;

map<string, int>mp;

int solve(string str)
{
	cout<<str<<endl;
	if(mp.find(str) != mp.end())return mp[str];
	if(str.length() < 2)return 0;
	if(str.length() == 2)
	{
		if(str[0] == str[1])return 1;
		else return 0;
	}

	int ret = -1;
	for(int i = 0; i < str.length(); i++)
		for(int j = i + 1; j < str.length(); j++)
			if(str[i] == str[j]){				
				string a = str.substr(i+1, j - 1 - i);
				string b = str.substr(j + 1) + str.substr(0, i);
				ret = max(ret, 1 + solve(a) + solve(b));
			}	
	mp[str] = ret;
	return ret;			

}
int findMaximumMatching(string colors)
{
	mp.clear();
	this->colors = colors;
	this->N = colors.length();
	int ret = 0;
	for(int i = 0; i < colors.length(); i++)
		for(int j = i + 1; j < colors.length(); j++)
			if(colors[i] == colors[j]){
				string a = colors.substr(i+1, j - 1 - i);
				string b = colors.substr(j + 1) + colors.substr(0, i);
				ret = max(ret, 1 + solve(a) + solve(b));
			}				
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); if ((Case == -1) || (Case == 6)) test_case_6(); if ((Case == -1) || (Case == 7)) test_case_7(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "BBRRBBBRBRBBRBBBRBBBBBRRBBBB"; int Arg1 = 3; verify_case(0, Arg1, findMaximumMatching(Arg0)); }
	void test_case_1() { string Arg0 = "RRRR"; int Arg1 = 2; verify_case(1, Arg1, findMaximumMatching(Arg0)); }
	void test_case_2() { string Arg0 = "BBBBB"; int Arg1 = 2; verify_case(2, Arg1, findMaximumMatching(Arg0)); }
	void test_case_3() { string Arg0 = "RBRBRBRBR"; int Arg1 = 4; verify_case(3, Arg1, findMaximumMatching(Arg0)); }
	void test_case_4() { string Arg0 = "RRRBRBRBRBRB"; int Arg1 = 5; verify_case(4, Arg1, findMaximumMatching(Arg0)); }
	void test_case_5() { string Arg0 = "R"; int Arg1 = 0; verify_case(5, Arg1, findMaximumMatching(Arg0)); }
	void test_case_6() { string Arg0 = "RBRRBBRB"; int Arg1 = 3; verify_case(6, Arg1, findMaximumMatching(Arg0)); }
	void test_case_7() { string Arg0 = "RBRBBRBRB"; int Arg1 = 4; verify_case(7, Arg1, findMaximumMatching(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
PenguinPals ___test;
___test.run_test(0);
int gbase;  
//cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
