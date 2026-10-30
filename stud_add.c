#include"header.h"
void add(ST**ptr,int*p)
{
	char op;
	do{
	ST*new=(ST*)malloc(sizeof(ST));
	if(new==NULL)
	{
		printf("No Node created....\n");
		return;
	}
	printf("-------------------------------------\n");
	new->roll=(*p);
	printf("Roll No:%d\n",(*p)++);
	printf("Name:");
	scanf(" %[^\n]",new->name);
	printf("Mark:");
	scanf("%f",&new->mark);
	printf("-------------------------------------\n");
	new->next=NULL;

	if((*ptr)==NULL)
		(*ptr)=new;
	else
	{
		ST*last=(*ptr);
		while(last->next!=NULL)
			last=last->next;
		last->next=new;
	}
	printf("if you want to add record...y/n\n");
	scanf(" %c",&op);
	}while(('Y'==op)||('y'==op));

}
