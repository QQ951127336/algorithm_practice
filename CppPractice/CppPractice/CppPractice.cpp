// CppPractice.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//


#include <iostream>
#include <string>
#include <algorithm>
#include <hash_map>
#include "jewels_and_stones.h"

extern "C" {
#include"leftsum.h"
}
using namespace std;



int main()
{

	int x[] = { 1,2,3,4 };
	int result = left_sum(x, x + 3);
	printf("%d", result);
    std::cout << "Hello World!\n"; 
}

