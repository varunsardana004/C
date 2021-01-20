int isAnagram(char *str1, char* str2)
{
  int k=0,count1=0,l=0,count2=0;
  while(*(str1+k)!='\0')
  {
    count1++;
    k++;
  }
  while(*(str2+l)!='\0')
  {
    count2++;
    l++;
  }
  if(count1==count2){
for(int i=0;i<count1;i++)
{
  for(int j=i+1;j<count1;j++){
    if(*(str1+i) > *(str1+j))
    {
      char temp = *(str1+i);
      *(str1+i) = *(str1+j);
      *(str1+j) = temp;
    }
  }
}
  for(int i=0;i<count2;i++)
{
  for(int j=i+1;j<count2;j++){
    if(*(str2+i) > *(str2+j))
    {
      char temp = *(str2+i);
      *(str2+i) = *(str2+j);
      *(str2+j) = temp;
    }
  }
}
  
  for(int i=0;i<count1;i++)
  {
    if(*(str1+i) != *(str2+i))
    {
      return 0;
    }
  }
  return 1;
  }
  else
  {
    return 0;
  }
  
 
}
