void reverseString (char str[])
{

  int j=0,count=0;
  while(str[j]!='\0')
  {
    count++;
    j++;
  }
  int n=count;
   char str2[n];
  for(int i=0;str[i]!='\0';i++)
  {
    str2[i]=str[count-1];
    count--;
  }
 for(int i=0;i<n;i++)
 {
   str[i]=str2[i];
 }
  
}
