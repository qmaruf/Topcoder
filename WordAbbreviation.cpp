#include <bits/stdc++.h>

#define pb push_back
#define ll long long
#define sz(a) (int)a.size()
#define len(a) (int)a.length()

using namespace std;

struct WordAbbreviation{
vector <string> getAbbreviations(vector <string> words)
{
    vector <string> ret;
    int n = sz(words);
    
    for(int i=0;i<n;i++)
    {
    	int k=0;
    	while(true)
    	{
    		k++;
    		string m = words[i].substr(0,k);
	    	bool f = true;
	    	for(int j=0;j<n;j++)
	    	{
	    		if(i==j)continue;
	    		string n = words[j].substr(0,k);
	    		if(m==n)
	    		{
	    			f=false;
	    			break;
	    		}
	    	}	
	    	if(f){
	    		ret.pb(m);
	    		cout<<m<<endl;
	    		break;
	    	}
	    		
    	}
    	
    }
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const vector <string> &Expected, const vector <string> &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: " << print_array(Expected) << endl; cerr << "\tReceived: " << print_array(Received) << endl; } }
	void test_case_0() { string Arr0[] = {"abc","def","ghi"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"a", "d", "g" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(0, Arg1, getAbbreviations(Arg0)); }
	void test_case_1() { string Arr0[] = {"aaab","aaac","aaad"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"aaab", "aaac", "aaad" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(1, Arg1, getAbbreviations(Arg0)); }
	void test_case_2() { string Arr0[] = {"top","coder","contest"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"t", "cod", "con" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(2, Arg1, getAbbreviations(Arg0)); }
	void test_case_3() { string Arr0[] = {
 "bababaaaaa",
 "baaabaababa",
 "bbabaaabbaaabbabaabaabbbbbaabb",
 "aaababababbbbababbbaabaaaaaaaabbabbbaaab",
 "baaaaabaababbbaabbbabbababbbabbbbbbbbab"
}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"bab", "baaab", "bb", "a", "baaaa" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(3, Arg1, getAbbreviations(Arg0)); }
	void test_case_4() { string Arr0[] = {"oneword"}; vector <string> Arg0(Arr0, Arr0 + (sizeof(Arr0) / sizeof(Arr0[0]))); string Arr1[] = {"o" }; vector <string> Arg1(Arr1, Arr1 + (sizeof(Arr1) / sizeof(Arr1[0]))); verify_case(4, Arg1, getAbbreviations(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
WordAbbreviation ___test;
___test.run_test(-1);
int gbase;  
cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
