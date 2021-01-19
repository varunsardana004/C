int countWords(char str[]) 
{
   int count=0;
  int i=0;
   int OUT = 0; 
   int IN = 1; 
  int state=OUT;
  
  while(str[i])
  {
    if(str[i]==' '||str[i]=='\n'||str[i]=='\t')
    {
      state=OUT;
    }
  else if (state == OUT) 
            { 
                state = IN; 
                ++count; 
            }
    i++;
  }
  return count;
}
