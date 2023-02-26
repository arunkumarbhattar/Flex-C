#include <stdlib.h>

int main()
{
	int *simple = (int*)malloc(10*sizeof(int));
	for (int i = 0;i < 10; i++)
	{
		simple[i] = i;
	}
		
	free(simple+1);
	return 0;
}

