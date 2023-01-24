/* WAP which is menu driven to perform the following operations in a linked list
    a) transversal
    b) check if list is emptyarr_
    c) insert a node
    d) delete a node
    e) delete a node for a given key
    f) count the number of nodes
    g) search for an element
    */

typedef struct Node_llist1_538
{
    int data_llist1_538;
    struct Node_llist1_538 *nxt_llist1_538;
}node_llist1_538;

void create_llist1_538(node_llist1_538 *list_llist1_538)
{
    scanf("%d",&list_llist1_538->data_llist1_538);
    list_llist1_538->nxt_llist1_538=(node_llist1_538 *)malloc (sizeof(node_llist1_538));
    if(list_llist1_538->data_llist1_538!=-999)
    {
        list_llist1_538=list_llist1_538->nxt_llist1_538;
        create_llist1_538(list_llist1_538);
    }
    else
        list_llist1_538->nxt_llist1_538=NULL;
}

int transversal_llist1_538(node_llist1_538 *list_llist1_538)
{
    while(list_llist1_538->nxt_llist1_538->nxt_llist1_538!=NULL)
        list_llist1_538=list_llist1_538->nxt_llist1_538;
    return list_llist1_538->data_llist1_538;
}

int count_llist1_538(node_llist1_538 *list_llist1_538,int c_llist1_538)
{
    if(list_llist1_538!=NULL)
    {
        c_llist1_538++;
        list_llist1_538=list_llist1_538->nxt_llist1_538;
        count_llist1_538(list_llist1_538,c_llist1_538);
    }
    else
        return c_llist1_538-1;
}

void empty_llist1_538(node_llist1_538 *list_llist1_538)
{
    if(count_llist1_538(list_llist1_538,0)!=0)
        printf("The list is not empty\n");
    else
        printf("The list is empty\n");
}

node_llist1_538* insert_begin_llist1_538(node_llist1_538 *list_llist1_538)
{
    
    node_llist1_538 *temp_llist1_538=(node_llist1_538 *)malloc(sizeof(node_llist1_538));   
        int b_llist1_538;    
            printf("Enter the data you want to enter in the new node ");
            scanf("%d",&b_llist1_538);
        temp_llist1_538->data_llist1_538=b_llist1_538;
        temp_llist1_538->nxt_llist1_538=list_llist1_538;
        list_llist1_538=temp_llist1_538;
    return list_llist1_538;
}

void insert_mid_llist1_538(node_llist1_538 *list_llist1_538,int a_llist1_538)
{
    node_llist1_538 *temp_llist1_538=(node_llist1_538 *)malloc(sizeof(node_llist1_538));   
        int b_llist1_538;    
            printf("Enter the data you want to enter in the new node ");
            scanf("%d",&b_llist1_538);
        for(int i_llist1_538=0;i_llist1_538<a_llist1_538-2;i_llist1_538++)
            list_llist1_538=list_llist1_538->nxt_llist1_538;
        temp_llist1_538->data_llist1_538=b_llist1_538;
        temp_llist1_538->nxt_llist1_538=list_llist1_538->nxt_llist1_538;
        list_llist1_538->nxt_llist1_538=temp_llist1_538;
}

void insert_end_llist1_538(node_llist1_538 *list_llist1_538)
{
    node_llist1_538 *temp_llist1_538=(node_llist1_538 *)malloc(sizeof(node_llist1_538));   
        int b_llist1_538;    
            printf("Enter the data you want to enter in the new node ");
            scanf("%d",&b_llist1_538);
        while(list_llist1_538->nxt_llist1_538->nxt_llist1_538!=NULL)
            list_llist1_538=list_llist1_538->nxt_llist1_538;
        temp_llist1_538->data_llist1_538=b_llist1_538;
        temp_llist1_538->nxt_llist1_538=list_llist1_538->nxt_llist1_538;
        list_llist1_538->nxt_llist1_538=temp_llist1_538;
}

node_llist1_538* delete_begin_llist1_538(node_llist1_538 *list_llist1_538)
{
    
    node_llist1_538 *temp_llist1_538=(node_llist1_538 *)malloc(sizeof(node_llist1_538));
    
    temp_llist1_538=list_llist1_538->nxt_llist1_538;
    free(list_llist1_538);
    list_llist1_538=temp_llist1_538;
    return list_llist1_538;
}   
void delete_mid_llist1_538(node_llist1_538 *list_llist1_538,int a_llist1_538)
{
    
    node_llist1_538 *temp_llist1_538=(node_llist1_538 *)malloc(sizeof(node_llist1_538));
        for(int i_llist1_538=0;i_llist1_538<a_llist1_538-2;i_llist1_538++)
            list_llist1_538=list_llist1_538->nxt_llist1_538;
        temp_llist1_538=list_llist1_538->nxt_llist1_538;
    list_llist1_538->nxt_llist1_538=temp_llist1_538->nxt_llist1_538;
        free(temp_llist1_538);
}

void delete_end_llist1_538(node_llist1_538 *list_llist1_538)
{
    
    node_llist1_538 *temp_llist1_538=(node_llist1_538 *)malloc(sizeof(node_llist1_538));
        while(list_llist1_538->nxt_llist1_538->nxt_llist1_538!=NULL)
            list_llist1_538=list_llist1_538->nxt_llist1_538;
        temp_llist1_538=list_llist1_538->nxt_llist1_538;
    list_llist1_538->nxt_llist1_538=list_llist1_538->nxt_llist1_538->nxt_llist1_538;
    free(temp_llist1_538);
}

