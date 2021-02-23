//
// Created by Mufasa on 2/2/2021.
//

#ifndef LAB2_CTABLE_H
#define LAB2_CTABLE_H
#include <iostream>
using namespace std;
class CTable
{
private:
    string s_name = "null";
    int array_length = 0;
    string text = "_copy";
    int* array = new int[array_length];

    void v_set_name(string sName);
    void v_initialization_ele();
    void v_initialization(string name, int length);

public:
    CTable();
    CTable(string sName, int iTableLen);
    CTable(const CTable& pcOther);
    //~CTable();
    CTable* pcClone();
    bool b_set_new_size(int new_array_size);
    void v_set_value_at(int iOffSet, int iNewVal);
    void v_print_array();
    CTable operator+(CTable& other);
    CTable operator--(int);
};

#endif //LAB2_CTABLE_H
