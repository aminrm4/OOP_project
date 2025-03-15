#include<iostream>
#include"hospital.hpp"
using namespace std;

int  hospital:: get_list_patient() const
{
return list_patient;
}
hospital:: hospital(int num): list_patient(num)
{

}
