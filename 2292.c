#include<stdio.h>
#include<stdlib.h>

int main()
{
	//6 12 18 24 +=
	int find;
	scanf("%d", &find);
	int move = 1;
	int max = 1;
	int add = 6;
	
	while (1)
	{
		if (find <= max)
			break;
		max += add;
		add += 6;
		++move;
	}
	
	printf("%d\n", move);
	return 0;
}
