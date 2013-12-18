/**
 * @file half_adder.h
 * @brief 
 * @author Yuebing Jiang
 * @version 0
 * @date Tue 17 Dec 2013 04:27:17 PM PST
 */

    #include "systemc.h"
    SC_MODULE(half_adder){
        sc_in<bool> a,b;
        sc_out<bool> sum,carry;
        void prc_half_adder();
        SC_CTOR(half_adder){
            SC_METHOD(prc_half_adder);
            sensitive<<a<<b;
        }
    };


