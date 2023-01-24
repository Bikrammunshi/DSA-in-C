//WAP to calculate the distance between two elements in an array.
void main_diff_in_array_538()
{
    int i_diff_in_array,x_diff_in_array,y_diff_in_array,n_diff_in_array,j_diff_in_array,r_diff_in_array;
    printf("Enter the size: \n");
    scanf("%d",&n_diff_in_array);
    int a_diff_in_array[n_diff_in_array];
    printf("Enter the elements: \n");
    for(i_diff_in_array=0;i_diff_in_array<n_diff_in_array;i_diff_in_array++)
    {
        scanf("%d",&a_diff_in_array[i_diff_in_array]);
    }
    printf("Enter the numbers: \n");
    scanf("%d %d",&x_diff_in_array,&y_diff_in_array);
    for(i_diff_in_array=0;i_diff_in_array<n_diff_in_array;i_diff_in_array++)
    {
       for(j_diff_in_array=i_diff_in_array+1;j_diff_in_array<n_diff_in_array;j_diff_in_array++)
       {
        if((x_diff_in_array==a_diff_in_array[i_diff_in_array] && y_diff_in_array==a_diff_in_array[j_diff_in_array] || y_diff_in_array==a_diff_in_array[i_diff_in_array] && x_diff_in_array==a_diff_in_array[j_diff_in_array]) && r_diff_in_array>abs(i_diff_in_array-j_diff_in_array))
        {
            r_diff_in_array=abs(i_diff_in_array-j_diff_in_array);
        }
       }
    }
    
    if(r_diff_in_array>n_diff_in_array)
        printf("Mim distance is -1");
    else
        printf("Mim distance is %d",r_diff_in_array);
}