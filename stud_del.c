#include"header.h"
void del(ST**ptr)
{
	int n,cnt=0;
	char name[20],c;
	int op;
	printf("[1]Delete using Roll Number\n[2]Delete using Name\n");
	printf("Enter your choice:");
	scanf("%d",&op);
	ST*temp=(*ptr),(*prv);
label:
	switch(op){
		case 1:printf("Enter Roll No:");
		       scanf("%d",&n);
		       temp=(*ptr);
		       while(temp!=NULL)
		       {
			       if(n==temp->roll)
			       {
				       printf("Conform if you want to delete y/n:");
				       scanf(" %c",&c);
				       if(('Y'==c)||('y'==c)){
				       if(temp==(*ptr)){
					       (*ptr)=temp->next;}
				       else{
					       prv->next=temp->next;
				       }
				       free(temp);
				       printf("successfully deleted....\n");}
				       return;
			       }
			       else{
				       prv=temp;
				       temp=temp->next;
			       }
		       }
		       printf("No Record found.....\n");
		       break;
		       
		case 2:printf("Enter The Name:");
		       scanf(" %[^\n]",name);
		       while(temp!=NULL)
		       {
			       if(strcmp(name,temp->name)==0)
			       {
				       printf("Roll:%d\tName:%s\tMark:%.2f\n",temp->roll,temp->name,temp->mark);
				       cnt++;
			       }
			       temp=temp->next;
			}
		       if(cnt>0){
			       op=1;
			       goto label;
		       }
		       else{
			       printf("No Record Found.......\n");
			       break;
		       }


	}


}
