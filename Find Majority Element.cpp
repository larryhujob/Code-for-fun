bool findMajority(vector<int>& vec, int& majority)
{
	if(vec.empty())
		return false;
	int n = vec.size();
	int tem = vec[0];
	int cnt = 1;
	for(int i = 1; i < n; i++)
	{
		if(vec[i] == tem)
			cnt++;
		else cnt--;
		if(cnt == 0)
		{
			tem = vec[i];
			cnt = 1;
		}
	}
	int total = 0;
	for(int i = 0; i < n; i++)
		if(vec[i] == tem)
			total++;
	if(total > n/2)
	{
		majority = tem;
		return true;
	}
	return false;


}