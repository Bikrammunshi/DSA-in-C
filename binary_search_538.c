//wap to read an array of integers and search for an element using binary search
void Sort_binary_search_538(int *arr_binary_search_538,int n_binary_search_538)
{
    for(int i_binary_search_538=0;i_binary_search_538<n_binary_search_538-1;i_binary_search_538++)
    {
        for(int i_binary_search_538=i_binary_search_538;i_binary_search_538<n_binary_search_538;i_binary_search_538++)
        {
            if(arr_binary_search_538[i_binary_search_538]<arr_binary_search_538[i_binary_search_538])
            {
                int temp=arr_binary_search_538[i_binary_search_538];
                arr_binary_search_538[i_binary_search_538]=arr_binary_search_538[i_binary_search_538];
                arr_binary_search_538[i_binary_search_538]=temp;
            }
        }
    }
}
int search_binary_search_538(int *arr_binary_search_538,int key_binary_search_538,int low_binary_search_538,int high_binary_search_538)
{
    if(low_binary_search_538>high_binary_search_538)
        return 0;
    else
    {
        int mid_binary_search_538=(low_binary_search_538+high_binary_search_538)/2;
        if(key_binary_search_538=arr_binary_search_538[mid_binary_search_538])
            return 1;
        else if(key_binary_search_538>arr_binary_search_538[mid_binary_search_538])
            return search_binary_search_538(arr_binary_search_538,key_binary_search_538,mid_binary_search_538+1,high_binary_search_538);
        else  
            return search_binary_search_538(arr_binary_search_538,key_binary_search_538,low_binary_search_538,mid_binary_search_538-1);
    }
    
}
int main_binary_search_538()
{
    int n_binary_search_538;
    printf("Enter the size of the array:    ");
    scanf("%d",&n_binary_search_538);
    int *a_binary_search_538=(int *)malloc(n_binary_search_538*sizeof(int));
    printf("Enter the elements of the array:    \n");
    for(int i_binary_search_538=0;i_binary_search_538<n_binary_search_538;i_binary_search_538++)
    {
        scanf("%d",&a_binary_search_538[i_binary_search_538]);
    }
    int find_binary_search_538; int count_binary_search_538=0;
   Sort_binary_search_538(a_binary_search_538,n_binary_search_538);
    printf("Enter the element you want to search: \n");
    int key_binary_search_538;
    scanf("%d",&n_binary_search_538);
    if(search_binary_search_538(a_binary_search_538,key_binary_search_538,0,n_binary_search_538-1)==1)
        printf("The element is found in the array");
    else    
        printf("The element is not found in the array");
    
    return 0;
}