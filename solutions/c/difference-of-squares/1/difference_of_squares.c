#include "difference_of_squares.h"
unsigned int sum_of_squares(unsigned int n)
{
    unsigned int sos=0;
    while(n!=0){
        sos=sos+(n*n);
        n--;
    }
    return sos;
}
unsigned int square_of_sum(unsigned int n)
{
    unsigned int sos=0;
    while(n!=0){
        sos=sos+n;
        n--;
    }
    return sos*sos; 
}
unsigned int difference_of_squares(unsigned int n){
 unsigned int diff=square_of_sum(n)-sum_of_squares(n);
    return diff;
}
    
