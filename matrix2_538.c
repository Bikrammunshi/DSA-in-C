//WAP to determine whether the given matrix is a lower
//triangular or upper triangular or tri-diagonal matrix.

void arr_matrix2_538(int n_matrix2_538,int a[n_matrix2_538][n_matrix2_538])
{
for(int i_matrix2_538=0;i_matrix2_538<n_matrix2_538;i_matrix2_538++)
{
for(int j_matrix2_538=0;j_matrix2_538<n_matrix2_538;j_matrix2_538++)
scanf("%d",&a[i_matrix2_538][j_matrix2_538]);
}
}
void output(int n_matrix2_538,int a[n_matrix2_538][n_matrix2_538])
{
for(int i_matrix2_538=0;i_matrix2_538<n_matrix2_538;i_matrix2_538++)
{
for(int j_matrix2_538=0;j_matrix2_538<n_matrix2_538;j_matrix2_538++)
printf("%d ",a[i_matrix2_538][j_matrix2_538]);
printf("\n");
}
}
int lower(int n_matrix2_538,int a[n_matrix2_538][n_matrix2_538])
{
int i_matrix2_538, j_matrix2_538;
for (i_matrix2_538 = 0; i_matrix2_538 < n_matrix2_538 - 1; i_matrix2_538++)
for (j_matrix2_538 = i_matrix2_538 + 1; j_matrix2_538 < n_matrix2_538; j_matrix2_538++)
if (a[i_matrix2_538][j_matrix2_538] != 0)
return 1;
}
int upper(int n_matrix2_538,int a[n_matrix2_538][n_matrix2_538])
{
int i_matrix2_538, j_matrix2_538;
for (i_matrix2_538 = 0; i_matrix2_538 < n_matrix2_538; i_matrix2_538++)
for (j_matrix2_538 = 0; j_matrix2_538 < i_matrix2_538 - 1; j_matrix2_538++)
if (a[i_matrix2_538][j_matrix2_538] != 0)
return 1;
return 0;
}
int tri(int n_matrix2_538,int a[n_matrix2_538][n_matrix2_538])
{
int i_matrix2_538, j_matrix2_538;
for (i_matrix2_538 = 0; i_matrix2_538 < n_matrix2_538; i_matrix2_538++)
for (j_matrix2_538 = i_matrix2_538 + 2; j_matrix2_538 < n_matrix2_538; j_matrix2_538++)
if (a[i_matrix2_538][j_matrix2_538] != 0)
return 1;
for (i_matrix2_538 = 1; i_matrix2_538 < n_matrix2_538; i_matrix2_538++)
for (j_matrix2_538 = 0; j_matrix2_538 < i_matrix2_538 - 1; j_matrix2_538++)
if (a[i_matrix2_538][j_matrix2_538] != 0)
return 1;
return 0;
}
void main_matrix2_538()
{
int n_matrix2_538;
printf("Enter the length of sqaure matrix ");
scanf("%d",&n_matrix2_538);
int arr[n_matrix2_538][n_matrix2_538];
printf("Enter the elements of the array \n");
arr_matrix2_538(n_matrix2_538,arr);
printf("The matrix is \n");
output(n_matrix2_538,arr);
if(lower(n_matrix2_538,arr)==1)
printf("The matrix is upper triangular matrix");
else if(upper(n_matrix2_538,arr)==1)
printf("The matri is lower triangular matrix");
else if(tri(n_matrix2_538,arr)==1)
printf("The matrix is tri-diagonal matrix");
else
printf("The matrix is neither lower triangular neither upper triangular nor tri diagonal matrix");
}