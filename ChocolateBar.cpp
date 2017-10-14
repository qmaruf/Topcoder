#include <bits/stdc++.h>
using namespace std;
bool vis[51];
struct ChocolateBar{
int maxLength(string L)
{
	memset(vis, 0, sizeof(vis));
    
    int ret = 0, c = 0;

    for(int i = 0; i < L.length(); i++)
    {
    	bool f = true;
    	for(int j = i + 1; j < L.length(); j++)
    	{
    		if(L[i] == L[j])
    		{
    			vis[i] = true;
    			c++;
    			break;
    		}
    	}
    	if(!vis[i])break;
    }

    reverse(L.begin(), L.end());

	for(int i = 0; i < L.length(); i++)
    {
    	bool f = true;
    	if(vis[i])break;
    	for(int j = i + 1; j < L.length(); j++)
    	{
    		if(L[i] == L[j])
    		{
    			c++;
    			vis[i] = true;
    			break;
    		}
    	}
    	if(!vis[i])break;
    }    

    // cout<<c<<endl;
    ret = L.length() - c;
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "srm"; int Arg1 = 3; verify_case(0, Arg1, maxLength(Arg0)); }
	void test_case_1() { string Arg0 = "dengklek"; int Arg1 = 6; verify_case(1, Arg1, maxLength(Arg0)); }
	void test_case_2() { string Arg0 = "haha"; int Arg1 = 2; verify_case(2, Arg1, maxLength(Arg0)); }
	void test_case_3() { string Arg0 = "www"; int Arg1 = 1; verify_case(3, Arg1, maxLength(Arg0)); }
	void test_case_4() { string Arg0 = "thisisansrmbeforetopcoderopenfinals"; int Arg1 = 9; verify_case(4, Arg1, maxLength(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
ChocolateBar ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
