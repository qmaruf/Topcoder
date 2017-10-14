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

struct EightRooks{
string isCorrect(vector <string> b)
{
    string ret;
    int r = b.size();
    int c = b[0].length();

    for(int i = 0; i < r; i++)
    {
        int c = 0;
        for(int j = 0; j < c; j++)
            if(b[i][j] == 'R')
                c++;
        if(c>1)return "Incorrect";
    }

    for(int i = 0; i < r; i++)
    {
        int c = 0;
        for(int j = 0; j < c; j++)
            if(b[j][i] == 'R')
                c++;
        if(c>1)return "Incorrect";
    }

     int cc = 0;
     for(int i = 0; i < r; i++)
    {

        for(int j = 0; j < c; j++)
            if(b[j][i] == 'R')
                cc++;

    }
    if(cc!=8)return "Incorrect";

    return "Correct";
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"R.......",
 ".R......",
 "..R.....",
 "...R....",
 "....R...",
 ".....R..",
 "......R.",
 ".......R"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "Correct"; verify_case(0, Arg1, isCorrect(Arg0)); }
	void test_case_1() { string Arr0[] = {"........",
 "....R...",
 "........",
 ".R......",
 "........",
 "........",
 "..R.....",
 "........"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "Incorrect"; verify_case(1, Arg1, isCorrect(Arg0)); }
	void test_case_2() { string Arr0[] = {"......R.",
 "....R...",
 "...R....",
 ".R......",
 "R.......",
 ".....R..",
 "..R.....",
 ".......R"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "Correct"; verify_case(2, Arg1, isCorrect(Arg0)); }
	void test_case_3() { string Arr0[] = {"......R.",
 "....R...",
 "...R....",
 ".R......",
 "R.......",
 ".......R",
 "..R.....",
 ".......R"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "Incorrect"; verify_case(3, Arg1, isCorrect(Arg0)); }
	void test_case_4() { string Arr0[] = {"........",
 "........",
 "........",
 "........",
 "........",
 "........",
 "........",
 "........"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "Incorrect"; verify_case(4, Arg1, isCorrect(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
EightRooks ___test;
___test.run_test(-1);
int gbase;
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
