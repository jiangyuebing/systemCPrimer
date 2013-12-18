#include "driver.h"
#include "monitor.h"
#include "full_adder.h"
int sc_main(int argc, char *argv[]){
    sc_signal<bool> t_a,t_b,t_cin,t_sum,t_cout;
    full_adder f1("hierachicalFullAdder");
    f1<<t_a<<t_b<<t_cin<<t_sum<<t_cout;
    driver d1("generateWaveForms");
    d1.d_a(t_a);
    d1.d_b(t_b);
    d1.d_cin(t_cin);
    monitor mo1("monitor1");
    mo1<<t_a<<t_b<<t_cin<<t_sum<<t_cout;
    sc_start(100,SC_NS);
    return(0);
}
