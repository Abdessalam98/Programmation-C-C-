#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int i=0;
	srand(time(NULL));
	for (i = 0; i < 5; i++)
	{
		printf("%d\n",1+rand()%30 );
	}
}
