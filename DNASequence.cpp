#include <bits/stdc++.h>
using namespace std;

struct DNASequence{
int longestDNASequence(string seq)
{
    int ret = 0, c = 0;
    for(int i = 0; i < seq.length(); i++)
    {
    	ret = max(c, ret);
    	if(seq[i]=='A'||seq[i]=='C'||seq[i]=='T'||seq[i]=='G')c++;
    	else c = 0;
    }    
    ret = max(c, ret);
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "TOPBOATER"; int Arg1 = 2; verify_case(0, Arg1, longestDNASequence(Arg0)); }
	void test_case_1() { string Arg0 = "SUSHI"; int Arg1 = 0; verify_case(1, Arg1, longestDNASequence(Arg0)); }
	void test_case_2() { string Arg0 = "GATTACA"; int Arg1 = 7; verify_case(2, Arg1, longestDNASequence(Arg0)); }
	void test_case_3() { string Arg0 = "GOODLUCK"; int Arg1 = 1; verify_case(3, Arg1, longestDNASequence(Arg0)); }
	void test_case_4() { string Arg0 = "VVZWKCSIQEGANULDLZESHUYHUQGRKUMFCGTATGOHMLKBIRCA"; int Arg1 = 6; verify_case(4, Arg1, longestDNASequence(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
DNASequence ___test;
___test.run_test(-1);
int gbase;  
//cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
