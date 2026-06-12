#include "grains.h"
#include "assert.h"
uint64_t square(uint8_t n){
   if(n==0 || n>64){
       return 0;
   }
       return 1ULL<<(n-1);
}
uint64_t total(void){
    uint64_t sum=0;
    for(int i=1;i<=64;i++){
        sum=sum+square(i);
    }
    return sum;
}