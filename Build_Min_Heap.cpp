void heapify(vector<int>&arr,int i,int n)
{
	int smallest=i;
	int left=2*i+1;
	int right=2*(i+1);
	if(left<n && arr[smallest]>arr[left])
		smallest=left;
	if(right<n && arr[smallest]>arr[right])
		smallest=right;
	if(smallest!=i)
	{
		swap(arr[smallest],arr[i]);
		heapify(arr,smallest,n);
	}
}
vector<int> buildMinHeap(vector<int> &arr)
{
	int n=arr.size();
	for(int i=n/2-1;i>=0;i--)
		heapify(arr,i,n);
	return arr;
}
