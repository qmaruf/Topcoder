#include <bits/stdc++.h>
using namespace std;

struct PathGameDiv2{


int R, C;
vector <string> G;

struct Point{
	int x, y;
	Point(int a, int b){
		x = a;
		y = b;
	}
};
#define ppi pair<Point, int>
bool vis[3][500];




int bfs(int x1, int y1, int x2, int y2)
{
	memset(vis, 0, sizeof(vis));
	queue<ppi>q;
	q.push(make_pair(Point(x1, y1), 0));
	vis[x1][y1] = true;

	while(!q.empty())
	{
		ppi u = q.front();
		q.pop();

		int x = u.first.x;
		int y = u.first.y;
		int cost = u.second;

		if(x == x2 && y == y2){
			cout<<x1<<" "<<y1<<endl;
			cout<<"dest "<<x2<<" "<<y2<<endl;
			return cost;
		}

		for(int i = -1; i < 2; i++)
		{
			for(int j = -1; j < 2; j++)
			{
				if(i == 0 && j == 0)continue;
				int dx = x + i;
				int dy = y + j;

				if(dx >= 0 && dx < R && dy >= 0 && dy < C)
				{
					if(!vis[dx][dy] && G[dx][dy] == '.')
					{
						cout<<"__ "<<dx<<" "<<dy<<endl;
						vis[dx][dy] = true;
						q.push(make_pair(Point(dx, dy), cost+1));
					}
				}
			}
		}
	}
	return -1;
}




int calc(vector <string> board)
{
	int ret = -1;
	int tot = 0;
	R = board.size();
	C = board[0].length();
	G = board;

	for(int i = 0; i < R; i++)
		for(int j = 0; j < C; j++)
			if(G[i][j] == '.')
				tot++;

	cout<<"tot "<<tot<<endl;
	
	int x[] = {0, 1, 0, 1};
	int y[] = {0, 0, C - 1, C - 1};

	for(int i = 0; i < 2; i++)
	{
		for(int j = 2; j < 4; j++)
		{
			int x1 = x[i];
			int y1 = y[i];

			int x2 = x[j];
			int y2 = y[j];

			if(G[x1][y1] == '#' || G[x2][y2] == '#')continue;

			int cost = bfs(x1, y1, x2, y2);
			cout<<cost<<endl;
			if(cost != -1)
				ret = max(ret, tot - cost);
		}
	}
	return ret;
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
