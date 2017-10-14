#include <bits/stdc++.h>
using namespace std;

struct EllysNewNickname{

bool isv(char ch){
	char A[] = {'a', 'e', 'i', 'o', 'u', 'y'};
	for(int i = 0; i < 6; i++)
		if(ch==A[i])
			return true;
	return false;
}	
int getLength(string nickname)
{
    int ret;
    int a = 0;
    bool flag = true;
    for(int i = 0; i < nickname.length(); i++){
    	if(isv(nickname[i])){
    		if(flag){
    			a++;
    			flag = false;	
    		}    		
    	}
    	else{
    		a++;
    		flag = true;
    	}
    }
    flag = true;
    int b = 0;
    reverse(nickname.begin(), nickname.end());
    for(int i = 0; i < nickname.length(); i++){
    	if(isv(nickname[i])){
    		if(flag){
    			b++;
    			flag = false;	
    		}    		
    	}
    	else{
    		b++;
    		flag = true;
    	}
    }
    // cout<<a<<" "<<b<<endl;
    ret = max(a, b);
    return ret;
}

// BEGIN CUT HERE
	public:
	void run_test(int Case) { if ((Case == -1) || (Case == 0)) test_case_0(); if ((Case == -1) || (Case == 1)) test_case_1(); if ((Case == -1) || (Case == 2)) test_case_2(); if ((Case == -1) || (Case == 3)) test_case_3(); if ((Case == -1) || (Case == 4)) test_case_4(); if ((Case == -1) || (Case == 5)) test_case_5(); }
	private:
	template <typename T> string print_array(const vector<T> &V) { ostringstream os; os << "{ "; for (typename vector<T>::const_iterator iter = V.begin(); iter != V.end(); ++iter) os << '\"' << *iter << "\","; os << " }"; return os.str(); }
	void verify_case(int Case, const int &Expected, const int &Received) { cerr << "Test Case #" << Case << "..."; if (Expected == Received) cerr << "PASSED" << endl; else { cerr << "FAILED" << endl; cerr << "\tExpected: \"" << Expected << '\"' << endl; cerr << "\tReceived: \"" << Received << '\"' << endl; } }
	void test_case_0() { string Arg0 = "tourist"; int Arg1 = 6; verify_case(0, Arg1, getLength(Arg0)); }
	void test_case_1() { string Arg0 = "eagaeoppooaaa"; int Arg1 = 6; verify_case(1, Arg1, getLength(Arg0)); }
	void test_case_2() { string Arg0 = "esprit"; int Arg1 = 6; verify_case(2, Arg1, getLength(Arg0)); }
	void test_case_3() { string Arg0 = "ayayayayayaya"; int Arg1 = 1; verify_case(3, Arg1, getLength(Arg0)); }
	void test_case_4() { string Arg0 = "wuuut"; int Arg1 = 3; verify_case(4, Arg1, getLength(Arg0)); }
	void test_case_5() { string Arg0 = "naaaaaaaanaaaanaananaaaaabaaaaaaaatmaaaaan"; int Arg1 = 16; verify_case(5, Arg1, getLength(Arg0)); }

// END CUT HERE

};

// BEGIN CUT HERE
int main()
{
EllysNewNickname ___test;
___test.run_test(-1);
int gbase;  
//cin>>gbase; // erase this line if you are not using dev-cpp! :)
return 0;
}
// END CUT HERE
