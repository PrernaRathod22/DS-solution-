#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
void push();
void pop();
void peek();
void display();

void main()
{
    int choice;
    while(1)
    {
    printf("\nENTER THE NUMBER BETWEEN 1 TO 5\n1 FOR PUSH\n2 FOR POP\n3 FOR PEEK\n4 FOR DISPLAY\n5 FOR EXIT: ");
    scanf("%d",&choice);
    switch(choice)
    {
case 1: push();
break;
case 2: pop();
break;
case 3: peek();
break;
case 4: display();
break;
case 5: exit(0);
default: printf("\nWrong Choice!!");
}

    }
}

void push()
{
    int x;
    printf("\nENTER THE ELMENT TO ADD IN STACK:");
    scanf("%d",&x);
    if(top==MAX-1)
    {
        printf("\nSTACK IS OVERFLOW!!\n");
    }
    else
    {
        top++;
        stack[top]=x;
    }
}

void pop()
{
    int a;
    if(top==-1)
    {
        printf("\nSTACK IS UNDERFLOW!");
    }
    else
    {
        a=stack[top];
        top--;
        printf("\nDELETED ELEMENT IS %d\n",a);
    }
}

void peek()
{
    if(top==-1)
    {
        printf("\nSTACK IS EMPTY!");
    }
    else
    {
        printf("\nTOP OF STACK IS EQUAL TO %d\n",stack[top]);
    }
}

void display()
{
int i;
if(top==-1)
{
printf("\nStack is empty!!\n");
}
else
{
printf("\nStack is...\n");
for(i=top;i>=0;--i)
printf("%d\n",stack[i]);
}
}

