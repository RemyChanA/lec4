#include <stdio.h>
#include <stdlib.h>
#define size 8

enum arr_state {unsorted,duringsorting,sorted}a_s;

int main()
{
   int remy[size]={5,3,4,1,3,2,0,2};
   int *sorter,plate;

   sorter = remy;

   a_s = unsorted;
   if(a_s==0)
   {
       printf("\n array is unsorted \n");
   }

    printf("\n");

   for(int i=0;i<size-1;i++)
   {
       for(int j=0;j<((sizeof(remy)/sizeof(int))-i);j++)
       {
           if (*sorter > *(sorter+1))
           {
                plate = *sorter;
                *sorter  = *(sorter +1);
                *(sorter +1) = plate;
           }
           sorter++;
       }
       sorter = remy;
       for(int x=0 ;x<size;x++)
       {
          printf(" %i",sorter[x]);
       }
       a_s=duringsorting;
       if(a_s==1)
       {
            printf("\n array is still sorting........");
       }
       printf("\n");
   }
    printf("\n");
   a_s=sorted;
   if(a_s==2)
   {
      printf("\n array sorted \n");
   }

   sorter = remy;
   for(int k=0;k<size;k++)
    {

       printf(" %i ",sorter[k]);
    }
    return 0;
}
