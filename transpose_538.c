//WAP to find the transpose of a matrix.

void input_transpose_538(int *p_transpose_538,int r_transpose_538,int c_transpose_538)
{
for(int i_transpose_538=0;i_transpose_538<r_transpose_538;i_transpose_538++)
{
for(int j_transpose_538=0;j_transpose_538<c_transpose_538;j_transpose_538++)
scanf("%d",&p_transpose_538[i_transpose_538*c_transpose_538+j_transpose_538]);
}
}
void trans_transpose_538(int *p_transpose_538,int r_transpose_538,int c_transpose_538)
{
for(int i_transpose_538=0;i_transpose_538<r_transpose_538-1;i_transpose_538++)
{
for(int j_transpose_538=0;j_transpose_538<c_transpose_538;j_transpose_538++)
{
int temp_transpose_538=p_transpose_538[i_transpose_538+(j_transpose_538*c_transpose_538)];
p_transpose_538[i_transpose_538+(j_transpose_538*c_transpose_538)]=p_transpose_538[i_transpose_538+j_transpose_538];
p_transpose_538[i_transpose_538+j_transpose_538]=temp_transpose_538;
}
}
}
void display_transpose_538(int *p_transpose_538,int r_transpose_538,int c_transpose_538)
{
for(int i_transpose_538=0;i_transpose_538<r_transpose_538;i_transpose_538++)
{
for(int j_transpose_538=0;j_transpose_538<c_transpose_538;j_transpose_538++)
printf("%d",p_transpose_538[i_transpose_538*c_transpose_538+j_transpose_538]);
printf("\n");
}
}
void main_transpose_538()
{
int row_transpose_538, col_transpose_538;
int *arr_transpose_538;
printf("Enter the number of rows: ");
scanf("%d",&row_transpose_538);
printf("Enter the number of columns: ");
scanf("%d",&col_transpose_538);
arr_transpose_538=(int *) malloc((row_transpose_538*col_transpose_538) * sizeof(int));
printf("Enter the elements of the matrix \n");
input_transpose_538(arr_transpose_538,row_transpose_538,col_transpose_538);
display_transpose_538(arr_transpose_538,row_transpose_538,col_transpose_538);
printf("The original matrix \n");
trans_transpose_538(arr_transpose_538,row_transpose_538,col_transpose_538);
printf("The transpose of the matrix \n");
display_transpose_538(arr_transpose_538,row_transpose_538,col_transpose_538);
}