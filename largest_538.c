//WAP to Find Largest Element in an Array using Recursion.

void input_largest_538(int *p_largest_538,int n_largest_538)
{
for(int i_largest_538=0;i_largest_538<n_largest_538;i_largest_538++)
{
scanf("%d",&p_largest_538[i_largest_538]);
}
}
int large_largest_538(int *p_largest_538,int n_largest_538,int b_largest_538)
{
if(n_largest_538<0)
return b_largest_538;
else
{
if(b_largest_538 < *p_largest_538)
b_largest_538 = *p_largest_538;
large_largest_538(++p_largest_538,--n_largest_538,b_largest_538);
}
}
void main_largest_538()
{
int n_largest_538;
int *arr_largest_538;
printf("Enter the length of array ");
scanf("%d",&n_largest_538);
arr_largest_538=(int *) malloc((n_largest_538) * sizeof(int));
printf("Enter the elements of the array \n");
input_largest_538(arr_largest_538,n_largest_538);
printf("The largest element of the array is %d \n",large_largest_538(arr_largest_538,n_largest_538-1,arr_largest_538[0]));
}