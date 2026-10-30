#include"header.h"
void ex(ST*p)
{
	int op;
	printf("[1]Save and Exit\n[2]Exit Without Saving\n");
	printf("Enter your choice:");
	scanf("%d",&op);
	switch(op)
	{
		case 1:save(p);return;
		case 2:return;
	}
}
