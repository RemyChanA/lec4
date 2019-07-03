#include <stdio.h>
#include <stdlib.h>
#define size 8

int main()
{
    int a[size]={5,4,3,1,5,2,0,8};
    int *p,temp;

    p = a ;


    for(int i=0;i<(size-1);i++)
    {
        for(int j=0;j<=((sizeof(a)/sizeof(int))-2);j++)
        {
            if (*p > *(p+1))
            {
                temp = *p;
                *p = *(p+1);
                *(p+1) = temp;
            }
            p++;
        }
        p = a;
      }


  p=a;
  for(int b=0 ; b<size ; b++)
  {

      printf(" %i \n",p[b]);
  }

    return 0;
}
