#pragma once
#include<vector>
#include<algorithm>
using namespace std;
class ContainerWithMostWater {
public:
	int maxArea(vector<int>& height) {
		int max_water = 0, h;
		for (int i = 0, j = height.size() - 1; i <j;) {
			h = min(height[i], height[j]);
			max_water = max(max_water, (j - i)*h);
			while (height[i] <= h && i <j) i++; ///如果当前的柱高不高于当前最小高度,长度缩小会导致
												///面积减小,故横坐标向中间移动;若柱高高于最小高度，
												///不移动横坐标
			while (height[j] <= h && i <j) j--;
		}
		return max_water;
	}
};