#include <stdio.h>


void main(void)
{

    int N = 10;
    int arr[] = {1,2,3,4,44,39,74,8,7,9};
    int aux[sizeof(arr)];
    int aux_index = 0;
   
    for(int i = 0 ; i < N; i++)
    {
        int current = arr[i];
        for(int j = i+1 ; j < N; j++)
        {
            if(arr[j] == current)
            {
                aux[aux_index] = current;
                aux_index++;
            }
        }
    }
        
        if(aux_index != 0)
        {
         for(int i = 0 ; i < N; i++)
             printf("%d , ",aux[i]);
        }
        else printf("%d",-1);

    return;    

}