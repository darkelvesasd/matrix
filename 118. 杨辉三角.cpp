class Solution {
public:
vector<vector<int>> generate(int numRows) {
	vector<vector<int>>r;
	vector<vector<int>>ret(numRows+1,vector<int>(1+numRows));
	for (int i = 1; i <= numRows;i++)
	{
		vector<int>v(i);
		for (int j = 1; j <= i; j++)
		{
			if (i == 1)
			{
				v[0] = 1;
				ret[1][1] = 1;
			}
			else
			{
				ret[i][j] = ret[i - 1][j-1] + ret[i-1][j];
				v[j - 1] = ret[i][j];
			}
		}
		r.push_back(v);
	}
	return r;
}
};
