/*
Write a menu driven program to perform the following operations in a single circular linked 
    list by using suitable user ddefined functions for each case.
    a) Traverse the list
    b) check if the list is empty
    c)  insert a node at a certain position.
    d) delete a node at the certain position.
    e) delete the node for a given key.
    f) count the number of nodes.
    g) search for an element in the linked list.
*/

typedef struct Node_clist1__538
{
    int data_clist1__538;
    struct Node_clist1__538 *nxt_clist1__538;
}node_clist1__538;

void create_clist1__538(node_clist1__538 *list_clist1__538,node_clist1__538 *head_clist1__538)
{
    scanf("%d",&list_clist1__538 ->data_clist1__538);

    if(list_clist1__538->data_clist1__538==-999)
        list_clist1__538->nxt_clist1__538=head_clist1__538;
    else
    {
        list_clist1__538->nxt_clist1__538 = (node_clist1__538 *)malloc(sizeof(node_clist1__538));
        create_clist1__538(list_clist1__538->nxt_clist1__538,head_clist1__538);
    }
}

node_clist1__538*  transversal_clist1__538(node_clist1__538 *list_clist1__538)
    {
        node_clist1__538 *first_clist1__538=(node_clist1__538 *)malloc(sizeof(node_clist1__538));
        first_clist1__538=list_clist1__538;
        while(list_clist1__538->nxt_clist1__538->nxt_clist1__538!=first_clist1__538)
            list_clist1__538=list_clist1__538->nxt_clist1__538;
        return list_clist1__538;
    }

int count_clist1__538(node_clist1__538  *list_clist1__538 ,int c,node_clist1__538 *first_clist1__538)
{
    if(list_clist1__538->nxt_clist1__538!=first_clist1__538)
    {
        c++;
        list_clist1__538=list_clist1__538->nxt_clist1__538;
        count_clist1__538(list_clist1__538,c,first_clist1__538);
    }
    else
        return c;
}

void empty_clist1__538(node_clist1__538 *list_clist1__538)
{
    if(count_clist1__538(list_clist1__538,0,list_clist1__538)!=0)
        printf("The list is not empty\n");
    else
        printf("The list is empty\n");
}

node_clist1__538* insert_begin_clist1__538(node_clist1__538 *list_clist1__538)
{   
    node_clist1__538 *last_clist1__538=transversal_clist1__538(list_clist1__538);  
    node_clist1__538 *temp_clist1__538=(node_clist1__538 *)malloc(sizeof(node_clist1__538));
        int b_clist1__538;    
        printf("Enter the data you want to enter in the new node ");
        scanf("%d",&b_clist1__538);
        temp_clist1__538->data_clist1__538=b_clist1__538;
        temp_clist1__538->nxt_clist1__538=list_clist1__538;
        last_clist1__538->nxt_clist1__538->nxt_clist1__538=temp_clist1__538;
        
        list_clist1__538=temp_clist1__538;
    return list_clist1__538;
}

void insert_mid_clist1__538(node_clist1__538 *list_clist1__538,int a_clist1__538)
{
    node_clist1__538 *temp_clist1__538=(node_clist1__538 *)malloc(sizeof(node_clist1__538));   
        int b_clist1__538;    
            printf("Enter the data you want to enter in the new node ");
            scanf("%d",&b_clist1__538);
        for(int i=0;i<a_clist1__538-2;i++)
            list_clist1__538=list_clist1__538->nxt_clist1__538;
        temp_clist1__538->data_clist1__538=b_clist1__538;
        temp_clist1__538->nxt_clist1__538=list_clist1__538->nxt_clist1__538;
        list_clist1__538->nxt_clist1__538=temp_clist1__538;
}

void insert_end_clist1__538(node_clist1__538 *list_clist1__538)
{
    node_clist1__538 *last_clist1__538=transversal_clist1__538(list_clist1__538);
    node_clist1__538 *temp_clist1__538=(node_clist1__538 *)malloc(sizeof(node_clist1__538));   
        int b_clist1__538;    
            printf("Enter the data you want to enter in the new node ");
            scanf("%d",&b_clist1__538);
        temp_clist1__538->data_clist1__538=b_clist1__538;
        temp_clist1__538->nxt_clist1__538=last_clist1__538->nxt_clist1__538->nxt_clist1__538;
        last_clist1__538->nxt_clist1__538=temp_clist1__538;
}

