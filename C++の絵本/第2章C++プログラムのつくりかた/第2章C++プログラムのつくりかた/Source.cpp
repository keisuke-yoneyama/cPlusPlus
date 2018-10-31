#include<stdio.h>

int main() {
	for (int i = 1; i <= 5; i++)
	{
		printf("%dの二乗は%dです。\n", i,i*i);//変数iの有効範囲
	}

	printf("さらに6以降も計算します。\n");

	for (int j = 6; j <= 10; j++) {
		printf("%dの二乗は%dです。\n",j,j*j);//変数jの有効範囲
	}

