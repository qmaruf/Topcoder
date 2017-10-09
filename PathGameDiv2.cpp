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

struct S
{
	int x, y;
	int dist;
};

bool vis[2][100];
vector<string>brd;
int len;

bool valid(S p)
{
	if(p.x < 0 || p.y < 0 || p.x >= len || p.y >= len || brd[p.x][p.y] == '#' || vis[p.x][p.y] == true)return false;
	vis[p.x][p.y] = true;
	return true;
}
int bfs(S u, S v)
{
	cout<< u.x <<" "<<u.y <<" "<<v.x<<" "<<v.y<<endl;
	u.dist = 1;
	queue<S>q;
	q.push(u);
	while(!q.empty())
	{
		u = q.front(); q.pop();
		if(u.x == v.x && u.y == v.y)return u.dist;
		S p;
		p.x = (u.x + 1)%2;
		p.y = u.y;
		if(valid(p))
		{
			p.dist = 1+u.dist;
			q.push(p);
		}
		p.x = u.x;
		p.y = u.y+1;
		if(valid(p))
		{
			p.dist = 1+u.dist;
			q.push(p);
		}
	}
	return -1;
}
struct PathGameDiv2{
int calc(vector <string> b)
{
	int wc = 0;
	for(int i=0;i<b.size();i++)
		for(int j=0;j<b[i].length();j++)
			if(b[i][j]=='.')
				wc++;
	brd = b;
	len = b[0].length();

	int A[4] = {0,0,1,0};
	int B[4] = {0,len-1, 1,len-1};

	int ret = 1<<20;
	for(int i=0;i<4;i+=2)
	{
		for(int j=0;j<4;j+=2)
		{
			int x1 = A[i];
			int y1 = A[i+1];
			int x2 = B[j];
			int y2 = B[j+1];
			if(brd[x1][y1] == '#' || brd[x2][y2] == '#')continue;
			S u,v;
			u.x = x1, u.y = y1, v.x = x2, v.y = y2;
			memset(vis, 0, sizeof(vis));
			int dist = bfs(u, v);
			if(dist!=-1)
			{
				// cout<<"-- "<<dist<<endl;
				ret = min(ret, dist);
			} 
		}
	}
	//cout<<wc<<endl;
    return wc-ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"#...."
,"...#."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2; verify_case(0, Arg1, calc(Arg0)); }
	void test_case_1() { string Arr0[] = {"#"
,"."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 0; verify_case(1, Arg1, calc(Arg0)); }
	void test_case_2() { string Arr0[] = {"."
,"."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; verify_case(2, Arg1, calc(Arg0)); }
	void test_case_3() { string Arr0[] = {"....#.##.....#..........."
,"..#......#.......#..#...."}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 13; verify_case(3, Arg1, calc(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
PathGameDiv2 ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
