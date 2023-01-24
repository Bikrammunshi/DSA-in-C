/*Write a menu driven program to implement Deques (Input-
    restricted) operations such as Enqueue, Dequeue,
    Peek, Display of elements, IsEmpty, IsFull using static array.*/



int front_dequeue1_538=0;
int rear_dequeue1_538=0;
int *arr_dequeue1_538;

void enqueue_dequeue1_538()
{
    
    if((rear_dequeue1_538+1)%5==front_dequeue1_538)
    {
        if(rear_dequeue1_538==0)
            rear_dequeue1_538=5;
        else
            rear_dequeue1_538--;
    }
    else
    {
        printf("Enter the new element: ");
        scanf("%d",&arr_dequeue1_538[rear_dequeue1_538]);
        front_dequeue1_538=0;
        rear_dequeue1_538=(rear_dequeue1_538+1)%5;
    }
}
void dequeue_dequeue1_538()
{
    printf("Enter 1 to dequeue from front\n");
    printf("Enter 2 to dequeue from back\n");
    printf("Enter your choice: ");
    int n_dequeue1_538;
    scanf("%d",&n_dequeue1_538);
    if(n_dequeue1_538==1)
    {
        if(rear_dequeue1_538==0)
            printf("UNDERFLOW\n");
        else
        {
            printf("Element deleted is %d\n",arr_dequeue1_538[front_dequeue1_538]);
            arr_dequeue1_538[front_dequeue1_538]=0;
            front_dequeue1_538++;
        }
    }
    else
    {
        if(rear_dequeue1_538==0)
            printf("UNDERFLOW\n");
        else
        {
            printf("Element deleted is %d\n",arr_dequeue1_538[--rear_dequeue1_538]);
            arr_dequeue1_538[rear_dequeue1_538]=0;
        }
    }
}
void peek_dequeue1_538()
{
    if(front_dequeue1_538==rear_dequeue1_538+1)
        printf("UNDERFLOW\n");
    else
    {
        printf("%d\n",arr_dequeue1_538[front_dequeue1_538]);
    }
}
void display_dequeue1_538()
{
    int i_dequeue1_538=0;
    while(i_dequeue1_538!=rear_dequeue1_538)
    {
        if(arr_dequeue1_538[i_dequeue1_538]!=0)
            printf("%d \n",arr_dequeue1_538[i_dequeue1_538]);
        i_dequeue1_538++;
    }
    
}
void isempty_dequeue1_538()
{
    if(rear_dequeue1_538==0)
        printf("Yes the queue is empty\n");
    else 
        printf("No the queue is not empty\n");
}
void isfull_dequeue1_538()
{
    if(rear_dequeue1_538==0)
        printf("No the queue is empty\n");
    else 
        printf("Yes the queue is full\n");
}

int main_dequeue1_538()
{
    arr_dequeue1_538=(int *)malloc(sizeof(5));
    printf("A input restricted  queue is formed of size of 5\n");
    printf("1.  Enqueue\n");
    printf("2.  Dequeue\n");
    printf("3.  Peek\n");
    printf("4.  Display\n");
    printf("5.  To check if the queue is empty\n");
    printf("6.  To check if the queue is full\n");

    
    char c_dequeue1_538;
    
    printf("Enter y if you want to  access the menu:    ");
    scanf("%c",&c_dequeue1_538);

    while(c_dequeue1_538=='y')
    {
        
        printf("Enter your choice: ");
        int i_dequeue1_538;
        scanf("%d",&i_dequeue1_538);
        switch(i_dequeue1_538)
        {
            case 1:
            enqueue_dequeue1_538();
            break;

            case 2:
            dequeue_dequeue1_538();
            break;

            case 3:
            peek_dequeue1_538();
            break;

            case 4:
            display_dequeue1_538();
            break;

            case 5:
            isempty_dequeue1_538();
            break;

            case 6:
            isfull_dequeue1_538();
            break;
        }
        
        printf("Enter y if you want to  access the menu:    ");
        scanf(" %c",&c_dequeue1_538);
    }
    return 0;
}