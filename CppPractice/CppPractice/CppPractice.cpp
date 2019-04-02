// CppPractice.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


#include <iostream>
#include <math.h>
#include <algorithm>


using namespace std;



int main()
{
	for (int i = 2; i <= 100; i++) {
		bool right = true;
		double limit = sqrt(i);
	
		for (int j = 2; j <= limit || abs(limit - j) <0.000001; j++) {
			if (i%j == 0) {
				right = false;
				break;
			}
		}
		if (right) {
			cout << i << ",";
		}
	}
}

