#include <stdlib.h>
#include "calculator_complex.h"

error_t sum(complex_t *num1,complex_t *num2,complex_t *sum){

 if(num1==NULL || num2==NULL){
     return ERROR_NULL_PTR;
 }

 sum->real=num1->real+num2->real;
 sum->img= num1->img+num2->img;

 return SUCCESS;
 

}