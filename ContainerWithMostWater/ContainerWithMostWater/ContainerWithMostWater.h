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
			while (height[i] <= h && i <j) i++; ///�����ǰ�����߲����ڵ�ǰ��С�߶�,������С�ᵼ��
												///�����С,�ʺ��������м��ƶ�;�����߸�����С�߶ȣ�
												///���ƶ�������
			while (height[j] <= h && i <j) j--;
		}
		return max_water;
	}
};