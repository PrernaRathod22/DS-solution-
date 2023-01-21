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
    int ch;
    while(1)
    {
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            push();
        break;
        case 2:
            pop();
        break;
        case 3:
            peek();
        break;
        case 4:
            display();
        break;
        case 5:
            exit(0);
        default:
            printf("WRONG CHOICE!\n");
    }
    }
}
void push()
{
    int x;
    printf("\nENTER THE ELEMENT: ");
    scanf("%d",&x);
    if(top==MAX-1)
    {
        printf("\nOVERFLOW!\n");

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
        printf("\nUNDERFLOW!\n");
    }
    else
    {
        a=stack[top];
        top--;
        printf("\nDELETED ELEMENT %d\n",a);
    }
}

void peek()
{
    if(top==-1)
    {
        printf("\nEMPTY!!\n");
    }
    else
    {
        printf("\nTOP = %d\n",stack[top]);
    }
}

void display()
{
    int i;
    if(top==-1)
    {
        printf("\nEMPTY!!\n");
    }
    else
    {
        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }

}





