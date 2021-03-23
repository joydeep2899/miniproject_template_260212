/**
 * @file calculator_complex.h
 * @author joydeep (260212)
 * @brief 
 * @version 0.1
 * @date 2021-03-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */




/**
 * @brief error values for calculator 
 * 
 */

typedef enum error_t{
 ERROR_DIV_BY_ZERO = -2, 
    ERROR_NULL_PTR = -1,   
    SUCCESS = 0  



}error_t;


/**
 * @brief structure for complex number 
 */





typedef struct complex_t{

    
 float real;
 float img;




}complex_t;


/**
 * @brief funtion to calculate sum 
 * 
 * @param num1 
 * @param num2 
 * @param sum 
 * @return error_t 
 */



error_t sum(complex_t *num1, complex_t *num2,complex_t *sum );

   
    



