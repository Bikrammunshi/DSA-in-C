/*
WAP to perform the following operations in a double linked list by using suitable user defined
    for each case.
    a)  traverse forward
    b)  traverse backward
    c)  check if the linked list in empty.
    d)  insert the node at any position(begining/mid/end)
    e)  delete the node at any position(begining/mid/end)
    f)  delete the node for any given key.
    g)  count the total number of nodes.
    h)  search in the linked list.
    Validate and verify each function from the main method.*/

typedef struct node_end_dlll3_538
{
    struct node_end_dlll3_538 *prev_end_dlll3_538;
    int data_end_dlll3_538;
    struct node_end_dlll3_538 *nxt_end_dlll3_538;
}node_end_dlll3_538;

void create_end_dlll3_538(node_end_dlll3_538 *head_end_dlll3_538)
{
    scanf("%d",&head_end_dlll3_538 ->data_end_dlll3_538);

    if(head_end_dlll3_538->data_end_dlll3_538==-999)
    {
        head_end_dlll3_538->nxt_end_dlll3_538=NULL;
        head_end_dlll3_538->prev_end_dlll3_538 =head_end_dlll3_538;
    }
    else
    {
        head_end_dlll3_538->nxt_end_dlll3_538 = (node_end_dlll3_538 *)malloc(sizeof(node_end_dlll3_538));
        head_end_dlll3_538->nxt_end_dlll3_538->prev_end_dlll3_538 =head_end_dlll3_538;
        create_end_dlll3_538(head_end_dlll3_538->nxt_end_dlll3_538);
    }
}

node_end_dlll3_538*  transversal_end_dlll3_538(node_end_dlll3_538 *list_end_dlll3_538)
{
    while(list_end_dlll3_538->nxt_end_dlll3_538->nxt_end_dlll3_538!=NULL)
        list_end_dlll3_538=list_end_dlll3_538->nxt_end_dlll3_538;
    return list_end_dlll3_538;
}

int count_end_dlll3_538(node_end_dlll3_538 *list_end_dlll3_538,int c_end_dlll3_538)
{
    if(list_end_dlll3_538!=NULL)
    {
        c_end_dlll3_538++;
        list_end_dlll3_538=list_end_dlll3_538->nxt_end_dlll3_538;
        count_end_dlll3_538(list_end_dlll3_538,c_end_dlll3_538);
    }
    else
        return c_end_dlll3_538-1;
}

void empty_end_dlll3_538(node_end_dlll3_538 *list_end_dlll3_538)
{
    if(count_end_dlll3_538(list_end_dlll3_538,0)!=0)
        printf("The list is not empty\n");
    else
        printf("The list is empty\n");
}

node_end_dlll3_538* insert_begin_end_dlll3_538(node_end_dlll3_538 *list_end_dlll3_538)
{
    
    node_end_dlll3_538 *temp_end_dlll3_538=(node_end_dlll3_538 *)malloc(sizeof(node_end_dlll3_538));   
        int b_end_dlll3_538;    
            printf("Enter the data you want to enter in the new node ");
            scanf("%d",&b_end_dlll3_538);
        temp_end_dlll3_538->data_end_dlll3_538=b_end_dlll3_538;
        temp_end_dlll3_538->nxt_end_dlll3_538=list_end_dlll3_538;
        list_end_dlll3_538=temp_end_dlll3_538;
    return list_end_dlll3_538;
}

void insert_mid_end_dlll3_538(node_end_dlll3_538 *list_end_dlll3_538,int a__end_dlll3_538)
{
    node_end_dlll3_538 *temp_end_dlll3_538=(node_end_dlll3_538 *)malloc(sizeof(node_end_dlll3_538));   
        int b_end_dlll3_538;    
            printf("Enter the data you want to enter in the new node ");
            scanf("%d",&b_end_dlll3_538);
        for(int i__end_dlll3_538=0;i__end_dlll3_538<a__end_dlll3_538-2;i__end_dlll3_538++)
            list_end_dlll3_538=list_end_dlll3_538->nxt_end_dlll3_538;
        temp_end_dlll3_538->data_end_dlll3_538=b_end_dlll3_538;
        temp_end_dlll3_538->nxt_end_dlll3_538=list_end_dlll3_538->nxt_end_dlll3_538;
        temp_end_dlll3_538->prev_end_dlll3_538=list_end_dlll3_538;
        list_end_dlll3_538->nxt_end_dlll3_538=temp_end_dlll3_538;
}

