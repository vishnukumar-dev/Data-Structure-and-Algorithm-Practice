//sum of digit of a number 


# include <bits/stdc++.h>
using namespace std;

int digiSum(int n)
{
  if(n==0) return 0;
  if(n<=9) return n;
  else return (n%10)+digiSum(n/10);

}

int main()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
  #endif

  int n;
  cin>>n;
  int sum;
  sum=digiSum(n);
  cout<<sum;
  
  


  return 0;
}