#include<vector>

using namespace std;

class Solution {
public:
	vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
		traverse(image, sr, sc, image[sr][sc], newColor);
		return image;
	}
	void traverse(vector<vector<int>>& image, int sr, int sc, int oldColor, int newColor) {

		if (sr<0 || sr >image.size() - 1 || sc <0 || sc > image[0].size() - 1)
			return;
		if (image[sr][sc] != oldColor)
			return;

		image[sr][sc] = newColor;
		traverse(image, sr + 1, sc, oldColor, newColor);
		traverse(image, sr - 1, sc, oldColor, newColor);
		traverse(image, sr, sc + 1, oldColor, newColor);
		traverse(image, sr, sc - 1, oldColor, newColor);

	}
};