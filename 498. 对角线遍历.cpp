vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
	int m = mat.size();
	int n = mat[0].size();
	vector<int>ret;
	int val = m + n-1;
	for (int i = 0; i < val; i++)
	{
		if (i%2==0)
		{
			int x = min(m-1, i);
			int y = i - x;
			int j = y;
			while (i>=j&&j <n)
			{
				ret.push_back(mat[i - j][j]);
				j++;
			}
		}
		else
		{
			int y = min(n-1, i);
			int x = i - y;
			int j = x;
			while (i>=j&&j<m)
			{
				ret.push_back(mat[j][i-j]);
				j++;
			}
		}
	}
	return ret;
}
