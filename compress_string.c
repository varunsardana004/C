#include <string.h>
void compressString(char *str)
{
 int j = 0, i = 0;
  int n;
  n=strlen(str);
        while(i < n)
           {
            char curr = str[i];
            int count = 0;
            while(i < n && str[i] == curr){
                i++;
                count++;
            }
            str[j++] = curr;
            if(count != 1)
            {
              str[j++]=(char)(count+'0');
            }
               
        }
       str[j]='\0';
}
