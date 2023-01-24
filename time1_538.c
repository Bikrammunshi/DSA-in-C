//Calculate the difference b_time1_538etween two time periods using structure


struct zone_time1_538
{
    int sec_time1_538;
    int min_time1_538;
    int hour_time1_538;
};
typedef struct zone_time1_538 time_time1_538;

time_time1_538 diff_time1_538(time_time1_538 t1_time1_538,time_time1_538 t2_time1_538)
{
    t1_time1_538.sec_time1_538=(abs)(t1_time1_538.sec_time1_538-t2_time1_538.sec_time1_538);
    t1_time1_538.min_time1_538=(abs)(t1_time1_538.min_time1_538-t2_time1_538.min_time1_538);
    t1_time1_538.hour_time1_538=(abs)(t1_time1_538.hour_time1_538-t2_time1_538.hour_time1_538);

    return t1_time1_538;

}

void main_time1_538()
{
    time_time1_538 a_time1_538,b_time1_538;
    printf("For first time zone\n");
    printf("Enter the seconds: ");
    scanf("%d",&a_time1_538.sec_time1_538);
    printf("Enter the minutes: ");
    scanf("%d",&a_time1_538.min_time1_538);
    printf("Enter the hour: ");
    scanf("%d",&a_time1_538.hour_time1_538);

    printf("For second time zone\n");
    printf("Enter the seconds: ");
    scanf("%d",&b_time1_538.sec_time1_538);
    printf("Enter the minutes: ");
    scanf("%d",&b_time1_538.min_time1_538);
    printf("Enter the hour: ");
    scanf("%d",&b_time1_538.hour_time1_538);

    time_time1_538 res_time1_538;
    res_time1_538=diff_time1_538(a_time1_538,b_time1_538);

    printf("After difference\n");
    printf("Hour: %d \n",res_time1_538.hour_time1_538);
    printf("Minutes: %d \n",res_time1_538.min_time1_538);
    printf("Seconds: %d \n",res_time1_538.sec_time1_538);
}

