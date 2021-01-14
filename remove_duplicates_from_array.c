void removeDuplicates(int *arr, int *size)
{
  int ar[*size],j=0;
  for(int i=0;i<*size;i++)
  {
   if(*(arr+i)!=*(arr+i+1))
   {
     ar[j++]=*(arr+i);
   }
  }
  for(int i=0;i<j;i++)
  {
    *(arr+i)=ar[i];
  }
  *size=j;
  return arr;
}
