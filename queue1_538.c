/*
Write a menu driven program to implement queue operations such as
    Enqueue, Dequeue, Peek, Display of elements, IsEmpty, IsFull using static
    array.
*/
int front_queue1_538=0;
int rear_queue1_538=0;
int *arr_queue1_538;

void enqueue_queue1_538()
{
    if(rear_queue1_538==5)
    {
        printf("OVERFLOW\n");
        exit(0);
    }
    else
    {
        printf("Enter the new element: ");
        scanf("%d",&arr_queue1_538[rear_queue1_538]);
        front_queue1_538=0;
        rear_queue1_538++;
    }
}
void dequeue_queue1_538()
{
    if(rear_queue1_538==0)
        printf("UNDERFLOW\n");
    else
    {
        printf("Element deleted is %d\n",arr_queue1_538[front_queue1_538]);
        arr_queue1_538[front_queue1_538]=0;
        front_queue1_538++;
        rear_queue1_538--;
    }
}
void peek_queue1_538()
{
    if(front_queue1_538==rear_queue1_538+1)
        printf("UNDERFLOW\n");
    else
    {
        printf("%d\n",arr_queue1_538[front_queue1_538]);
    }
}
void displayqueue1_538()
{
    int i_queue1_538=0;
    while(i_queue1_538!=rear_queue1_538)
    {
        if(arr_queue1_538[i_queue1_538]!=0)
            printf("%d \n",arr_queue1_538[i_queue1_538]);
        i_queue1_538++;
    }
    
}
void isempty_queue1_538()
{
    if(rear_queue1_538==0)
        printf("Yes the queue is empty\n");
    else 
        printf("No the queue is not efullfullmpty\n");
}
void isfull_queue1_538()
{
    if(rear_queue1_538==0)
        printf("No the queue is empty\n");
    else 
        printf("Yes the queue is full\n");
}

int main_queue1_538()
{
    arr_queue1_538=(int *)malloc(sizeof(5));
    printf("A queue is formed of size of 5\n");
    printf("1.  Enqueue\n");
    printf("2.  Dequeue\n");
    printf("3.  Peek\n");
    printf("4.  Display\n");
    printf("5.  To check if the queue is empty\n");
    printf("6.  To check if the queue is full\n");

    
    char c_queue1_538;
    
    printf("Enter y if you want to  access the menu:    ");
    scanf("%c",&c_queue1_538);

    while(c_queue1_538=='y')
    {
        
        printf("Enter your choice: ");
        int i_queue1_538;
        scanf("%d",&i_queue1_538);
        switch(i_queue1_538)
        {
            case 1:
            enqueue_queue1_538();
            break;

            case 2:
            dequeue_queue1_538();
            break;

            case 3:
            peek_queue1_538();
            break;

            case 4:
            displayqueue1_538();
            break;

            case 5:
            isempty_queue1_538();
            break;

            case 6:
            isfull_queue1_538();
            break;
        }
        
        printf("Enter y if you want to  access the menu:    ");
        scanf(" %c",&c_queue1_538);
    }
    return 0;
}