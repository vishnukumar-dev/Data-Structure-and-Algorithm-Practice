// Check wether a given string is a "Palindrome" or not RECURSIVELY

# include <bits/stdc++.h>
using namespace std;

bool palindrome(string s)
{
	if(s.size()==0) return true;
	if(s.size()==1) return true;
	if(s[0]==s[s.size()-1]) 
		{
			s.pop_back();
			s.erase(0,1);
			return palindrome(s);
		}
	else return false;

}



int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	string s;
	cin>>s;
	bool out;
	out=palindrome(s);
	cout<<out;


	return 0;
}