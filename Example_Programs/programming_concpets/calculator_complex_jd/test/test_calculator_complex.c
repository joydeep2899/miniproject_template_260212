#include "calculator_complex.h"
#include "unity.h"


static complex_t c1 = {0, 0};
static complex_t c2 = {0, 0};
static complex_t result = {0, 0};

void setUp(){}
void tearDown(){}

void test_zero(void ){


    c1.real=0;
    c1.img=0;

    c2.real=0;
    c2.img=0;
    
    TEST_ASSERT_EQUAL(SUCCESS,sum(&c1,&c2,&result));
    TEST_ASSERT_EQUAL(0,result.real);

    TEST_ASSERT_EQUAL(0,result.img);
    

}

void test_positive(void ){

  c1.real=1;
    c1.img=1;

    c2.real=2;
    c2.img=2;

  TEST_ASSERT_EQUAL(SUCCESS,sum(&c1,&c2,&result));
    TEST_ASSERT_EQUAL(3,result.real);

    TEST_ASSERT_EQUAL(3,result.img);
    


}
void test_negative(void ){

  c1.real=3;
    c1.img=4;

    c2.real=-5;
    c2.img=-6;

  TEST_ASSERT_EQUAL(SUCCESS,sum(&c1,&c2,&result));
    TEST_ASSERT_EQUAL(-2,result.real);

    TEST_ASSERT_EQUAL(-2,result.img);
    


}


int main(void ){


//intialise unity
 UNITY_BEGIN();
 
 RUN_TEST(test_zero);

 RUN_TEST(test_positive);

 RUN_TEST(test_negative);
 
 return UNITY_END();
 


}
