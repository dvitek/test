int f(const int *p);
int g(int *q)
{
  return f(q);
  //return *q;
}
