class Solution {
public:
vector<int> getRow(int rowIndex) {
	vector<vector<int>>ret(rowIndex + 2, vector<int>(rowIndex + 2));
	for (int i = 1; i <= rowIndex+1; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i == 1)
			{
				ret[1][1] = 1;
			}
			else
			{
				ret[i][j] = ret[i - 1][j] + ret[i - 1][j - 1];
			}
		}
	}
	vector<int>v(ret[rowIndex+1].begin() + 1, ret[rowIndex+1].end());
	return v;
}
};
