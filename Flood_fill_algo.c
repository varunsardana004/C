/* M, N are defined as 50.
R,C denotes actual screen size, x,y are the co-ordinates of the pixel and newC is the new color value */
void floodFill(int screen[][N], int R, int C, int x, int y, int newC)
{
fourDirectionTraversal(screen,R,C,x,y,newC,screen[x][y]);
}
void fourDirectionTraversal(int a[][N], int r, int c, int x, int y, int newC, int temp)
{
  if(x>=r || x<0 || y<0 || y>=c || a[x][y]!=temp) return;
  a[x][y]=newC;
  fourDirectionTraversal(a,r,c,x-1,y,newC,temp);
  fourDirectionTraversal(a,r,c,x+1,y,newC,temp);
  fourDirectionTraversal(a,r,c,x,y-1,newC,temp);
  fourDirectionTraversal(a,r,c,x,y+1,newC,temp);
}
