
#include <stdio.h>

#define N 10

int main()
{
	int i;
	int a[N];
	int cnt = 0;
	int retry;
	puts("������ �Է��ϼ���.");
	do {
		printf("%d����° ���� : ", cnt + 1);
		scanf_s("%d", &a[cnt++ % N]);
		printf("����ұ��?(Yes . . .1/ NO . . . 0) : ");
		scanf_s("%d", &retry);
	} while (retry == 1);
	i = cnt - N;
	if (i < 0) i = 0;
	for (; i < cnt; i++)
		printf("%2��° ���� = %d\n", i + 1, a[i % N]);

	return 0;
}