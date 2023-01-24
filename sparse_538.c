//WAP to check whether the given matrix is sparse matrix or not
 
void input_sparse_538(int *ptr_sparse_538,int n_sparse_538)
{
    for(int i_sparse_538=0;i_sparse_538<(n_sparse_538*n_sparse_538);i_sparse_538++)
    {
        
            scanf("%d",&ptr_sparse_538[i_sparse_538]);
    }
}

void display_sparse_538(int *ptr_sparse_538,int n_sparse_538)
{
    for(int i_sparse_538=0;i_sparse_538<(n_sparse_538*n_sparse_538);i_sparse_538++)
    {
       printf("%d ",ptr_sparse_538[i_sparse_538]);
       if((i_sparse_538+1)%n_sparse_538==0)
        printf("\n");
    }

}

void sparse_sparse_538(int *ptr_sparse_538,int n_sparse_538)
{
    int count_sparse_538=0;
    for(int i_sparse_538=0;i_sparse_538<(n_sparse_538*n_sparse_538);i_sparse_538++)
    {
            if(ptr_sparse_538[i_sparse_538]==0)
                count_sparse_538 ++;
    }

    if(count_sparse_538>((n_sparse_538*n_sparse_538)/2))
        printf("\n The matrix is a sparse matrix");
    else
        printf("The matrix is not a sparse matrix");
}


void main_sparse_538()
{
    int n_sparse_538;
    printf("Enter the size of the matrix: ");
    scanf("%d",&n_sparse_538);

    int *p_sparse_538;
    p_sparse_538=(int *) malloc((n_sparse_538*n_sparse_538) * sizeof(int));
    printf("Enter the elements of the matrix \n");
    input_sparse_538(p_sparse_538,n_sparse_538);

    printf("The matrix is \n ");
    display_sparse_538(p_sparse_538,n_sparse_538);

    sparse_sparse_538(p_sparse_538,n_sparse_538);
}