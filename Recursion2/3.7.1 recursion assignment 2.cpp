// count the numbers of zeros in a number

# include <iostream>
using namespace std;

int zeroCount(int num)
{
	if(num==0) return 1;
	if(num % 10 == 0)
        return 1 + zeroCount(num / 10);
    else if (num / 10 == 0)
        return 0;
    else
        return zeroCount(num / 10);
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif


	int n;
	cin>>n;
	int out=zeroCount(n);
	cout<<out;


	return 0;
}