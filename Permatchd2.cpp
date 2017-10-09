#include <bits/stdc++.h>
using namespace std;

struct Permatchd2{
int visited[100];

void dfs(int u, vector<string>graph)
{	
	if(visited[u])return;
	visited[u]=1;	
	for(int i = 0; i < graph.size(); i++)	
		if(graph[u][i]=='Y')
			dfs(i, graph);		
}

int fix(vector <string> graph)
{
	memset(visited, 0, sizeof(visited));
    int ret = 0;
    int sz = graph.size();
    int cc = 0;
    int even = 0, odd = 0;
    for(int i = 0; i < sz; i++)
	{
		if(!visited[i])
		{
			dfs(i, graph);
			vector<int>nodes;
			for(int j = 0; j < sz; j++)
			{
				if(visited[j]==1)
				{
					nodes.push_back(j);
					visited[j]=2;
				}
			}
			int n = 0;
			for(int j = 0; j < nodes.size(); j++)
			{
				for(int k = 0; k < nodes.size(); k++)
				{
					if(nodes[j]==nodes[k])
						continue;
					if(graph[nodes[j]][nodes[k]]=='Y')
						n++;
				}
			}
			n/=2;
			if(n&1)odd++;
			else even++;
		}
	}
	ret = 0;
	while(even && odd)
	{
		even--;
		odd--;
		ret++;
	}
	if(odd)
	{
		if(odd&1)
		{
			ret += (odd-1)/2;
			odd = 1;
		}	
		else
		{
			ret += odd/2;
			odd = 0;
		}
	}
	if(odd)ret=-1;
	return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"NYN",
 "YNN",
 "NNN"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; verify_case(0, Arg1, fix(Arg0)); }
	void test_case_1() { string Arr0[] = {"NYY",
 "YNN",
 "YNN"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 0; verify_case(1, Arg1, fix(Arg0)); }
	void test_case_2() { string Arr0[] = {"NYY",
 "YNY",
 "YYN"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = -1; verify_case(2, Arg1, fix(Arg0)); }
	void test_case_3() { string Arr0[] = {"NYYY",
 "YNYY",
 "YYNN",
 "YYNN"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; verify_case(3, Arg1, fix(Arg0)); }
	void test_case_4() { string Arr0[] = {"NYNNNN",
 "YNNNNN",
 "NNNYNN",
 "NNYNNN",
 "NNNNNY",
 "NNNNYN"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 3; verify_case(4, Arg1, fix(Arg0)); }
	void test_case_5() { string Arr0[] = {"N"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 0; verify_case(5, Arg1, fix(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
Permatchd2 ___test;
___test.run_test(-1);
int gbase;  
//cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
