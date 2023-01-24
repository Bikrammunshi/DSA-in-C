/*  WAP    to find the following using user defined functions
1. the number of nonzero elements in the given matrix
2. the sum of element above the leading diagonal
3. the elements below the minor diagonal
4. the product of the diagonal elements
*/


void count_matrix1_538(int n_matrix1,int arr_matrix1[n_matrix1][n_matrix1] )
{
    int c_matrix1=0;
    for(int i_matrix1=0;i_matrix1<n_matrix1;i_matrix1++)
        for(int j_matrix1=0;j_matrix1<n_matrix1;j_matrix1++)
            if(arr_matrix1[i_matrix1][j_matrix1]!=0)
                c_matrix1++;
    
    printf("The number of non zero elements in the matrix is %d \n",c_matrix1);
}

void sum_matrix1_538(int n_matrix1,int arr_matrix1[n_matrix1][n_matrix1] )
{
    int s_matrix1=0;
    for(int i_matrix1=0;i_matrix1<n_matrix1;i_matrix1++)
        for(int j_matrix1=0;j_matrix1<n_matrix1;j_matrix1++)
            if(j_matrix1>i_matrix1)
               s_matrix1=s_matrix1+arr_matrix1[j_matrix1][i_matrix1];

    printf("THe sum of element above the leading diagonal is %d \n",s_matrix1);
}

void element_matrix1_538(int n_matrix1,int arr_matrix1[n_matrix1][n_matrix1] )
{
    printf("The elements below the lower diagonal are as  follows \n");
    for(int i_matrix1=0;i_matrix1<n_matrix1;i_matrix1++)
    {
        for(int j_matrix1=0;j_matrix1<=n_matrix1-1-i_matrix1;j_matrix1++)
        {
            printf("  ");
        }
        for(int j_matrix1=n_matrix1-1;j_matrix1>n_matrix1-i_matrix1-1;j_matrix1--)
        {
            printf("%d ",arr_matrix1[i_matrix1][j_matrix1]);
        }
        printf("\n");
    }
}

void product_matrix1_538(int n_matrix1,int arr_matrix1[n_matrix1][n_matrix1] )
{
    int p_matrix1=1;
    for(int i_matrix1=0;i_matrix1<n_matrix1;i_matrix1++)
        for(int j_matrix1=0;j_matrix1<n_matrix1;j_matrix1++)
            if(i_matrix1==j_matrix1)
                p_matrix1=p_matrix1*arr_matrix1[i_matrix1][j_matrix1];

    for(int i_matrix1=0;i_matrix1<n_matrix1;i_matrix1++)
        for(int j_matrix1=0;j_matrix1<n_matrix1;j_matrix1++)
            if(j_matrix1==(n_matrix1-1-i_matrix1))
                p_matrix1=p_matrix1*arr_matrix1[i_matrix1][j_matrix1];

    printf("The product of the elements of the diagonals is %d \n",p_matrix1);
}

void main_matrix1_538()
{
    int n_matrix1;
    printf("Enter the size of matrix \n");
    scanf("%d",&n_matrix1);

    int a_matrix1[n_matrix1][n_matrix1];

    printf("Enter the elements of matrix a \n");

    for(int i_matrix1=0;i_matrix1<n_matrix1;i_matrix1++)
        for(int j_matrix1=0;j_matrix1<n_matrix1;j_matrix1++)
            scanf("%d",&a_matrix1[i_matrix1][j_matrix1]);

    
    printf("The elements are \n");
    for(int i_matrix1=0;i_matrix1<n_matrix1;i_matrix1++)
     {   for(int j_matrix1=0;j_matrix1<n_matrix1;j_matrix1++)
            printf("%d",a_matrix1[i_matrix1][j_matrix1]);
        printf(" \n");
     }
    
    int k_matrix1;
    printf("Enter 1 to the number of nonzero elements in the given matrix \n ");
    printf("Enter 2 to the sum of element above the leading diagonal \n ");
    printf("Enter 3 the elements below the minor diagonal \n ");
    printf("Enter 4 the product of the diagonal elements \n ");
    scanf("%d",&k_matrix1);

    switch(k_matrix1)
    {
    
    case 1:
    {
        count_matrix1_538(n_matrix1,a_matrix1);
        break;
    }
    case 2:
    {
        sum_matrix1_538(n_matrix1,a_matrix1);
        break;
    }
    case 3:
    {
        element_matrix1_538(n_matrix1,a_matrix1);
        break;
    }
    case 4:
    {
        product_matrix1_538(n_matrix1,a_matrix1);
        break;
    }
    default:
        printf("Wrong option");
    }
}
