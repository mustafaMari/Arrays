//
// Created by Mufasa on 2/2/2021.
//

#include "CTable.h"
CTable::CTable() {
    v_initialization("defult", 0);
    cout << "without: " << s_name << endl;
}
void CTable::v_initialization(string name, int length) {
    s_name = name;
    array_length = length;
    array = new int[length];
    v_initialization_ele();
}
CTable::CTable(string s_name, int arrayLen) {
    v_initialization(s_name, arrayLen);
    cout << "parameter: " << s_name << endl;
}
CTable::CTable(const CTable& pcOther) {
    v_initialization(pcOther.s_name + "_copy", pcOther.array_length);
    for (int i = 0; i < pcOther.array_length; i++)
        array[i] = pcOther.array[i];

    cout << "copy: " << s_name << endl;
}
//CTable::~CTable() {
//	cout << "removing: " << s_name << endl;
//	delete[] array;
//}

void CTable::v_set_name(string sName) {
    s_name = sName;
}
void CTable::v_initialization_ele(){
    for (int x = 0; x < array_length; x++)
        array[x] = 0;
}
CTable* CTable::pcClone() {
    return new CTable(*this);
}
// Lab 2
bool CTable::b_set_new_size(int new_array_size) {
    if (new_array_size < array_length) {
        cout << "the new clone could not be created to due the shortness in size of the new clone" << endl;
        return false;
    }
    int* new_array = new int[new_array_size];
    new_array = new int[new_array_size] ;
    for (int i = 0; i < new_array_size; i++) {
        new_array[i] = array[i];
    }
    cout << "done" << endl;
    array_length = new_array_size;
    delete[] array;
    array = new_array;
    v_initialization_ele();
    return true;
}
// Lab 2
void CTable::v_set_value_at(int iOffSet, int newVlaue) {
    if (iOffSet < 0 || iOffSet > array_length)
        return;
    array[iOffSet] = newVlaue;
}
// Lab 2
void CTable::v_print_array() {
    for (auto i = 0; i < array_length; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}
// lab 2
CTable CTable::operator+(CTable& other)
{
    CTable return_array(s_name, other.array_length + array_length);

    for (int i = 0; i <  other.array_length+ array_length ; i++)
    {
        if (i < array_length)
            return_array.array[i] = array[i];
        else
            return_array.array[i] = other.array[i - array_length];
    }

    delete[] array;
    return return_array;
}

CTable CTable:: operator-- (int)
{
    CTable return_array(s_name, array_length - 1 );

    for (int i = 0; i < return_array.array_length; i++)
        return_array.array[i] = array[i];

    delete[] array;

    return return_array;
}