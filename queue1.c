#include<stdio.h>
#include<string.h>
#include<math.h>
void insert(void);
void delete(void);
void display(void);
int queue[100],front=-1,rear=-1,maxsize;
int main()
{
     int choice;
     printf("enter the maxsize of the queue\n");
     scanf("%d",&maxsize);
     printf("************enter the choice for the queue operation**************\n");
     printf("1.insert\n 2.delete\n3.display");
     while(choice!=4)
     {
        printf("enter the choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                insert();
                break;
            }
            case 2:
            {
                delete();
                break;
            }
            case 3:
            {
                display();
                break;

            }
            case 4:
            {
                exit(0);
                break;
            }
            default:
            {
                printf("invalid \n");
            }
        }

     }
     return 0;

}
void insert()
{
    int items;
    printf("enter the items\n");
    scanf("%d",&items);
    if(rear==maxsize-1)
    {
        printf("it is overflow condition\n");
        return;
    }
    if(rear==-1 && front==-1)
    {
        rear =0;
        front=0;
    }
    else{
        rear= rear+1;
    }
    queue[rear]=items;
    printf("items is inserted\n");
}
void delete()
{
    int items;
    if(front>rear || front==-1)
    {
        printf("underflow!\n");
        return;
    }
    else{
        items= queue[front];
        if(front==rear)
        {
            front=1;
            rear=-1;
        }
        else{
            front=front+1;
        }
        printf("items is deleted\n");
    }
}
void display()
{
    int i;
    if(rear==-1)
    {
        printf("\nqueue is empty\n");
    }
    else{

     for(int i=front;i<=rear;i++)
     {
        printf("%d\n",queue[i]);
     }
    }
}