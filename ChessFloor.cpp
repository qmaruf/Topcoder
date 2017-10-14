#include <bits/stdc++.h>
using namespace std;

#define pci pair<char, int>
vector<pci >vec;


bool comp(pci a, pci b)
{
	return a.second > b.second;
}


struct ChessFloor{


int minimumChanges(vector <string> F)
{

    int ret;
    int freq[500];
    memset(freq, 0, sizeof(freq));
    string str = "";
    for(int i = 0; i < F.size(); i++)
    	for(int j = 0; j < F[i].length(); j++){
    		str += F[i][j];
    		freq[F[i][j]]++;
    	}
    for(int i = 'a'; i <= 'z'; i++){    	
    	vec.push_back(make_pair(i, freq[i]));
    }

    sort(vec.begin(), vec.end(), comp);
    for(int i = 0; i < 27; i++)
    	cout<<vec[i].first<<" "<<vec[i].second<<endl;

    if(vec[1].second == 0)return str.length()/2;

    char f = vec[0].first + (int)'a';
    char s = vec[1].first + (int)'a';

    int a = 0,  b = 0;
    for(int i = 0; i < str.length(); i++)
    {
    	if(i%2 == 0 && str[i] != f)a++;
    	if(i%2 == 1 && str[i] != s)a++;
    }

    for(int i = 0; i < str.length(); i++)
    {
    	if(i%2 == 0 && str[i] != s)b++;
    	if(i%2 == 1 && str[i] != f)b++;
    }

    ret = min(a, b);

	    	
    		
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arr0[] = {"aba",
 "bbb",
 "aba"}
; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 1; verify_case(0, Arg1, minimumChanges(Arg0)); }
	void test_case_1() { string Arr0[] = {"wbwbwbwb",
 "bwbwbwbw",
 "wbwbwbwb",
 "bwbwbwbw",
 "wbwbwbwb",
 "bwbwbwbw",
 "wbwbwbwb",
 "bwbwbwbw"}
 ; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 0; verify_case(1, Arg1, minimumChanges(Arg0)); }
	void test_case_2() { string Arr0[] = {"zz",
 "zz"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 2; verify_case(2, Arg1, minimumChanges(Arg0)); }
	void test_case_3() { string Arr0[] = {"helloand",
 "welcomet",
 "osingler",
 "oundmatc",
 "hsixhund",
 "redandsi",
 "xtythree",
 "goodluck"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 56; verify_case(3, Arg1, minimumChanges(Arg0)); }
	void test_case_4() { string Arr0[] = {"jecjxsengslsmeijrmcx",
 "tcfyhumjcvgkafhhffed",
 "icmgxrlalmhnwwdhqerc",
 "xzrhzbgjgabanfxgabed",
 "fpcooilmwqixfagfojjq",
 "xzrzztidmchxrvrsszii",
 "swnwnrchxujxsknuqdkg",
 "rnvzvcxrukeidojlakcy",
 "kbagitjdrxawtnykrivw",
 "towgkjctgelhpomvywyb",
 "ucgqrhqntqvncargnhhv",
 "mhvwsgvfqgfxktzobetn",
 "fabxcmzbbyblxxmjcaib",
 "wpiwnrdqdixharhjeqwt",
 "xfgulejzvfgvkkuyngdn",
 "kedsalkounuaudmyqggb",
 "gvleogefcsxfkyiraabn",
 "tssjsmhzozbcsqqbebqw",
 "ksbfjoirwlmnoyyqpbvm",
 "phzsdodppzfjjmzocnge"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); int Arg1 = 376; verify_case(4, Arg1, minimumChanges(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
ChessFloor ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
