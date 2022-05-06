#include<bits/stdc++.h>
using namespace std;
int main() 
{
	string str;
 	cin>>str;
    int n=str.length();
    unordered_map<char,int>map;
    unordered_set<int>st(str.begin(),str.end());
    int k=st.size();
    int j=0,ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        map[str[i]]++;
        if(map.size()==k)
        {
           while(map[str[j]]>1)
           {
               map[str[j]]--;
               j++;
            }
            ans=min(ans,i-j+1);
          }
		  if(ans==k)  break;
       }
       cout<<str.substr(j,ans);    
}
