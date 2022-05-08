long long int product(int n)
{
	long long int mod=1000000007;
	if(n==1)
		return 1;
	long long int ans=n*product(n-1)%mod;
	return ans;
}
long long int sumOrProduct(long long int n, long long int q)
{
	long long int mod=1000000007;
	long long a=(n*(n+1)/2)%mod;
	return q==1?a:product(n);
}
