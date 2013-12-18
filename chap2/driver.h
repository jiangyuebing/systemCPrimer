/**
 * @file driver.h
 * @brief 
 * @author Yuebing Jiang
 * @version 0
 * @date Tue 17 Dec 2013 05:00:32 PM PST
 */
#include "systemc.h"
SC_MODULE(driver){
    sc_out<bool> d_a,d_b,d_cin;
    void prc_driver();
    SC_CTOR(driver){
        SC_THREAD(prc_driver);
    }
};
