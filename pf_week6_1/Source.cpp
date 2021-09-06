//117
//64010846
#include <stdio.h>
int main()
{
	int n, m;
	scanf_s("%d %d", &n, &m);
	printf("||");
	for (int i = 0; i< m-1 ; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("_");
		}
		printf("||");
	}

return 0;
}