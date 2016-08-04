// ContainerWithMostWater.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"ContainerWithMostWater.h"

int main()
{
	int n;
	cin >> n;
	vector<int> H(n);
	for (int i = 0; i < n; cin >> H[i], i++) {}
	ContainerWithMostWater C;
	cout << C.maxArea(H) << '\n';
	exit(0);
    return 0;
}

