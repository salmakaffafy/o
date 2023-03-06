#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

#include <stdio.h>


#include <stdlib.h>


#include <limits.h>


#include <stdbool.h>


#include <math.h>


#define MAX_SIZE 1000






float calculateDev(float d[])


{


    float sum = 0.0, mean, Dev = 0.0;


    int i,n;


    for (i=0; i<n; ++i)


    {


        sum += d[i];


    }


    


    mean = sum / n;


    for (i=0; i<n; ++i)


    {


        Dev += pow(d[i] - mean, 2);


    }


    return sqrt(Dev/n);


}




int main()


{


    int i,n;


    float d[n], sum = 0.0, average;


    


    int arr[MAX_SIZE];


    int max, min, size;


    


    printf("Enter size of the array: ");


    scanf("%d", &size);


    printf("Enter elements in the array: ");


        for(i=0; i<size; i++)


        {


            scanf("%d", &arr[i]);


        }


    


    max = arr[0];


    min = arr[0];


    


    for(i=1; i<size; i++)


        {


            


            if(arr[i] > max)


            {


                max = arr[i];


            }




            if(arr[i] < min)


            {


                min = arr[i];


            }


        }


    for(i=1; i<size; i++)


    {


        sum+= arr[i];


    }


    


    float avg = sum/size;


    printf("Maximum element = %d\n", max);


    printf("Minimum element = %d", min);


    printf("The average of the array elements: %f",avg);


    


    printf("Please enter the numbers you would like to make the calculations for");


    for (i = 0; i < n; ++i){


    scanf("%f", &d[i]);


    }


    


    printf("Deviation = %.6f" , calculateDev(d));


    exit();


}