node_clist1__538* delete_begin_clist1__538(node_clist1__538 *list_clist1__538)
{
    
    node_clist1__538 *temp_clist1__538=(node_clist1__538 *)malloc(sizeof(node_clist1__538));
    node_clist1__538 *last_clist1__538=transversal_clist1__538(list_clist1__538);
    temp_clist1__538=list_clist1__538->nxt_clist1__538;
    free(list_clist1__538);
    list_clist1__538=temp_clist1__538;
    last_clist1__538->nxt_clist1__538->nxt_clist1__538=list_clist1__538;
    return list_clist1__538;
}   
void delete_mid_clist1__538(node_clist1__538 *list_clist1__538,int a_clist1__538)
{
    
    node_clist1__538 *temp_clist1__538=(node_clist1__538 *)malloc(sizeof(node_clist1__538));
        for(int i=0;i<a_clist1__538-2;i++)
            list_clist1__538=list_clist1__538->nxt_clist1__538;
        temp_clist1__538=list_clist1__538->nxt_clist1__538;
    list_clist1__538->nxt_clist1__538=temp_clist1__538->nxt_clist1__538;
        free(temp_clist1__538);
}

void delete_end_clist1__538(node_clist1__538 *list_clist1__538)
{
    node_clist1__538 *last_clist1__538=transversal_clist1__538(list_clist1__538);
        while(list_clist1__538->nxt_clist1__538!=last_clist1__538)
            list_clist1__538=list_clist1__538->nxt_clist1__538;
    list_clist1__538->nxt_clist1__538=last_clist1__538->nxt_clist1__538;
    free(last_clist1__538);
}

void deletekey_clist1__538(node_clist1__538 *list_clist1__538,int dat_clist1__538)
{
    node_clist1__538 *temp_clist1__538=(node_clist1__538 *)malloc(sizeof(node_clist1__538));
    for(temp_clist1__538=list_clist1__538;temp_clist1__538->nxt_clist1__538->data_clist1__538!=dat_clist1__538;temp_clist1__538=temp_clist1__538->nxt_clist1__538);
    list_clist1__538=temp_clist1__538;
    temp_clist1__538=list_clist1__538->nxt_clist1__538;
    list_clist1__538->nxt_clist1__538=list_clist1__538->nxt_clist1__538->nxt_clist1__538;
    free(temp_clist1__538);
}

void search_clist1__538(node_clist1__538 *list_clist1__538,int dat_clist1__538)
{
    int c_clist1__538=0;
    node_clist1__538 *first_clist1__538=list_clist1__538;
    while(list_clist1__538->nxt_clist1__538!=first_clist1__538)
    {
        if(list_clist1__538->data_clist1__538==dat_clist1__538)
            c_clist1__538++;
        list_clist1__538=list_clist1__538->nxt_clist1__538;
    }

    if(c_clist1__538>0)
        printf("The element entered is found in the list\n");
    else   
        printf("The element entered is not found in the list\n");
}

