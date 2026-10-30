#include"header.h"
int main()
{
	int op;
	char ch;
	int cnt=101;
	ST*hptr=NULL;
label:
	printf("**********STUDENT RECORD MENU*************\n");
	printf("\t[1]:Add New Record\n\t[2]:Delete a Record\n\t[3]:Show the List\n\t[4]:Modify a Record\n\t[5]:Save\n\t[6]:Sort the list\n\t[7]:Exit\n");
	printf("******************************************\n");
	printf("Enter Your Choice:");
	scanf("%d",&op);
	switch(op)
	{
		case 1:add(&hptr,&cnt);goto label;
		case 2:del(&hptr);goto exit;
		case 3:show(hptr);goto exit;
		case 4:modify(&hptr);goto exit;
		case 5:save(hptr);goto exit;
		case 6:sort(&hptr,hptr);goto exit;
		case 7:ex(hptr);return 0;
	} 
exit:
	printf("BACK:Y/y\n");
exit1:
	scanf(" %c",&ch);
	if(('y'==ch)||('Y'==ch))
		goto label;
	else{
		printf("press-Y ");
		goto exit1;}
}
