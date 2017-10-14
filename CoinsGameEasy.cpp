#include <bits/stdc++.h>
using namespace std;

struct CoinsGameEasy{

bool vis[51][51][51][51];

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

struct Pos{
	int x1, y1;
	int x2, y2;
	int w;
	Pos(int a, int b, int c, int d, int e){
		x1 = a; y1 = b;
		x2 = c; y2 = d;
		w = e;
	}
};

vector <string> board;

int R, C;

int valid(int x, int y)
{
	// cout<<"in valid "<<x<<" "<<y<<endl;
	
	if(x >= 0 && y >= 0 && x < R && y < C)
	{
		if(board[x][y] == '#')
			return 0; // no move
		else
			return 1; //move
	}
	else
		return 2; //out of board
}
int minimalSteps(vector <string> board)
{
	memset(vis, 0, sizeof(vis));
	this->board = board;
	R = board.size();
	C = board[0].length();

	int x1, y1, x2, y2;
	int f = 0;
	for(int i = 0; i <board.size(); i++)
		for(int j = 0; j < board[i].length(); j++)
			if(board[i][j] == 'o'){
				if(f == 0){
					x1 = i;
					y1 = j;
					f = 1;
					continue;
				}
				else if(f == 1){
					x2 = i;
					y2 = j;
					break;
				}
			}
	Pos u = Pos(x1, y1, x2, y2, 0);
	vis[x1][y1][x2][y2] = true;
	queue<Pos>q;
	q.push(u);
	
	while(!q.empty())
	{
		Pos u = q.front();
		q.pop();

		// if(u.w >= 10)continue;


		for(int i = 0; i < 4; i++)
		{
			cout<<i<<endl;
			int v1 = valid(u.x1 + dx[i], u.y1 + dy[i]);
			int v2 = valid(u.x2 + dx[i], u.y2 + dy[i]);

			
			if(v1 == -1 || v2 == -1)continue;

			if(v1 == 1 && v2 == 1){
				Pos v = Pos(u.x1 + dx[i], u.y1 + dy[i], u.x2 + dx[i], u.y2 + dy[i], u.w + 1);
				if(!vis[u.x1 + dx[i]][u.y1 + dy[i]][u.x2 + dx[i]][u.y2 + dy[i]])
				{
					q.push(v);
					vis[u.x1 + dx[i]][u.y1 + dy[i]][u.x2 + dx[i]][u.y2 + dy[i]] = true;
				}

			}
			else if((v1 == 2 && v2 != 2) || (v1 != 2 && v2 == 2)){
				if(u.w + 1 <= 10)return u.w + 1;
			}
			else if(v1 == 0 && v2 == 1)
			{
				Pos v = Pos(u.x1, u.y1, u.x2 + dx[i], u.y2 + dy[i], u.w + 1);
				if(!vis[u.x1][u.y1][u.x2 + dx[i]][u.y2 + dy[i]])
				{
					q.push(v);	
					vis[u.x1][u.y1][u.x2 + dx[i]][u.y2 + dy[i]] = true;
				}	
			}
			else if(v1 == 1 && v2 == 0){
				Pos v = Pos(u.x1 + dx[i], u.y1 + dy[i], u.x2, u.y2, u.w + 1);
				if(!vis[u.x1 + dx[i]][u.y1 + dy[i]][u.x2][u.y2])
				{
					q.push(v);
					vis[u.x1 + dx[i]][u.y1 + dy[i]][u.x2][u.y2] = true;		
				}
				
			}

		}


	}    
    return -1;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); if ((Case == -1) || (Case == 6)) test_case_6(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"oo"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; verify_case(0, Arg1, minimalSteps(Arg0)); }
	void test_case_1() { string Arr0[] = {".#", 
 ".#", 
 ".#",
 "o#",
 "o#",
 "##"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 4; verify_case(1, Arg1, minimalSteps(Arg0)); }
	void test_case_2() { string Arr0[] = {"..",
 "..",
 "..",
 "o#",
 "o#",
 "##"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 3; verify_case(2, Arg1, minimalSteps(Arg0)); }
	void test_case_3() { string Arr0[] = {"###",
 ".o.",
 "###",
 ".o.",
 "###"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = -1; verify_case(3, Arg1, minimalSteps(Arg0)); }
	void test_case_4() { string Arr0[] = {"###",
 ".o.",
 "#.#",
 ".o.",
 "###"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 3; verify_case(4, Arg1, minimalSteps(Arg0)); }
	void test_case_5() { string Arr0[] = {"###########",
 "........#o#",
 "###########",
 ".........o#",
 "###########"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 10; verify_case(5, Arg1, minimalSteps(Arg0)); }
	void test_case_6() { string Arr0[] = {"############",
 ".........#o#",
 "############",
 "..........o#",
 "############"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = -1; verify_case(6, Arg1, minimalSteps(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
CoinsGameEasy ___test;
___test.run_test(-1);
int gbase;  
//cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