void display_clist1__538(node_clist1__538 *list_clist1__538,node_clist1__538* first_clist1__538)
{
    if(list_clist1__538->nxt_clist1__538->nxt_clist1__538!=first_clist1__538)
    {
        printf("%d \n",list_clist1__538->data_clist1__538);
        list_clist1__538=list_clist1__538->nxt_clist1__538;
        display_clist1__538(list_clist1__538,first_clist1__538);
    }
    else
    {
        printf("%d\n",list_clist1__538->data_clist1__538);
        printf("%d\n",first_clist1__538->data_clist1__538);
    }
}
void main_clist1__538()
{
    node_clist1__538 *head_clist1__538=(node_clist1__538 *) malloc(sizeof(node_clist1__538));
    printf("Enter the elements of the node enter -999 to exit the entry of elements \n");
    create_clist1__538(head_clist1__538,head_clist1__538);
    printf("1.Transversal \n");
    printf("2.Check if list is empty \n");
    printf("3.Insert the node at beginnig \n ");
    printf("4.Insert the node at given position \n ");
    printf("5.Insert the node at end \n ");
    printf("6.Delete the node at begining \n");
    printf("7.Delete the node at given position \n");
    printf("8.Delete the node at end \n");
    printf("9.Delete the node for a_clist1__538 given key \n");
    printf("10.Count the number of nodes \n");
    printf("11.Search an element \n");
    char ch_clist1__538;
    printf("Enter y each time you want to use the menu ");
    scanf(" %c",&ch_clist1__538);
    int c_clist1__538;
    int a_clist1__538,b_clist1__538;
    node_clist1__538 *temp_clist1__538=(node_clist1__538 *)malloc(sizeof(node_clist1__538));
    while(ch_clist1__538=='y')
    {
    printf("Enter the character for you given choice \n");
    scanf("%d",&c_clist1__538);
    switch(c_clist1__538)
    {
        case 1:
            temp_clist1__538=transversal_clist1__538(head_clist1__538);
            printf("After transversal the value of last node is %d \n",temp_clist1__538->data_clist1__538);
            printf("Enter y each time you want to use the menu ");
            scanf(" %c",&ch_clist1__538);
            break;

        case 2:
            printf("The number of nodes is the list %d \n",count_clist1__538(head_clist1__538,0,head_clist1__538));
            printf("Enter y each time you want to use the menu ");
            scanf(" %c",&ch_clist1__538);
            break;

        case 3:
            head_clist1__538=insert_begin_clist1__538(head_clist1__538);
            
            printf("After insertion the new linked list is\n");
            display_clist1__538(head_clist1__538,head_clist1__538);

            printf("Enter y each time you want to use the menu ");
            scanf(" %c",&ch_clist1__538);
            break;
            
        case 4:
            printf("Enter the position you want to enter the new node ");
            scanf(" %d",&a_clist1__538);
            insert_mid_clist1__538(head_clist1__538,a_clist1__538);
            
            printf("After insertion the new linked list is\n");
            display_clist1__538(head_clist1__538,head_clist1__538);

            printf("Enter y each time you want to use the menu ");
            scanf(" %c",&ch_clist1__538);
            break;
     
        case 5:
            insert_end_clist1__538(head_clist1__538);
            printf("After insertion the new linked list is\n");
            display_clist1__538(head_clist1__538,head_clist1__538);

            printf("Enter y each time you want to use the menu ");
            scanf(" %c",&ch_clist1__538);
            break;

        case 6:
            head_clist1__538=delete_begin_clist1__538(head_clist1__538);
            
            printf("After deletion the new linked list is\n");
            display_clist1__538(head_clist1__538,head_clist1__538);
            
            printf("Enter y each time you want to use the menu ");
            scanf(" %c",&ch_clist1__538);
            break;

        case 7:
            printf("Enter the position you want to delete ");
            scanf("%d",&a_clist1__538);
            delete_mid_clist1__538(head_clist1__538,a_clist1__538);
            printf("After deletion the new linked list is\n");
            display_clist1__538(head_clist1__538,head_clist1__538);
            
            printf("Enter y each time you want to use the menu ");
            scanf(" %c",&ch_clist1__538);
            break;
     
        case 8:
            delete_end_clist1__538(head_clist1__538);
            printf("After deletion the new linked list is\n");
            display_clist1__538(head_clist1__538,head_clist1__538);
            
            printf("Enter y each time you want to use the menu ");
            scanf(" %c",&ch_clist1__538);
            break;

        case 9:
            printf("Enter the data whose node you want to delete ");
            scanf("%d",&a_clist1__538);
            deletekey_clist1__538(head_clist1__538,a_clist1__538);
            printf("After deletion the new linked list is\n");
            display_clist1__538(head_clist1__538,head_clist1__538);
            printf("Enter y each time you want to use the menu ");
            scanf(" %c",&ch_clist1__538);
            break;
        case 10:
            printf("The number of nodes in the linked list is %d \n",count_clist1__538(head_clist1__538,0,head_clist1__538));
            printf("Enter y each time you want to use the menu ");
            scanf(" %c",&ch_clist1__538);
            break;
        case 11:
            printf("Enter the element you want to search ");
            scanf("%d",&a_clist1__538);
            search_clist1__538(head_clist1__538,a_clist1__538);
            printf("Enter y each time you want to use the menu ");
            scanf(" %c",&ch_clist1__538);
            break;
        default:
            printf("Wrong choice\n");
            printf("Enter y each time you want to use the menu ");
            scanf(" %c",&ch_clist1__538);
    }
    }
}