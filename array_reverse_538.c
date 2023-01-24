//WAP to reverse the contents of an array of n elements;


void main_array_reverse_538()
{
    int n_array_reverse;
    printf("Enter the value of n \n");
    scanf("%d",&n_array_reverse);

    int a_array_reverse[n_array_reverse];

    printf("Enter the elements of array a \n");

    for(int i_array_reverse=0;i_array_reverse<n_array_reverse;i_array_reverse++)
        scanf("%d",&a_array_reverse[i_array_reverse]);

    int temp_array_reverse=0;
    if(n_array_reverse%2==0)
        for(int i_array_reverse=0;i_array_reverse<n_array_reverse/2;i_array_reverse++)
        {
            for(int j_array_reverse=n_array_reverse-1;j_array_reverse>=n_array_reverse/2;j_array_reverse--)
                {
                    temp_array_reverse=a_array_reverse[i_array_reverse];
                    a_array_reverse[i_array_reverse]=a_array_reverse[j_array_reverse];
                    a_array_reverse[j_array_reverse]=temp_array_reverse;
                    i_array_reverse++;
                }
        }
    else
        for(int i_array_reverse=0;i_array_reverse<n_array_reverse;i_array_reverse++)
        {
        for(int j_array_reverse=n_array_reverse;j_array_reverse>n_array_reverse/2;j_array_reverse--)
                {
                    temp_array_reverse=a_array_reverse[i_array_reverse];
                    a_array_reverse[i_array_reverse]=a_array_reverse[j_array_reverse];
                    a_array_reverse[j_array_reverse]=temp_array_reverse;
                    i_array_reverse++;
                }
        }
    
    printf("The array in reverse order is \n");

    for(int i_array_reverse=0;i_array_reverse<n_array_reverse;i_array_reverse++)
        printf("%d ",a_array_reverse[i_array_reverse]);


}