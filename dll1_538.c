/*
WAP to create a double linked list of n nodes and display the linked list by using suitable user
    defined functions for create and delete operations.
    */

typedef struct node_dll1_538
{
    struct node_dll1_538 *prev_dll1_538;
    int data_dll1_538;
    struct node_dll1_538 *nxt_dll1_538;
}node_dll1_538;

void create_dll1_538(node_dll1_538 *head_dll1_538)
{
    scanf("%d",&head_dll1_538 ->data_dll1_538);

    if(head_dll1_538->data_dll1_538==-999)
    {
        head_dll1_538->nxt_dll1_538=NULL;
        head_dll1_538->prev_dll1_538 =head_dll1_538;
    }
    else
    {
        head_dll1_538->nxt_dll1_538 = (node_dll1_538 *)malloc(sizeof(node_dll1_538));
        head_dll1_538->nxt_dll1_538->prev_dll1_538 =head_dll1_538;
        create_dll1_538(head_dll1_538->nxt_dll1_538);
    }
}

node_dll1_538* delete_begin_dll1_538(node_dll1_538 *list_dll1_538)
{
    
    node_dll1_538 *temp_dll1_538=(node_dll1_538 *)malloc(sizeof(node_dll1_538));
    
    temp_dll1_538=list_dll1_538->nxt_dll1_538;
    free(list_dll1_538);
    list_dll1_538=temp_dll1_538;
    list_dll1_538->prev_dll1_538=NULL;
    return list_dll1_538;
}   

void delete_mid_dll1_538(node_dll1_538 *list_dll1_538,int a_dll1_538)
{
    
    node_dll1_538 *temp_dll1_538=(node_dll1_538 *)malloc(sizeof(node_dll1_538));
        for(int i=0;i<a_dll1_538-2;i++)
            list_dll1_538=list_dll1_538->nxt_dll1_538;
        temp_dll1_538=list_dll1_538->nxt_dll1_538;
    list_dll1_538->nxt_dll1_538=temp_dll1_538->nxt_dll1_538;
    list_dll1_538->nxt_dll1_538->prev_dll1_538=temp_dll1_538->prev_dll1_538;
        free(temp_dll1_538);
}

void delete_end_dll1_538(node_dll1_538 *list_dll1_538)
{
   node_dll1_538 *temp_dll1_538=(node_dll1_538 *)malloc(sizeof(node_dll1_538));
        while(list_dll1_538->nxt_dll1_538->nxt_dll1_538!=NULL)
            list_dll1_538=list_dll1_538->nxt_dll1_538;
        temp_dll1_538=list_dll1_538->nxt_dll1_538;
    list_dll1_538->nxt_dll1_538=list_dll1_538->nxt_dll1_538->nxt_dll1_538;
    list_dll1_538->nxt_dll1_538->nxt_dll1_538->prev_dll1_538=temp_dll1_538->prev_dll1_538;
    free(temp_dll1_538);
}


void display_end_dll1_538(node_dll1_538 *list_dll1_538)
{

    if(list_dll1_538->nxt_dll1_538!=NULL)
    {
        printf("%d \n",list_dll1_538->data_dll1_538);
        list_dll1_538=list_dll1_538->nxt_dll1_538;
        display_end_dll1_538(list_dll1_538);
    }
}

void main_dll1_538()
{
    node_dll1_538 *head_dll1_538=(node_dll1_538*)malloc(sizeof(node_dll1_538));
    head_dll1_538->prev_dll1_538=NULL;
    printf("Enter the elements of the node enter -999 to exit the entry of elements \n");
    create_dll1_538(head_dll1_538);
    printf("1.Delete the node at begining \n");
    printf("2.Delete the node at given position \n");
    printf("3.Delete the node at end \n");
    printf("Enter the character for you given choice \n");
    int c_end_dll1_538,a_dll1_538;
    scanf("%d",&c_end_dll1_538);
    switch(c_end_dll1_538)
    {
        case 1:
            head_dll1_538=delete_begin_dll1_538(head_dll1_538);
            break;

        case 2:
            printf("Enter the position you want to delete ");
            scanf("%d",&a_dll1_538);
            delete_mid_dll1_538(head_dll1_538,a_dll1_538);
            break;
     
        case 3:
            delete_end_dll1_538(head_dll1_538);
            printf("After deletion the new linked list is\n");
            display_end_dll1_538(head_dll1_538);
            break;
        default:
            printf("Wrong choice\n");
    }
    printf("The list  is \n");
    display_end_dll1_538(head_dll1_538);
}