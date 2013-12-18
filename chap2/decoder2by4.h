/**
 * @file decoder2by4.h
 * @brief 
 * @author Yuebing Jiang
 * @version 0
 * @date Tue 17 Dec 2013 04:31:05 PM PST
 */
#ifndef _DECODER2BY4_H_
#define _DECODER2BY4_H_
    #include "systemc.h"
    SC_MODULE(decoder2by4){
        sc_in<bool> enable;
        sc_in<sc_unit<2> > select;
        sc_out<sc_unit<4> > z;
        void prc_decoder2by4();
        SC_CTOR(decoder2by4){
            SC_METHOD(prc_decoder2by4);
            sensitive(enable,select);
        }
    };
#endif
