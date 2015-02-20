#include <stdio.h>
#include <stdlib.h>

 int N = 4;

int main(int argc, char** argv) {
    
    int i,cont,a;
  
    int array[N];
    a = 1;
    
    
    printf ("iserisci l'età di %d persone:  \n",N);
    
    for(i=0;i<N;i++){
        
        printf ("iserisci l'età della %da persona:  ",a);
        
        
        scanf ("%d",&(array[i]));
        
        a++;
    }
    
    
    cont = 0;
    
    for (i=0;i<N;i++){
        
        if(array[i]>=18){
            
            
            cont++ ;
        
        }
        
        
        
    }
     printf ("i maggiorenni sono : %d",cont);
    
    return 0;
    return (EXIT_SUCCESS);
}

