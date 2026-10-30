#include"header.h"
void sort(ST**ptr,ST*p)
{
	int op,m,r,cnt=0;
	char Name[50],a;
	ST*temp1=(*ptr);
	ST*temp,*prv;
	printf("[1]Sort by Name\n[2]Sort by Mark\n");
	printf("Enter your choice:");
	scanf("%d",&op);
	while(temp1!=NULL)
	{
		cnt++;
		temp1=temp1->next;
	}
	switch(op)
	{
		case 1:while(cnt!=0)
		       {
			       temp=(*ptr);
			       prv=(*ptr)->next;
			       while(prv!=NULL)
			       {
				       if(strcmp(temp->name,prv->name)>0)
				       {
					       m=temp->mark;
				       	       temp->mark=prv->mark;
				               prv->mark=m;

				               r=temp->roll;
				               temp->roll=prv->roll;
				               prv->roll=r;

				               strcpy(Name,temp->name);
				               strcpy(temp->name,prv->name);
				               strcpy(prv->name,Name);
				       }
				       temp=temp->next;
				       prv=prv->next;
			       }
			       cnt--;
		       }
		       printf("sort done\n");
		       show(p);
		       printf("if you want to save in file :y/n\n");
		       scanf(" %c",&a);
		       if(('y'==a)||('Y'==a))
			       save(p);
		       return;
		case 2:while(cnt!=0)
		       {
			       temp=(*ptr);
			       prv=(*ptr)->next;
			       while(prv!=NULL)
			       {
				       if((temp->mark)>(prv->mark))
				       {
					       m=temp->mark;
				       	       temp->mark=prv->mark;
				               prv->mark=m;

				               r=temp->roll;
				               temp->roll=prv->roll;
				               prv->roll=r;

				               strcpy(Name,temp->name);
				               strcpy(temp->name,prv->name);
				               strcpy(prv->name,Name);
				       }
				       temp=temp->next;
				       prv=prv->next;
			       }
			       cnt--;
		       }
		       printf("sort done\n");
		       show(p);
		       printf("if you want to save in file :y/n\n");
		       scanf(" %c",&a);
		       if(('y'==a)||('Y'==a))
			       save(p);
		       return;
	}
}
