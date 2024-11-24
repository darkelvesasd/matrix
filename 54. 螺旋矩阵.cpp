class Solution {
public:
  vector<int> spiralOrder(vector<vector<int>>& matrix) {
	vector<int>ret;
	int m = matrix.size();
	int n = matrix[0].size();
	int left = 0;
	int right = matrix[0].size()-1;
	int top = 0;
	int bottom = matrix.size()-1;
	while (left <= right && top <= bottom)
	{
		for (int i = left; i <= right; i++)
		{
			ret.emplace_back(matrix[top][i]);
		}
		top++;
		for (int i = top; i <= bottom; i++)
		{
			ret.emplace_back(matrix[i][right]);
		}
		right--;
		if (top<=bottom)
		{
			for (int i = right; i >= left; i--)
			{
				ret.emplace_back(matrix[bottom][i]);
			}
			bottom--;
		}
		if (left <= right)
		{
			for (int i = bottom; i >= top; i--)
			{
				ret.emplace_back(matrix[i][left]);
			}
			left++;
		}
	}
	return ret;
}
};
