#include <bits/stdc++.h>
using namespace std;

struct FriendScore{


int highestScore(vector <string> F)
{


    int row = F.size();
    int col = F[0].length();
    int n = row;


    for(int k = 0; k < n; k++)
    	for(int i = 0; i < n; i++)
    		for(int j = 0; j < n; j++)
    			if(F[i][k] == 'Y' && F[k][j] == 'Y')
    				F[i][j] = 'Y';

    int mx = -1;
    
	for(int i = 0; i < row; i++)
	{
		int c = 0;
    	for(int j = 0; j < col; j++)
    	{    		
    		if(i == j)continue;
    		if(F[i][j] == 'Y')c++;
    	}
    	mx = max(mx, c);
    
	}
	cout<<mx<<endl;
    return mx;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"NNN",
 "NNN",
 "NNN"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 0; verify_case(0, Arg1, highestScore(Arg0)); }
	void test_case_1() { string Arr0[] = {"NYY",
 "YNY",
 "YYN"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2; verify_case(1, Arg1, highestScore(Arg0)); }
	void test_case_2() { string Arr0[] = {"NYNNN",
 "YNYNN", 
 "NYNYN", 
 "NNYNY", 
 "NNNYN"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 4; verify_case(2, Arg1, highestScore(Arg0)); }
	void test_case_3() { string Arr0[] = {"NNNNYNNNNN",
 "NNNNYNYYNN",
 "NNNYYYNNNN",
 "NNYNNNNNNN",
 "YYYNNNNNNY",
 "NNYNNNNNYN",
 "NYNNNNNYNN",
 "NYNNNNYNNN",
 "NNNNNYNNNN",
 "NNNNYNNNNN"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 8; verify_case(3, Arg1, highestScore(Arg0)); }
	void test_case_4() { string Arr0[] = {"NNNNNNNNNNNNNNY",
 "NNNNNNNNNNNNNNN",
 "NNNNNNNYNNNNNNN",
 "NNNNNNNYNNNNNNY",
 "NNNNNNNNNNNNNNY",
 "NNNNNNNNYNNNNNN",
 "NNNNNNNNNNNNNNN",
 "NNYYNNNNNNNNNNN",
 "NNNNNYNNNNNYNNN",
 "NNNNNNNNNNNNNNY",
 "NNNNNNNNNNNNNNN",
 "NNNNNNNNYNNNNNN",
 "NNNNNNNNNNNNNNN",
 "NNNNNNNNNNNNNNN",
 "YNNYYNNNNYNNNNN"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 6; verify_case(4, Arg1, highestScore(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
FriendScore ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
