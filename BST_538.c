/*
Q1      Write the following menu driven program for the binary search tree
            0.quit
            1.create
            2.in order transversal
            3.pre order transversal
            4.post prder transversal
            5.search
            6.Find smallest_bst_538 element
            7.find largest_bst_538 element
            8.deletion of tree
*/


struct BST_BST_538
{
    int data_bst_538;
    struct BST_BST_538 *lchild_bst_538;
    struct BST_BST_538 *rchild_bst_538;
};
typedef struct BST_BST_538 * NODE_BST_538;

NODE_BST_538 create_bst_538()
{
    NODE_BST_538 temp_bst_538;
    temp_bst_538 = (NODE_BST_538) malloc(sizeof(struct BST_BST_538));
    printf("\nEnter The value: ");
    scanf("%d", &temp_bst_538->data_bst_538);
    temp_bst_538->lchild_bst_538 = NULL;
temp_bst_538->rchild_bst_538 = NULL;
    return temp_bst_538;
}


void insert_bst_538(NODE_BST_538 root_bst_538, NODE_BST_538 newnode_bst_538)
{
    if (newnode_bst_538->data_bst_538 < root_bst_538->data_bst_538)
    {
        if (root_bst_538->lchild_bst_538 == NULL)
            root_bst_538->lchild_bst_538 = newnode_bst_538;
        else
            insert_bst_538(root_bst_538->lchild_bst_538, newnode_bst_538);
    }
    if (newnode_bst_538->data_bst_538 > root_bst_538->data_bst_538)
    {
        if (root_bst_538->rchild_bst_538 == NULL)
            root_bst_538->rchild_bst_538 = newnode_bst_538;
        else
            insert_bst_538(root_bst_538->rchild_bst_538, newnode_bst_538);
    }
}

void search_bst_538(NODE_BST_538 root_bst_538)
{
    int key_bst_538;
    NODE_BST_538 cur_bst_538;
    if(root_bst_538 == NULL)
    {
        printf("\nBST is empty.");
        return;
    }
    printf("\nEnter Element to be searched: ");
    scanf("%d", &key_bst_538);
    cur_bst_538 = root_bst_538;
    while (cur_bst_538 != NULL)
    {
        if (cur_bst_538->data_bst_538 == key_bst_538)
        {
            printf("\nKey element is present in BST");
            return;
        }
        if (key_bst_538 < cur_bst_538->data_bst_538)
            cur_bst_538 = cur_bst_538->lchild_bst_538;
        else
            cur_bst_538 = cur_bst_538->rchild_bst_538;
    }
    printf("\nKey element is not found in the BST");
}
void inorder_bst_538(NODE_BST_538 root_bst_538)
{
    if(root_bst_538 != NULL)
    {
        inorder_bst_538(root_bst_538->lchild_bst_538);
        printf("%d ", root_bst_538->data_bst_538);
        inorder_bst_538(root_bst_538->rchild_bst_538);
    }
}

void preorder_bst_538(NODE_BST_538 root_bst_538)
{
    if (root_bst_538 != NULL)
    {
        printf("%d ", root_bst_538->data_bst_538);
        preorder_bst_538(root_bst_538->lchild_bst_538);
        preorder_bst_538(root_bst_538->rchild_bst_538);
    }
}

void postorder_bst_538(NODE_BST_538 root_bst_538)
{
    if (root_bst_538 != NULL)
    {
        postorder_bst_538(root_bst_538->lchild_bst_538);
        postorder_bst_538(root_bst_538->rchild_bst_538);
        printf("%d ", root_bst_538->data_bst_538);
    }
}

void smallest_bst_538(NODE_BST_538 root_bst_538)
{
    while(root_bst_538 != NULL && root_bst_538->lchild_bst_538 != NULL)
    {
        root_bst_538 = root_bst_538->lchild_bst_538;
    }
    printf("\nSmallest value is %d\n", root_bst_538->data_bst_538);
}

void largest_bst_538(NODE_BST_538 root_bst_538)
{
    while (root_bst_538 != NULL && root_bst_538->rchild_bst_538 != NULL)
    {
        root_bst_538 = root_bst_538->rchild_bst_538;
    }
    printf("\nLargest value is %d", root_bst_538->data_bst_538);
}

void delete1_bst_538(NODE_BST_538 root_bst_538)
{
    printf("\nElement deleted");
}
int main_bst_538()
{
    int ch_bst_538, key_bst_538, val_bst_538, i_bst_538, n_bst_538;
    NODE_BST_538 root_bst_538 = NULL, newnode_bst_538;
    while(1)
    {
        printf("\n\n-----------------------");
        printf("\nBinary Search Tree Menu");
        printf("\n-----------------------");
        printf("\n1 - Create binary tree\n");
        printf("2 - Inorder Traversal\n");
        printf("3 - Preorder Traversal\n");
        printf("4 - Postorder Traversal\n");
        printf("5 - Search\n");
        printf("6 - Find Smallest Element\n");
        printf("7 - Find Largest Element\n");
        printf("8 - Deletion of tree\n");
        printf("9 - Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d", &ch_bst_538);
        switch(ch_bst_538)
        {
            case 1: printf("\nEnter the number of elements: ");
                    scanf("%d", &n_bst_538);
                    for(i_bst_538=1;i_bst_538<=n_bst_538;i_bst_538++)
                    {
                        newnode_bst_538 = create_bst_538();
                        if (root_bst_538 == NULL)
                        root_bst_538 = newnode_bst_538;
                        else
                            insert_bst_538(root_bst_538, newnode_bst_538);
                    }
                    break;
            case 2: if (root_bst_538 == NULL)
                        printf("\nTree Is Not Created");
                    else
                        printf("\nThe Inorder display : ");
                        inorder_bst_538(root_bst_538);
                    break;
            case 3: if (root_bst_538 == NULL)
                        printf("\nTree Is Not Created");
                    else
                        printf("\nThe Preorder display : ");
                        preorder_bst_538(root_bst_538);
                    break;
            case 4: if (root_bst_538 == NULL)
                        printf("\nTree Is Not Created");
                    else
                        printf("\nThe Postorder display : ");
                        postorder_bst_538(root_bst_538);
                    break;
            case 5: search_bst_538(root_bst_538);
                    break;
            case 6: smallest_bst_538(root_bst_538);
                    break;
            case 7: largest_bst_538(root_bst_538);
                    break;
            case 8: delete1_bst_538(root_bst_538);
                    break;
            case 9: exit(0);
        }
    }
}