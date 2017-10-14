#include <bits/stdc++.h>
using namespace std;

struct TopBiologist{
string findShortestNewSequence(string sequence)
{
	char chars[] = {'A', 'C', 'G', 'T'};
    string ret = "";
    queue<string>q;
    q.push(ret);
    while(!q.empty())
    {
    	ret = q.front(); q.pop();
    	if(sequence.find(ret)==string::npos)
    		return ret;
    	for(int i = 0; i < 4; i++)
    		q.push(ret+chars[i]);

    }
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "AGGTCTA"; string Arg1 = "AC"; verify_case(0, Arg1, findShortestNewSequence(Arg0)); }
	void test_case_1() { string Arg0 = "AGACGACGGAGAACGA"; string Arg1 = "T"; verify_case(1, Arg1, findShortestNewSequence(Arg0)); }
	void test_case_2() { string Arg0 = "A"; string Arg1 = "C"; verify_case(2, Arg1, findShortestNewSequence(Arg0)); }
	void test_case_3() { string Arg0 = "AAGATACACCGGCTTCGTG"; string Arg1 = "CAT"; verify_case(3, Arg1, findShortestNewSequence(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
TopBiologist ___test;
___test.run_test(-1);
int gbase;  
//cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
