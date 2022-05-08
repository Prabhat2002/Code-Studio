#include <bits/stdc++.h> 
vector< vector<int> > pairSum(vector<int> &arr, int s)
{
    int n = arr.size();
    vector< vector<int> > ans;
    for(int i = 0; i < n; i++) 
	{
        for(int j = i + 1; j < n; j++) 
		{
            if(arr[i] + arr[j] == s) 
			    ans.push_back({arr[i],arr[j]});
        }
	}
    vector<vector<int>>res(ans.size(),vector<int>(2,0));
    for(int i = 0; i < ans.size(); i++) 
	{
        int a = ans[i][0], b = ans[i][1];
        res[i][0] = min(a, b);
        res[i][1] = max(a, b);
    }
    sort(res.begin(),res.end());  
    return res;
}
