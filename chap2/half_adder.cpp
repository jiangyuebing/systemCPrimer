/**
 * @file half_adder.cpp
 * @brief 
 * @author Yuebing Jiang
 * @version 0
 * @date Tue 17 Dec 2013 04:29:14 PM PST
 */

#include "half_adder.h"
void half_adder::prc_half_adder(){
    sum=a^b;
    carry=a&b;
}
