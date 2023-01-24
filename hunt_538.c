/*Given an array container[] and intefer hunt. WAP to find whether hunt is present 
    in container[] or not . If present then triple the calue of hunt and search again.
    Repeat the steps untill hunt is not found. Finally return the value of hunt*/


int main_hunt_538()
{
    int n_hunt_538;
    printf("Enter the size of the array:    ");
    scanf("%d",&n_hunt_538);
    int *a_hunt_538=(int *)malloc(n_hunt_538*sizeof(int));
    printf("Enter the elements of the array:    \n");
    for(int i_hunt_538=0;i_hunt_538<n_hunt_538;i_hunt_538++)
    {
        scanf("%d",&a_hunt_538[i_hunt_538]);
    }
    int hunt_hunt_538; 
    printf("Enter the number you want to hunt \n");
    scanf("%d",&hunt_hunt_538);
    int i_hunt_538=0;
    while(i_hunt_538<n_hunt_538)
    {
        if(a_hunt_538[i_hunt_538]==hunt_hunt_538)
        {
            hunt_hunt_538=hunt_hunt_538*3;
            i_hunt_538=0;
        }
        else
            i_hunt_538++;
    }
    
        printf("Hunt is:  %d  ",hunt_hunt_538);
        return 0;
}