void insert_end__dlll3_538(node_end_dlll3_538 *list_end_dlll3_538)
{
    node_end_dlll3_538 *temp_end_dlll3_538=(node_end_dlll3_538 *)malloc(sizeof(node_end_dlll3_538));   
        int b_end_dlll3_538;    
            printf("Enter the data you want to enter in the new node ");
            scanf("%d",&b_end_dlll3_538);
        while(list_end_dlll3_538->nxt_end_dlll3_538->nxt_end_dlll3_538!=NULL)
            list_end_dlll3_538=list_end_dlll3_538->nxt_end_dlll3_538;
        temp_end_dlll3_538->data_end_dlll3_538=b_end_dlll3_538;
        temp_end_dlll3_538->nxt_end_dlll3_538=list_end_dlll3_538->nxt_end_dlll3_538;
        temp_end_dlll3_538->prev_end_dlll3_538=list_end_dlll3_538;
        list_end_dlll3_538->nxt_end_dlll3_538=temp_end_dlll3_538;
}

node_end_dlll3_538* delete_begin_dlll3_538(node_end_dlll3_538 *list_end_dlll3_538)
{
    
    node_end_dlll3_538 *temp_end_dlll3_538=(node_end_dlll3_538 *)malloc(sizeof(node_end_dlll3_538));
    
    temp_end_dlll3_538=list_end_dlll3_538->nxt_end_dlll3_538;
    free(list_end_dlll3_538);
    list_end_dlll3_538=temp_end_dlll3_538;
    list_end_dlll3_538->prev_end_dlll3_538=NULL;
    return list_end_dlll3_538;
}    
void delete_mid__end_dlll3_538(node_end_dlll3_538 *list_end_dlll3_538,int a__end_dlll3_538)
{
    
    node_end_dlll3_538 *temp_end_dlll3_538=(node_end_dlll3_538 *)malloc(sizeof(node_end_dlll3_538));
        for(int i__end_dlll3_538=0;i__end_dlll3_538<a__end_dlll3_538-2;i__end_dlll3_538++)
            list_end_dlll3_538=list_end_dlll3_538->nxt_end_dlll3_538;
        temp_end_dlll3_538=list_end_dlll3_538->nxt_end_dlll3_538;
    list_end_dlll3_538->nxt_end_dlll3_538=temp_end_dlll3_538->nxt_end_dlll3_538;
    list_end_dlll3_538->nxt_end_dlll3_538->prev_end_dlll3_538=temp_end_dlll3_538->prev_end_dlll3_538;
        free(temp_end_dlll3_538);
}

void delete_end__dlll3_538(node_end_dlll3_538 *list_end_dlll3_538)
{
   node_end_dlll3_538 *temp_end_dlll3_538=(node_end_dlll3_538 *)malloc(sizeof(node_end_dlll3_538));
        while(list_end_dlll3_538->nxt_end_dlll3_538->nxt_end_dlll3_538!=NULL)
            list_end_dlll3_538=list_end_dlll3_538->nxt_end_dlll3_538;
        temp_end_dlll3_538=list_end_dlll3_538->nxt_end_dlll3_538;
    list_end_dlll3_538->nxt_end_dlll3_538=list_end_dlll3_538->nxt_end_dlll3_538->nxt_end_dlll3_538;
    list_end_dlll3_538->nxt_end_dlll3_538->nxt_end_dlll3_538->prev_end_dlll3_538=temp_end_dlll3_538->prev_end_dlll3_538;
    free(temp_end_dlll3_538);
}

