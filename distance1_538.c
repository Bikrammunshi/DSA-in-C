//WAP  to add two distances by passing structures to a funtion


typedef struct dist_distance1_538
{
  int km_distance1_538;
  int mn_distance1_538;
} dist_distance1_538;
dist_distance1_538 add (dist_distance1_538 n1_distance1_538, dist_distance1_538 n2_distance1_538)
{
  dist_distance1_538 total_distance1_538;
  total_distance1_538.km_distance1_538 = n1_distance1_538.km_distance1_538 + n2_distance1_538.km_distance1_538;
  total_distance1_538.mn_distance1_538 = n1_distance1_538.mn_distance1_538 + n2_distance1_538.mn_distance1_538;
  
  if(total_distance1_538.mn_distance1_538>1000)
  {
      total_distance1_538.km_distance1_538= total_distance1_538.km_distance1_538 + 1;
      total_distance1_538.mn_distance1_538= total_distance1_538.mn_distance1_538-1000;
  }
  return (total_distance1_538);
}

int main_distance1_538()
{
  dist_distance1_538 n1_distance1_538, n2_distance1_538, result_distance1_538;

  printf ("For 1st distance: \n");
  printf ("Enter the kilometers and meters covered: ");
  scanf ("%d %d", &n1_distance1_538.km_distance1_538, &n1_distance1_538.mn_distance1_538);
  printf ("\nFor 2nd distance: \n");
  printf ("Enter the kilometers and meters covered: ");
  scanf ("%d %d", &n2_distance1_538.km_distance1_538, &n2_distance1_538.mn_distance1_538);

  result_distance1_538 = add (n1_distance1_538, n2_distance1_538);

  printf ("\nThe total distance is: %d Kilometers and %d Meters", result_distance1_538.km_distance1_538, result_distance1_538.mn_distance1_538);
  return 0;
}

