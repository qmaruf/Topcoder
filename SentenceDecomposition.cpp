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


struct SentenceDecomposition{

vector<string>words;
#define INF 1<<20

int hdist(string a, string b)
{
    int ret = 0;
    for(int i = 0; i < a.length(); i++)
        if(a[i] != b[i])
            ret++;
    return ret;
}

int match(string a, string b)
{
    int s = 0;
    for(int i = 0; i < a.length(); i++)
        if(a[i] != b[i])
            s++;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if(a == b)return s;
    else return -1;
}

map<string, int>mp;
int solve(string line)
{
    if(mp.find(line) != mp.end())return mp[line];
    int ret = INF;
    if(line.length() == 0)return 0;
    for(int i = 0; i < words.size(); i++)
    {
        string temp = line;
        string word = words[i];
        if(line.length() < word.length())continue;
        string subline = line.substr(0, word.length());
        int score = match(word, subline);
        if(score == -1)continue;
        string rline = temp.erase(0, subline.length());
        ret = min(ret, score + solve(rline));
    }
    mp[line] = ret;
    return ret;
}
int decompose(string sentence, vector <string> validWords)
{
    words = validWords;
    int ret = solve(sentence);
    if(ret == INF)ret = -1;
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "neotowheret"; string Arr1[] = {"one", "two", "three", "there"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 8; verify_case(0, Arg2, decompose(Arg0, Arg1)); }
	void test_case_1() { string Arg0 = "abba"; string Arr1[] = {"ab", "ac", "ad"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 2; verify_case(1, Arg2, decompose(Arg0, Arg1)); }
	void test_case_2() { string Arg0 = "thisismeaningless"; string Arr1[] = {"this", "is", "meaningful"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = -1; verify_case(2, Arg2, decompose(Arg0, Arg1)); }
	void test_case_3() { string Arg0 = "ommwreehisymkiml"; string Arr1[] = {"we", "were", "here", "my", "is", "mom", "here", "si", "milk", "where", "si"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 10; verify_case(3, Arg2, decompose(Arg0, Arg1)); }
	void test_case_4() { string Arg0 = "ogodtsneeencs"; string Arr1[] = {"go", "good", "do", "sentences", "tense", "scen"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = 8; verify_case(4, Arg2, decompose(Arg0, Arg1)); }
	void test_case_5() { string Arg0 = "sepawaterords"; string Arr1[] = {"separate","words"}; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); int Arg2 = -1; verify_case(5, Arg2, decompose(Arg0, Arg1)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
SentenceDecomposition ___test;
___test.run_test(-1);
int gbase;
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
