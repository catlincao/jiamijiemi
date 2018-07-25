// 加密解密.cpp : 定义控制台应用程序的入口点。
//2017年8月4日09:55:26

#include "stdafx.h"
#include "iostream"
#include "string.h"
using namespace std;
#define SR "请输入明文："
#define SC "输出的密文："
#define JM "解密后的明文："

int main()
{
	char clearText[128] = {'\0'};
	char cipherText[128] = {'\0'};
	char Text[128] = {'\0'};
	int count;

	cout << SR << endl;
	cin >> clearText;

	count = strlen(clearText);

	for (int i = 0; i < count; i++)
	{
		cipherText[i] = clearText[i] + 2 * i - 3;
	}

	cout << SC << endl << cipherText << endl;

	for (int i = 0; i < count; i++)
	{
		Text[i] = cipherText[i] - 2 * i + 3;
	}
	cout << JM << endl << Text << endl;
    return 0;
}

