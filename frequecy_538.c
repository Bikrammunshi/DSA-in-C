//WAP using function to find frequency of occurrence of numbers in an array.

void input_frequecy_538(int *p_frequecy_538,int n_frequecy_538)
{
for(int i_frequecy_538=0;i_frequecy_538<n_frequecy_538;i_frequecy_538++)
{
scanf("%d",&p_frequecy_538[i_frequecy_538]);
}
}
int freq_frequecy_538(int *p_frequecy_538,int n_frequecy_538,int c_frequecy_538,int d_frequecy_538)
{
if(n_frequecy_538<0)
return c_frequecy_538;
else
{
if(d_frequecy_538==*p_frequecy_538)
c_frequecy_538++;
freq_frequecy_538(++p_frequecy_538,--n_frequecy_538,c_frequecy_538,d_frequecy_538);
}
}
void main_frequecy_538()
{
int n_frequecy_538;
int *arr_frequecy_538;
printf("Enter the length of array ");
scanf("%d",&n_frequecy_538);
arr_frequecy_538=(int *) malloc((n_frequecy_538) * sizeof(int));
printf("Enter the elements of the array \n");
input_frequecy_538(arr_frequecy_538,n_frequecy_538);
printf("The of the elements of the array are \n");
for(int i_frequecy_538=0;i_frequecy_538<n_frequecy_538;i_frequecy_538++)
{
printf("%d \t %d \n",*(arr_frequecy_538+i_frequecy_538),freq_frequecy_538(arr_frequecy_538,n_frequecy_538,0,arr_frequecy_538[i_frequecy_538]));
}
}
