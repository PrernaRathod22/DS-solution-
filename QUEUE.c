#include<stdio.h>
#define SIZE 5
int front=-1,rear=-1;
int queue[SIZE];
void enqueue();
void dequeue();
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
            enqueue();
            break;
        case 2:
            dequeue();
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
            printf("INVALID CHOICE!");
        }
    }
}

void enqueue()
{
    int n;
    if(rear==SIZE-1)
    {
        printf("OVERFLOW");
    }
    else
    {
        if(front==-1)
        front=0;
        printf("INSERT THE ELEMENT: ");
        scanf("%d",&n);
        rear++;
        queue[rear]=n;

    }
}

void dequeue()
{
    if(front==-1 || front>rear)
    {
        printf("UNDERFLOW!");
    }
    else
    {
        printf("DELETED ELEMENT %d",queue[front]);
        front++;
    }
}

void peek()
{
    if(front==-1 || front>rear)
    {
        printf("UNDERFLOW!");
    }
    else
    {
        printf("Front = %d",queue[front]);
    }
}

void display()
{
     if(front==-1 || front>rear)
    {
        printf("EMPTY!");
    }
    else
    {int i;
    printf("QUEUE is...");
    for( i=front;i<=rear;i++)
        printf("%d   ",queue[i]);
    }
}



