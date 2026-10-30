#include"header.h"
void save(ST*ptr)
{
	if(ptr==NULL){
		fprintf(stderr,"No Record....\n");
		return;
	}
	FILE*fs=fopen("student","w");
	fprintf(fs,"--------------------------------------------------\n");
	fprintf(fs,"%-10s %-20s %-5s","Roll","Name","Mark\n");
	fprintf(fs,"--------------------------------------------------\n");
	while(ptr!=NULL)
	{
		fprintf(fs,"%-10d %-20s %-5.2f\n",ptr->roll,ptr->name,ptr->mark);
		ptr=ptr->next;
	}
	fclose(fs);
	printf("successfully saved...\n");
}
