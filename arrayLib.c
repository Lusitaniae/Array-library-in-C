#include<stdio.h>

// Sum all array values
int arraySum( int vect[], int num)
{
      int i, sum = 0;

      for(i = 0; i < num; i++)
           sum += vect[i];

      return(sum); 
}
//Avarage of array values
float arrayAvg( int sum, int num)
{
       return(sum/num);
}
//Smaller array value
arraySmallest( int vect[], int num)
{
       int i, smallest = vect[0];
       for(i = 0; i < num; i++)
           if(vect[i] < smallest)
                smallest = vect[i];

       return(smallest);
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
         printf("Insert Value #%d: ", i+1);
         scanf("%d", &vect[i]);  
     } 

     printf("\n Array Sum: %d", arraySum(vect, 10) );
     printf("\n Array average: %.1f", arrayAvg(arraySum(vect, 10), 10) );
     printf("\n Array Smallest: %d", arraySmallest(vect, 10) );
     printf("\n Above average #%d\n", arrayAboveAvg(vect, 10, arrayAvg(sum,10)) );
     getchar();
}