void deletekey_dlll3_538(node_end_dlll3_538 *list_end_dlll3_538,int dat_dlll3_538)
{
    node_end_dlll3_538 *temp_end_dlll3_538=(node_end_dlll3_538 *)malloc(sizeof(node_end_dlll3_538));
    for(temp_end_dlll3_538=list_end_dlll3_538;temp_end_dlll3_538->nxt_end_dlll3_538->data_end_dlll3_538!=dat_dlll3_538;temp_end_dlll3_538=temp_end_dlll3_538->nxt_end_dlll3_538);
    list_end_dlll3_538=temp_end_dlll3_538;
    temp_end_dlll3_538=list_end_dlll3_538->nxt_end_dlll3_538;
    list_end_dlll3_538->nxt_end_dlll3_538=list_end_dlll3_538->nxt_end_dlll3_538->nxt_end_dlll3_538;
    list_end_dlll3_538->nxt_end_dlll3_538->prev_end_dlll3_538=temp_end_dlll3_538->prev_end_dlll3_538;
    free(temp_end_dlll3_538);
     
}

void search_dlll3_538(node_end_dlll3_538 *list_end_dlll3_538,int dat_dlll3_538)
{
    int c_end_dlll3_538=0;
    while(list_end_dlll3_538->nxt_end_dlll3_538!=NULL)
    {
        if(list_end_dlll3_538->data_end_dlll3_538==dat_dlll3_538)
            c_end_dlll3_538++;
            list_end_dlll3_538=list_end_dlll3_538->nxt_end_dlll3_538;
    }

    if(c_end_dlll3_538>0)
        printf("The element entered is found in the list\n");
    else   
        printf("The element entered is not found in the list\n");
}

void display_dlll3_538(node_end_dlll3_538 *list_end_dlll3_538)
{

    if(list_end_dlll3_538->nxt_end_dlll3_538!=NULL)
    {
        printf("%d \n",list_end_dlll3_538->data_end_dlll3_538);
        list_end_dlll3_538=list_end_dlll3_538->nxt_end_dlll3_538;
        display_dlll3_538(list_end_dlll3_538);
    }
}

void transversal_b_dlll3_538(node_end_dlll3_538 *list_end_dlll3_538)
{
    node_end_dlll3_538 *last_dlll3_538=transversal_end_dlll3_538(list_end_dlll3_538);
    while(last_dlll3_538->prev_end_dlll3_538->prev_end_dlll3_538!=NULL)
    {
        
        printf("%d \n",last_dlll3_538->data_end_dlll3_538);
        last_dlll3_538=last_dlll3_538->prev_end_dlll3_538;
    }
}

