int f(int)
int main
  {
  return f(1)
  }
int f(int n)
  {
  int fact=1;
  if(n>1)
    {
    for(int i=n;i>1;i--)
      {
      fact*=i;
      }
    }
  return(fact);
  }
