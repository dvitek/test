int f(int *p);
int g(int *q)
{
  //return f(q);
  return *q;
}
