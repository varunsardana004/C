void reduceSequence(char *str, char ch)
{
  int len;
 for(len=0; *(str+len)!='\0'; len++);
   int len1=0;
for(int i=0;i<len-len1;)
{
  if(*(str+i)==ch && *(str+i+1)==ch)
  {
    for(int j=i;j<(len-len1);j++)
    {
      *(str+j)=*(str+j+1);
    }
    len1++;
  }
  else
  {
    i++;
  }
}

}
