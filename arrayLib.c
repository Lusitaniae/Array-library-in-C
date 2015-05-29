#include<stdio.h>

// Sum all array values
arraySum( int vect[], int num)
{
      int i, sum = 0;

      for(i = 0; i < num; i++)
           sum += vect[i];

      return(sum); 
}
//Avarage of array values
arrayAvg( int sum, int num)
{
       int i, avg = 0;
       avg = sum/num;

       return(avg);
}
//Smaller array value
arraySmallest( int vect[], int num)
{
       int i, smaller = vect[0];
       for(i = 0; i < num; i++)
           if(vect[i] < menor)
                menor=vect[i];

       return(menor);
}
//Above avg # array values
arrayAboveAvg(int vect[], int num, int avg)
{
        int i, value = 0;
        for(i = 0; i < num; i++)
              if(vect[i] > avg)
                value++;

        return(value);
}               
      
main() {
     int vect[10], i, sum;
     for (i = 0; i < 10; i++)
     {
         printf("Insert Value %d:", i+1);
         scanf("%d", &vect[i]);  
     } 

     printf("\n Array Sum: %d", arraySum(vect, 10) );
     printf("\n Array average: %d", arrayAvg(sum, 10) );
     printf("\n Array Smallest: %d", arraySmallest(vect, 10) );
     printf("\n %d above avg elements.", arrayAboveAvg(vect, 10, arrayAvg(sum,10)) );
     getch();
}