void main_dlll3_538()
{
    node_end_dlll3_538 *head_end_dlll3_538=(node_end_dlll3_538 *) malloc(sizeof(node_end_dlll3_538));
    printf("Enter the elements of the node enter -999 to exit the entry of elements \n");
    create_end_dlll3_538(head_end_dlll3_538);
    printf("1.Transversal \n");
    printf("2.Check if list is empty \n");
    printf("3.Insert the node at beginnig \n ");
    printf("4.Insert the node at given position \n ");
    printf("5.Insert the node at end \n ");
    printf("6.Delete the node at begining \n");
    printf("7.Delete the node at given position \n");
    printf("8.Delete the node at end \n");
    printf("9.Delete the node for a given key \n");
    printf("10.Count the number of nodes \n");
    printf("11.Search an element \n");
    printf("12.Traverse backwards \n");
    int n_dlll3_538;
    printf("Enter 999 each time you want to use the menu ");
    scanf("%d",&n_dlll3_538);
    while(n_dlll3_538==999)
    {
    printf("Enter the character for you given choice \n");
    int c_end_dlll3_538;
    scanf("%d",&c_end_dlll3_538);
    int a__end_dlll3_538,b_end_dlll3_538;
    
    switch(c_end_dlll3_538)
    {
        case 1:
            printf("After transversal the value of last node is %d \n",transversal_end_dlll3_538(head_end_dlll3_538)->data_end_dlll3_538);
            printf("Enter 999 each time you want to use the menu ");
    scanf("%d",&n_dlll3_538);
            break;

        case 2:
            printf("The number of nodes is the list %d \n",count_end_dlll3_538(head_end_dlll3_538,0));
            printf("Enter 999 each time you want to use the menu ");
    scanf("%d",&n_dlll3_538);
            break;

        case 3:
            head_end_dlll3_538=insert_begin_end_dlll3_538(head_end_dlll3_538);
            
            printf("After insertion the new linked list is\n");
            display_dlll3_538(head_end_dlll3_538);

            printf("Enter 999 each time you want to use the menu ");
            scanf("%d",&n_dlll3_538);
            break;
            
        case 4:
            printf("Enter the position you want to enter the new node ");
            scanf("%d",&a__end_dlll3_538);
            insert_mid_end_dlll3_538(head_end_dlll3_538,a__end_dlll3_538);
            
            printf("After insertion the new linked list is\n");
            display_dlll3_538(head_end_dlll3_538);

            printf("Enter 999 each time you want to use the menu ");
            scanf("%d",&n_dlll3_538);
            break;
     
        case 5:
            insert_end__dlll3_538(head_end_dlll3_538);
            printf("After insertion the new linked list is\n");
            display_dlll3_538(head_end_dlll3_538);

            printf("Enter 999 each time you want to use the menu ");
            scanf("%d",&n_dlll3_538);
            break;

        case 6:
            head_end_dlll3_538=delete_begin_dlll3_538(head_end_dlll3_538);
            
            printf("After deletion the new linked list is\n");
            display_dlll3_538(head_end_dlll3_538);
            
            printf("Enter 999 each time you want to use the menu ");
            scanf("%d",&n_dlll3_538);
            break;

        case 7:
            printf("Enter the position you want to delete ");
            scanf("%d",&a__end_dlll3_538);
            delete_mid__end_dlll3_538(head_end_dlll3_538,a__end_dlll3_538);
            printf("After deletion the new linked list is\n");
            display_dlll3_538(head_end_dlll3_538);
            
            printf("Enter 999 each time you want to use the menu ");
            scanf("%d",&n_dlll3_538);
            break;
     
        case 8:
            delete_end__dlll3_538(head_end_dlll3_538);
            printf("After deletion the new linked list is\n");
            display_dlll3_538(head_end_dlll3_538);
            
            printf("Enter 999 each time you want to use the menu ");
            scanf("%d",&n_dlll3_538);
            break;

        case 9:
            printf("Enter the data whose node you want to delete ");
            scanf("%d",&a__end_dlll3_538);
            deletekey_dlll3_538(head_end_dlll3_538,a__end_dlll3_538);
            printf("After deletion the new linked list is\n");
            display_dlll3_538(head_end_dlll3_538);
            printf("Enter 999 each time you want to use the menu ");
    scanf("%d",&n_dlll3_538);
            break;
        case 10:
            printf("The number of nodes in the linked list is %d \n",count_end_dlll3_538(head_end_dlll3_538,0));
            printf("Enter 999 each time you want to use the menu ");
    scanf("%d",&n_dlll3_538);
            break;
        case 11:
            printf("Enter the element you want to search ");
            scanf("%d",&a__end_dlll3_538);
            search_dlll3_538(head_end_dlll3_538,a__end_dlll3_538);
            printf("Enter 999 each time you want to use the menu ");
    scanf("%d",&n_dlll3_538);
            break;
        case 12:
            printf("After transversal backwards \n");
             transversal_b_dlll3_538(head_end_dlll3_538);
            printf("Enter 999 each time you want to use the menu ");
    scanf("%d",&n_dlll3_538);
            break;
        default:
            printf("Wrong choice\n");
            printf("Enter 999 each time you want to use the menu ");
    scanf("%d",&n_dlll3_538);
    }
    }
}