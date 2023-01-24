/*arar
Write a menu driven program to implement circular queue operations
    such as Enqueue, Dequeue, Peek, Display of elements, IsEmpty, IsFull
    using static array.
    */



int front_cqueue_538=0;
int rear_cqueue_538=0;
int *arr_cqueue_538;

void enqueue_cqueue_538()
{
    
    if((rear_cqueue_538+1)%5==front_cqueue_538)
    {
        if(rear_cqueue_538==0)
            rear_cqueue_538=5;
        else
            rear_cqueue_538--;
    }
    else
    {
        printf("Enter the new element: ");
        scanf("%d",&arr_cqueue_538[rear_cqueue_538]);
        front_cqueue_538=0;
        rear_cqueue_538=(rear_cqueue_538+1)%5;
    }
}
void dequeue_cqueue_538()
{
    if(rear_cqueue_538==0)
        printf("UNDERFLOW\n");
    else
    {
        printf("Element deleted is %d\n",arr_cqueue_538[front_cqueue_538]);
        arr_cqueue_538[front_cqueue_538]=0;
        front_cqueue_538++;
    }
}
void peek_cqueue_538()
{
    if(front_cqueue_538==rear_cqueue_538+1)
        printf("UNDERFLOW\n");
    else
    {
        printf("%d\n",arr_cqueue_538[front_cqueue_538]);
    }
}
void display_cqueue_538()
{
    int i_cqueue_538=0;
    while(i_cqueue_538!=rear_cqueue_538)
    {
        if(arr_cqueue_538[i_cqueue_538]!=0)
            printf("%d \n",arr_cqueue_538[i_cqueue_538]);
        i_cqueue_538++;
    }
    
}
void isempty_cqueue_538()
{
    if(rear_cqueue_538==0)
        printf("Yes the queue is empty\n");
    else 
        printf("No the queue is not empty\n");
}
void isfull_cqueue_538()
{
    if(rear_cqueue_538==0)
        printf("No the queue is empty\n");
    else 
        printf("Yes the queue is full\n");
}

int main_cqueue_538()
{
    arr_cqueue_538=(int *)malloc(sizeof(5));
    printf("A queue is formed of size of 5\n");
    printf("1.  Enqueue\n");
    printf("2.  Dequeue\n");
    printf("3.  Peek\n");
    printf("4.  Display\n");
    printf("5.  To check if the queue is empty\n");
    printf("6.  To check if the queue is full\n");

    
    char c_cqueue_538;
    
    printf("Enter y if you want to  access the menu:    ");
    scanf("%c",&c_cqueue_538);

    while(c_cqueue_538=='y')
    {
        
        printf("Enter your choice: ");
        int i_cqueue_538;
        scanf("%d",&i_cqueue_538);
        switch(i_cqueue_538)
        {
            case 1:
            enqueue_cqueue_538();
            break;

            case 2:
            dequeue_cqueue_538();
            break;

            case 3:
            peek_cqueue_538();
            break;

            case 4:
            display_cqueue_538();
            break;

            case 5:
            isempty_cqueue_538();
            break;

            case 6:
            isfull_cqueue_538();
            break;
        }
        
        printf("Enter y if you want to  access the menu:    ");
        scanf(" %c",&c_cqueue_538);
    }
    return 0;
}