void deletekey_llist1_538(node_llist1_538 *list_llist1_538,int dat_llist1_538)
{
    node_llist1_538 *temp_llist1_538=(node_llist1_538 *)malloc(sizeof(node_llist1_538));
    for(temp_llist1_538=list_llist1_538;temp_llist1_538->nxt_llist1_538->data_llist1_538!=dat_llist1_538;temp_llist1_538=temp_llist1_538->nxt_llist1_538);
    list_llist1_538=temp_llist1_538;
    temp_llist1_538=list_llist1_538->nxt_llist1_538;
    list_llist1_538->nxt_llist1_538=list_llist1_538->nxt_llist1_538->nxt_llist1_538;
    free(temp_llist1_538);
}

void search_llist1_538(node_llist1_538 *list_llist1_538,int dat_llist1_538)
{
    int c_llist1_538=0;
    while(list_llist1_538->nxt_llist1_538!=NULL)
    {
        if(list_llist1_538->data_llist1_538==dat_llist1_538)
            c_llist1_538++;
            list_llist1_538=list_llist1_538->nxt_llist1_538;
    }

    if(c_llist1_538>0)
        printf("The element entered is found in the list\n");
    else   
        printf("The element entered is not found in the list\n");
}

void display_llist1_538(node_llist1_538 *list_llist1_538)
{

    if(list_llist1_538->nxt_llist1_538!=NULL)
    {
        printf("%d \n",list_llist1_538->data_llist1_538);
        list_llist1_538=list_llist1_538->nxt_llist1_538;
        display_llist1_538(list_llist1_538);
    }
}
void main_llist1_538()
{
    node_llist1_538 *head_llist1_538=(node_llist1_538 *) malloc(sizeof(node_llist1_538));
    printf("Enter the elements of the node enter -999 to exit the entry of elements \n");
    create_llist1_538(head_llist1_538);
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
    int n_llist1_538;
    printf("Enter 999 each time you want to use the menu ");
    scanf("%d",&n_llist1_538);
    while(n_llist1_538==999)
    {
    printf("Enter the character for you given choice \n");
    int c_llist1_538;
    scanf("%d",&c_llist1_538);
    int a_llist1_538,b_llist1_538;
    
    switch(c_llist1_538)
    {
        case 1:
            printf("After transversal the value of last node is %d \n",transversal_llist1_538(head_llist1_538));
            printf("Enter 999 each time you want to use the menu ");
    scanf("%d",&n_llist1_538);
            break;

        case 2:
            printf("The number of nodes is the list %d \n",count_llist1_538(head_llist1_538,0));
            printf("Enter 999 each time you want to use the menu ");
    scanf("%d",&n_llist1_538);
            break;

        case 3:
            head_llist1_538=insert_begin_llist1_538(head_llist1_538);
            
            printf("After insertion the new linked list is\n");
            display_llist1_538(head_llist1_538);

            printf("Enter 999 each time you want to use the menu ");
            scanf("%d",&n_llist1_538);
            break;
            
        case 4:
            printf("Enter the position you want to enter the new node ");
            scanf("%d",&a_llist1_538);
            insert_mid_llist1_538(head_llist1_538,a_llist1_538);
            
            printf("After insertion the new linked list is\n");
            display_llist1_538(head_llist1_538);

            printf("Enter 999 each time you want to use the menu ");
            scanf("%d",&n_llist1_538);
            break;
     
        case 5:
            insert_end_llist1_538(head_llist1_538);
            printf("After insertion the new linked list is\n");
            display_llist1_538(head_llist1_538);

            printf("Enter 999 each time you want to use the menu ");
            scanf("%d",&n_llist1_538);
            break;

        case 6:
            head_llist1_538=delete_begin_llist1_538(head_llist1_538);
            
            printf("After deletion the new linked list is\n");
            display_llist1_538(head_llist1_538);
            
            printf("Enter 999 each time you want to use the menu ");
            scanf("%d",&n_llist1_538);
            break;

        case 7:
            printf("Enter the position you want to delete ");
            scanf("%d",&a_llist1_538);
            delete_mid_llist1_538(head_llist1_538,a_llist1_538);
            printf("After deletion the new linked list is\n");
            display_llist1_538(head_llist1_538);
            
            printf("Enter 999 each time you want to use the menu ");
            scanf("%d",&n_llist1_538);
            break;
     
        case 8:
            delete_end_llist1_538(head_llist1_538);
            printf("After deletion the new linked list is\n");
            display_llist1_538(head_llist1_538);
            
            printf("Enter 999 each time you want to use the menu ");
            scanf("%d",&n_llist1_538);
            break;

        case 9:
            printf("Enter the data whose node you want to delete ");
            scanf("%d",&a_llist1_538);
            deletekey_llist1_538(head_llist1_538,a_llist1_538);
            printf("After deletion the new linked list is\n");
            display_llist1_538(head_llist1_538);
            printf("Enter 999 each time you want to use the menu ");
    scanf("%d",&n_llist1_538);
            break;
        case 10:
            printf("The number of nodes in the linked list is %d \n",count_llist1_538(head_llist1_538,0));
            printf("Enter 999 each time you want to use the menu ");
    scanf("%d",&n_llist1_538);
            break;
        case 11:
            printf("Enter the element you want to search_llist1_538 ");
            scanf("%d",&a_llist1_538);
            search_llist1_538(head_llist1_538,a_llist1_538);
            printf("Enter 999 each time you want to use the menu ");
    scanf("%d",&n_llist1_538);
            break;
        default:
            printf("Wrong choice\n");
            printf("Enter 999 each time you want to use the menu ");
    scanf("%d",&n_llist1_538);
    }
    }
}