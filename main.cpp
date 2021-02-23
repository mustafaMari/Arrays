#include <iostream>

#include <iostream>
#include "CTable.h"
void lab2_task1_task3();
void lab2_task_test();

int main()
{
    //run_task_1_2_3();
    //run_task_4();
    lab2_task1_task3();
    lab2_task_test();
}

//Lab 2
void lab2_task_test() {
    CTable c1("1", 4);
    CTable c2("2", 5);
    CTable c3;
    c1.v_print_array();
    c2.v_print_array();
    c3.v_print_array();
    //c2 = c2--;
    //c2.v_print_array();
    c2--.v_print_array();
}
// Lab 2
void lab2_task1_task3() {
    CTable c_tab_0;
    c_tab_0.v_print_array();
    c_tab_0.b_set_new_size(6);
    c_tab_0.v_print_array();
    CTable c_tab_1;
    c_tab_1.b_set_new_size(4);
    c_tab_1.v_print_array();
    c_tab_0 = c_tab_1;
    c_tab_1.v_set_value_at(2, 123);
    c_tab_0.v_print_array();
    c_tab_1.v_print_array();
    CTable c3;
    c3 = c_tab_0 + c_tab_1;
    c3.v_print_array();
}