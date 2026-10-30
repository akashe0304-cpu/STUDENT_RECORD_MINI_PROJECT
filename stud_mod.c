#include"header.h"
void modify(ST**ptr)
{
	int op,n,cnt=0;
	float Mark;
	char Name[50],a;
	printf("[1]Roll Number\n[2]Name\n[3]mark\nEnter your choice:");
	scanf("%d",&op);
	ST*temp=(*ptr);
label:
	switch(op)
	{
		case 1:printf("Enter the Roll Number:");
		       scanf("%d",&n);
		       temp=(*ptr);
		       while(temp!=NULL)
		       {
			       if(temp->roll==n)
			       {
				       printf("-----------------------------------------\n");
				       printf("%d\t\t%s\t\t%.2f\n",temp->roll,temp->name,temp->mark);
				       printf("-----------------------------------------\n");
				       printf("Confrom if you modify the record:y/n\n");
				       scanf(" %c",&a);
				       if(('Y'==a)||('y'==a))
				       { 
				       printf("Enter the Name:");
				       scanf(" %[^\n]",temp->name);
				       printf("Enter the Mark:");
				       scanf("%f",&temp->mark);
				       printf("succesfully modified....\n");}
				       return;
			       }
			       temp=temp->next;
		       }
		       printf("No Record found....\n");
		       break;
		case 2:printf("Enter the Name:");
		       scanf(" %[^\n]",Name);
		       temp=(*ptr);
		       while(temp!=NULL)
		       {
			       if(strcmp(temp->name,Name)==0)
			       {
				       printf("-----------------------------------------\n");
				       printf("%d\t\t%s\t\t%.2f\n",temp->roll,temp->name,temp->mark);
				       printf("-----------------------------------------\n");
				       cnt++;
			       }
			       temp=temp->next;
		       }
		       if(cnt==0){
		       printf("No Record found.....\n");
		       return;}
		       else if(cnt==1)
		       {
			       temp=(*ptr);
			       while(temp!=NULL)
			       {
				       if(strcmp(temp->name,Name)==0)
				       {
					       printf("Confrom if you modify the record:y/n\n");
				       	       scanf(" %c",&a);
				               if(('Y'==a)||('y'==a))
					       {
					       printf("ENTER NAME:");
					       scanf(" %[^\n]",temp->name);
					       printf("ENTER MARK:");
					       scanf("%f",&temp->mark);
					       printf("SUCCESSFULLY MODIFIED\n");}
					       return;
				       }
				       temp=temp->next;
			       }
		       }
		       else{
			       op=1;
			       goto label;
		       }
		       break;
		case 3:printf("Enter the Mark:");
		       scanf("%f",&Mark);
		       temp=(*ptr);
		       while(temp!=NULL)
		       {
			       if(temp->mark==Mark)
			       {
				       printf("-----------------------------------------\n");
				       printf("%d\t\t%s\t\t%.2f\n",temp->roll,temp->name,temp->mark);
				       printf("-----------------------------------------\n");
				       cnt++;
			       }
			       temp=temp->next;
		       }
		       if(cnt==0){
		       printf("No Record found.....\n");
		       return;}
		       else if(cnt==1)
		       {
			       temp=(*ptr);
			       while(temp!=NULL)
			       {
				       if(temp->mark==Mark)
				       {
					       printf("Confrom if you modify the record:y/n\n");
				       	       scanf(" %c",&a);
				               if(('Y'==a)||('y'==a))
					       {
					       printf("ENTER NAME:");
					       scanf(" %[^\n]",temp->name);
					       printf("ENTER MARK:");
					       scanf("%f",&temp->mark);
					       printf("SUCCESSFULLY MODIFIED\n");}
					       return;
				       }
				       temp=temp->next;
			       }
		       }
		       else{
			       op=1;
			       goto label;
		       }

	}

}
