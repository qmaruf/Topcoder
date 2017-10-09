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

#define SSTR( x ) dynamic_cast< std::ostringstream & >( \
        ( std::ostringstream() << std::dec << x ) ).str()
        
struct Node
{
    Node* next[26];
    int x, y;
    Node(int a, int b){
           x = a, y=b;
           //cout<<"==>"<<a<<" "<<b<<endl;
           memset(next, 0, sizeof(next));
    }
};

vector <string> g;

void insert(Node* root, int x, int y, int r, int c)
{
     Node* rt = root;
     int p = x, q= y;
     while(p<r)
     {
         int id = g[p][q] - 'A';
         if(rt->next[id] == NULL)
         rt->next[id] = new Node(x,y);
         rt = rt->next[id];
         p++;
     }
     
     rt = root;
     p = x, q = y;
     while(q<c)
     {
         int id = g[p][q] - 'A';
         if(rt->next[id] == NULL)
         rt->next[id] = new Node(x,y);
         rt = rt->next[id];
         q++;
     }
  
     rt = root;
     p = x, q = y;
     while(p<r && q<c)
     {
         int id = g[p][q] - 'A';
         if(rt->next[id] == NULL)
         rt->next[id] = new Node(x,y);
         rt = rt->next[id];
         p++;q++;
     }
     return;
}

string tos(int n)
{
       string ret = "";
}
string findit(Node* root, string word)
{
     Node* r = root;
     int cnt = 0;
     int x,y;
     x=y=-1;
     for(int i=0;i<word.length();i++)
     {
          int id = word[i] - 'A';
          if(r->next[id] !=NULL )
          {
                 cnt++;
                 r = r->next[id];

                

                      x = r->x;
                      y = r->y;

                 //cout<<r->x<<" "<<r->y<<endl;
          }
          else break;
     }
     
     if(cnt != word.length()){
            return "";
     }
     return SSTR(x) + " " + SSTR(y);
     
     if(cnt == word.length())   
     {
            cout<<word<<endl;
            cout<<x<<" "<<y<<endl;
            }
}

void killit(Node* r)
{
     for(int i=0;i<26;i++)
             if(r->next[i]!=NULL)
                killit(r->next[i]);
     if(r!=NULL)delete r;
}
struct WordFind{
vector <string> findWords(vector <string> grid, vector <string> wordList)
{
    
    g = grid;
    int r = grid.size();
    int c = grid[0].length();
    vector <string> ret;
    Node* root = new Node(-1,-1);
    
    for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                    insert(root, i, j, r, c);
    for(int i=0;i<wordList.size();i++)
    ret.push_back(findit(root, wordList[i]));
   
    killit(root);
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const vector <string> &Expected, const vector <string> &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: " << print_array(Expected) << endl; cerr << "\tReceived: " << print_array(Received) << endl; } }
	void test_case_0() { string Arr0[] = {"TEST",
 "GOAT",
 "BOAT"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"GOAT", "BOAT", "TEST"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); string Arr2[] = { "1 0",
  "2 0",
  "0 0" }; vector <string> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); verify_case(0, Arg2, findWords(Arg0, Arg1)); }
	void test_case_1() { string Arr0[] = {"SXXX",
 "XQXM",
 "XXLA",
 "XXXR"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"SQL", "RAM"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); string Arr2[] = { "0 0",
  "" }; vector <string> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); verify_case(1, Arg2, findWords(Arg0, Arg1)); }
	void test_case_2() { string Arr0[] = {"EASYTOFINDEAGSRVHOTCJYG",
 "FLVENKDHCESOXXXXFAGJKEO",
 "YHEDYNAIRQGIZECGXQLKDBI",
 "DEIJFKABAQSIHSNDLOMYJIN",
 "CKXINIMMNGRNSNRGIWQLWOG",
 "VOFQDROQGCWDKOUYRAFUCDO",
 "PFLXWTYKOITSURQJGEGSPGG"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"EASYTOFIND", "DIAG", "GOING", "THISISTOOLONGTOFITINTHISPUZZLE"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); string Arr2[] = { "0 0",
  "1 6",
  "0 22",
  "" }; vector <string> Arg2(Arr2, Arr2 + (sizeof(Arr2) / sizeof(Arr2[0]))); verify_case(2, Arg2, findWords(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
WordFind ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
