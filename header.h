#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student
{
	int roll;
	char name[50];
	float mark;
	struct student*next;
}ST;
void add(ST**,int*);
void show(ST*);
void del(ST**);
void modify(ST**);
void sort(ST**,ST*);
void save(ST*);
void ex(ST*);
