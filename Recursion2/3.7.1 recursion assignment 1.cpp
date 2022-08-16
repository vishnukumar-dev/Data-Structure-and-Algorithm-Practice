// without using * find the multiplication of two numbers recursively

# include <iostream>
using namespace std;

int rmultiply(int m, int n)
{
	if(n==0) return 0;
	if(m==0) return 0;
	int smalloutput = rmultiply(m, n-1);
	smalloutput = smalloutput+m;
	return smalloutput;
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif


	int m, n;
	cin>>m>>n;
	int out=rmultiply(m,n);
	cout<<out;


	return 0;
}