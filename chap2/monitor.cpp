/**
 * @file monitor.cpp
 * @brief 
 * @author Yuebing Jiang
 * @version 0
 * @date Tue 17 Dec 2013 05:07:51 PM PST
 */

#include "monitor.h"
void monitor::prc_monitor(){
    cout<<"At time"<<sc_time_stamp()<<"::";
    cout<<"(a,b,carry): ";
    cout<<m_a<<m_b<<m_cin;
    cout<<" (sum,carry_out):"<<m_sum<<m_cout<<endl;
}
