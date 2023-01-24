/*Write a menu driven program to implement Deques (both Input-
    restricted and Output-restricted) operations such as Enqueue, Dequeue,
    Peek, Display of elements, IsEmpty, IsFull using static array.*/



int front_dequeue2_538=0;
int rear_dequeue2_538=0;
int *arr_dequeue2_538;

void enqueue_dequeue2_538()
{
    if((rear_dequeue2_538+1)%5==front_dequeue2_538)
        {
            if(rear_dequeue2_538==0)
                rear_dequeue2_538=5;
            else
                rear_dequeue2_538--;
        }
    else
    {
        printf("Enter 1 to enqueue from back\n");
        printf("Enter 2 to enqueue from front\n");
        printf("Enter your choice: ");
        int n_dequeue2_538;
        scanf("%d",&n_dequeue2_538);
        if(n_dequeue2_538==1)
        {
            printf("Enter the new element: ");
            scanf("%d",&arr_dequeue2_538[rear_dequeue2_538]);
            front_dequeue2_538=0;
            rear_dequeue2_538=(rear_dequeue2_538+1)%5;
        }
        else
        {
            for(int i_dequeue2_538=rear_dequeue2_538;i_dequeue2_538>=0;i_dequeue2_538--)
            {
                arr_dequeue2_538[i_dequeue2_538+1]=arr_dequeue2_538[i_dequeue2_538];
            }
            printf("Enter the new element: ");
            scanf("%d",&arr_dequeue2_538[front_dequeue2_538]);

            front_dequeue2_538=0;
            rear_dequeue2_538++;
        }

    }
}
void dequeue_dequeue2_538()
{
        if(rear_dequeue2_538==0)
            printf("UNDERFLOW\n");
        else
        {
            printf("Element deleted is %d\n",arr_dequeue2_538[front_dequeue2_538]);
            arr_dequeue2_538[front_dequeue2_538]=0;
            front_dequeue2_538++;
        }
    
}
void peek_dequeue2_538()
{
    if(front_dequeue2_538==rear_dequeue2_538+1)
        printf("UNDERFLOW\n");
    else
    {
        printf("%d\n",arr_dequeue2_538[front_dequeue2_538]);
    }
}
void display_dequeue2_538()
{
    int i_dequeue2_538=0;
    while(i_dequeue2_538!=rear_dequeue2_538)
    {
        if(arr_dequeue2_538[i_dequeue2_538]!=0)
            printf("%d \n",arr_dequeue2_538[i_dequeue2_538]);
        i_dequeue2_538++;
    }
    
}
void isempty_dequeue2_538()
{
    if(rear_dequeue2_538==0)
        printf("Yes the queue is empty\n");
    else 
        printf("No the queue is not empty\n");
}
void isfull_dequeue2_538()
{
    if(rear_dequeue2_538==0)
        printf("No the queue is empty\n");
    else 
        printf("Yes the queue is full\n");
}

int main_dequeue2_538()
{
    arr_dequeue2_538=(int *)malloc(sizeof(5));
    printf("A input restricted  queue is formed of size of 5\n");
    printf("1.  Enqueue\n");
    printf("2.  Dequeue\n");
    printf("3.  Peek\n");
    printf("4.  Display\n");
    printf("5.  To check if the queue is empty\n");
    printf("6.  To check if the queue is full\n");

    
    char c_dequeue2_538;
    
    printf("Enter y if you want to  access the menu:    ");
    scanf("%c",&c_dequeue2_538);

    while(c_dequeue2_538=='y')
    {
        
        printf("Enter your choice: ");
        int i_dequeue2_538;
        scanf("%d",&i_dequeue2_538);
        switch(i_dequeue2_538)
        {
            case 1:
            enqueue_dequeue2_538();
            break;

            case 2:
            dequeue_dequeue2_538();
            break;

            case 3:
            peek_dequeue2_538();
            break;

            case 4:
            display_dequeue2_538();
            break;

            case 5:
            isempty_dequeue2_538();
            break;

            case 6:
            isfull_dequeue2_538();
            break;
        }
        
        printf("Enter y if you want to  access the menu:    ");
        scanf(" %c",&c_dequeue2_538);
    }
    return 0;
}