#include <bits/stdc++.h>
using namespace std;

struct AlphabetOrderDiv2{
bool visited[26];
vector<int>vec[26];   
bool cycle(int u)
{
	if(visited[u])return true;
	visited[u]=true;
	for(int i = 0; i < vec[u].size(); i++)
	{
		int v = vec[u][i];
		if(cycle(v))
			return true;
	}
	return false;
}

string clean(string word)
{	
	string tmp = "";
	char prev = '.';
	for(int i = 0; i < word.length(); i++)
	{
		if(word[i]!=prev)
			tmp += word[i];
		prev = word[i];
	}
	return tmp;
}
string isOrdered(vector <string> words)
{       
    for(int i = 0; i < 25; i++)
    	vec[i].clear(); 

    bool A[26][26];
    memset(A, 0, sizeof(A));

    for(int i = 0; i < words.size(); i++)
    {
    	cout<<words[i]<<endl;
    	words[i]=clean(words[i]);
    	cout<<words[i]<<endl;
    	for(int j = 1; j < words[i].length(); j++)
    	{
    		
    		int a = words[i][j-1]-'a';
    		int b = words[i][j]-'a';       		
    		if(!A[a][b])
    		{
    			vec[a].push_back(b);    			
    			A[a][b]=1;
    		}
    	}
    }
    for(int i = 0; i < 26; i++)
    {
    	memset(visited, 0, sizeof(visited));
    	if(cycle(i))
    		return "Impossible";
    }
    return "Possible";
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); if ((Case == -1) || (Case == 6)) test_case_6(); if ((Case == -1) || (Case == 7)) test_case_7(); if ((Case == -1) || (Case == 8)) test_case_8(); if ((Case == -1) || (Case == 9)) test_case_9(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const string &Expected, const string &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"single","round","match"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "Possible"; verify_case(0, Arg1, isOrdered(Arg0)); }
	void test_case_1() { string Arr0[] = {"topcoder","topcoder"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "Impossible"; verify_case(1, Arg1, isOrdered(Arg0)); }
	void test_case_2() { string Arr0[] = {"algorithm", "contest"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "Impossible"; verify_case(2, Arg1, isOrdered(Arg0)); }
	void test_case_3() { string Arr0[] = {"pink","floyd"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "Possible"; verify_case(3, Arg1, isOrdered(Arg0)); }
	void test_case_4() { string Arr0[] = {"gimnasia","y","esgrima","la","plata"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "Impossible"; verify_case(4, Arg1, isOrdered(Arg0)); }
	void test_case_5() { string Arr0[] = {"hello","hello"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "Possible"; verify_case(5, Arg1, isOrdered(Arg0)); }
	void test_case_6() { string Arr0[] = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "Possible"; verify_case(6, Arg1, isOrdered(Arg0)); }
	void test_case_7() { string Arr0[] = {"abc","bca"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "Impossible"; verify_case(7, Arg1, isOrdered(Arg0)); }
	void test_case_8() { string Arr0[] = {"aaaaa","eeeee","iiiii","ooooo","uuuuu"} ; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "Possible"; verify_case(8, Arg1, isOrdered(Arg0)); }
	void test_case_9() { string Arr0[] = {"ab","bc","ca"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arg1 = "Impossible"; verify_case(9, Arg1, isOrdered(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
AlphabetOrderDiv2 ___test;
___test.run_test(-1);
int gbase;  
//cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
