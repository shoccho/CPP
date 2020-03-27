#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	char value[20];
	struct node *next;
};

typedef struct marksheet
{
	int physics;
	int chemistry;
	int maths;
	int biology;
	int IP;
}mark;

typedef struct stud
{
	char name[20];
	int age;
	int rollno;
	char address[20];
	char city[20];
	int zipcode;
	mark marks;
}students;

void create(struct node **,int);

students stu[30];

void display(int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("name:%s",stu[i].name);
		printf("age:%d",stu[i].age);
	}
}
int main()
{
	
	struct node *p;
	p=NULL;
	int ch,n;
	printf("\n\n\t****Welcome to Student database **********\n");
	printf("1.Create an account\n2.Dsiplay the student accounts\n3.exit\n");
	printf("\nPlease enter your choice:\n");
	scanf("%d",&ch);
	{
	
	switch ( ch){
		case 1:
		printf("Enter the no of student Entry you wanna create:");
		fflush(stdin);
		scanf("%d",&n);
		create(&p,n);
	break;
	case 2:
		display(n);
		break;
	case 3:
		exit(0);
		break;
		}
	}
	return(0);
}

void create(struct node **p,int n)
{
	int i;
	struct node *age;
	struct node *name;
	for(i=0;i<n;i++)
	{
		printf("\nEnter your name:");
		scanf("%s",stu[i].name);
		name=(struct node*)malloc(sizeof(struct node));
		//name->data=stu[i].name;
		name->next=NULL;
		printf("\nEnter your age:");
		scanf("%d",&stu[i].age);
		age=(struct node*)malloc(sizeof(struct node));
		age->data=stu[i].age;
		name->next=age;
		age->next=NULL;
	}
}

