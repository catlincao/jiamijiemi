// ���ܽ���.cpp : �������̨Ӧ�ó������ڵ㡣
//2017��8��4��09:55:26

#include "stdafx.h"
#include "iostream"
#include "string.h"
using namespace std;
#define SR "���������ģ�"
#define SC "��������ģ�"
#define JM "���ܺ�����ģ�"

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

