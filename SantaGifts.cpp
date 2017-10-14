#include <bits/stdc++.h>
using namespace std;

struct SantaGifts{
vector <string> distribute(vector <string> gifts, int N)
{
    vector <string> ret;
    for(int i = 0; i < N; i++)ret.push_back("");

    int cur = 0;
	int vis[N];
	memset(vis, 0, sizeof(vis));
    for(int i = 0; i < gifts.size(); i++)
    {
    	string g;
    	if(ret[cur].length() == 0)
    	{
    		g = gifts[i];    	
    		if(vis[cur] < 4)
    			ret[cur] += g;
    	}    		
    	else
    	{
    		g = " " + gifts[i];    		
    		if(vis[cur] < 4)
    			ret[cur] += g;
    	}
    	
    	vis[cur] += 1;
    	cur = (cur + 1)%N;

    }
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const vector <string> &Expected, const vector <string> &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: " << print_array(Expected) << endl; cerr << "\tReceived: " << print_array(Received) << endl; } }
	void test_case_0() { string Arr0[] = {"ball","plane","robot","puzzle"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 3; string Arr2[] = {"ball puzzle", "plane", "robot" }; vector <string> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); verify_case(0, Arg2, distribute(Arg0, Arg1)); }
	void test_case_1() { string Arr0[] = {"ball","plane","robot","puzzle","bike"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; string Arr2[] = {"ball plane robot puzzle" }; vector <string> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); verify_case(1, Arg2, distribute(Arg0, Arg1)); }
	void test_case_2() { string Arr0[] = {"ball","ball","plane","plane"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2; string Arr2[] = {"ball plane", "ball plane" }; vector <string> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); verify_case(2, Arg2, distribute(Arg0, Arg1)); }
	void test_case_3() { string Arr0[] = {"ball","plane","robot"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 5; string Arr2[] = {"ball", "plane", "robot", "", "" }; vector <string> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); verify_case(3, Arg2, distribute(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
SantaGifts ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
