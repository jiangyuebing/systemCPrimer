/**
 * @file driver.cpp
 * @brief 
 * @author Yuebing Jiang
 * @version 0
 * @date Tue 17 Dec 2013 05:02:12 PM PST
 */
#include "driver.h"
void driver::prc_driver(){
    sc_uint<3> pattern;
    pattern=0;
    while(1){
        d_a=pattern[0];
        d_b=pattern[1];
        d_cin=pattern[2];
        wait(5,SC_NS);
        pattern++;
    }
}
