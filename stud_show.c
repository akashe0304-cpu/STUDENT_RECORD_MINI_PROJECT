#include"header.h"
void show(ST*ptr)
{
	if(ptr==NULL)
	{
		fprintf(stderr,"No Records To Display....\n");
		return;
	}
	printf("-------------------------------------------\n");
	printf("%-10s %-20s %-5s\n","Roll","Name","Mark");
	printf("-------------------------------------------\n");
	while(ptr!=NULL)
	{
		printf("%-10d %-20s %-5.2f\n",ptr->roll,ptr->name,ptr->mark);
		ptr=ptr->next;
	}
	printf("-------------------------------------------\n");
}
