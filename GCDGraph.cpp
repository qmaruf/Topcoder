#include <bits/stdc++.h>
using namespace std;
#define white 0
#define black 1
vector<int>vec[1000001];
bool visited[1000001];

struct GCDGraph{

int gcd(int a, int b) 
{
    return b == 0 ? a : gcd(b, a % b);
}

bool dfs(int x, int y)
{	
	// cout<<x<<" "<<y<<endl;
	visited[x]=true;
	if(x==y)return true;
	for(int i = 0; i < vec[x].size(); i++)
	{
		int t = vec[x][i];
		if(!visited[t])
			return dfs(t, y);		
	}
	return false;
}
string possible(int n, int k, int x, int y)
{
	for(int i = 1; i <= n; i++)
		vec[i].clear();
	memset(visited, white, sizeof(visited));
	for(int i = 1; i <= n; i++)
	{
		for(int j = i+1; j <= n; j++)
		{
			if(gcd(i, j) > k)
			{
				vec[i].push_back(j);
				vec[j].push_back(i);
			}
		}
	}
	if(dfs(x, y))return "Possible";
	else return "Impossible";
    
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); if ((Case == -1) || (Case == 6)) test_case_6(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { int Arg0 = 12; int Arg1 = 2; int Arg2 = 8; int Arg3 = 9; string Arg4 = "Possible"; verify_case(0, Arg4, possible(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_1() { int Arg0 = 12; int Arg1 = 2; int Arg2 = 11; int Arg3 = 12; string Arg4 = "Impossible"; verify_case(1, Arg4, possible(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_2() { int Arg0 = 12; int Arg1 = 2; int Arg2 = 11; int Arg3 = 11; string Arg4 = "Possible"; verify_case(2, Arg4, possible(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_3() { int Arg0 = 10; int Arg1 = 2; int Arg2 = 8; int Arg3 = 9; string Arg4 = "Impossible"; verify_case(3, Arg4, possible(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_4() { int Arg0 = 1000000; int Arg1 = 1000; int Arg2 = 12345; int Arg3 = 54321; string Arg4 = "Possible"; verify_case(4, Arg4, possible(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_5() { int Arg0 = 1000000; int Arg1 = 2000; int Arg2 = 12345; int Arg3 = 54321; string Arg4 = "Impossible"; verify_case(5, Arg4, possible(Arg0, Arg1, Arg2, Arg3)); }
	void test_case_6() { int Arg0 = 2; int Arg1 = 0; int Arg2 = 1; int Arg3 = 2; string Arg4 = "Possible"; verify_case(6, Arg4, possible(Arg0, Arg1, Arg2, Arg3)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
GCDGraph ___test;
___test.run_test(-1);
int gbase;  
//cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
