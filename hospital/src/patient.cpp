#include"patient.hpp"
#include<iostream>
#include<string>
#include<fstream>
#include<sstream>   
#include<vector>
#include"hospital.hpp"
using namespace std;

string  encrypt_data1(const std::string& data) {
    char key = 'X'; 
    std::string result = data;
    for (size_t i = 0; i < data.size(); ++i) {
        result[i] ^= key;
    }
    return result;
}
void protect_data2(int & ddata2)
{
    const int k=5;
    ddata2=ddata2 ^k;
}

void write_to_file(const string filename,string name,int age,double temp,int rate,int res,int blood,int fb)
{

    fstream file(filename,ios::app);
    if (!file)
    {
    cerr<<"file could not be opend"<<endl;
    }

    file<<name<<" "<<age<<" " <<temp<<" "<<rate<<" "<< res<<" "<<blood <<" "<<fb<<endl;
    
file.close();
}




void  patient::set_name_patient(string name)
{
name_patient=name;
}
void  patient:: set_age_patient(int age)
{
    age_patient=age;
}
void  patient:: set_body_temperature(double temp)
{
    body_temperature=temp;
}
void  patient:: set_heart_rate(int heart)
{
    heart_rate=heart;
}
void  patient:: set_respon_rate(int respon)
{
    respon_rate=respon;
}
void  patient:: set_blood_pressure(int blood)
{
    blood_pressure=blood;
}
void  patient:: set_fbs(int f)
{
    fbs=f;

}
string  patient::get_name_patient() const
{
    return name_patient;
}
int     patient::get_age_patient() const
{
    return age_patient;
}
double  patient:: get_body_temperature() const
{
    return body_temperature;
}
int  patient:: get_heart_rate() const
{
    return heart_rate;
}
int  patient:: get_respon_rate() const
{
    return respon_rate;
}
int  patient::get_blood_pressure() const
{
    return blood_pressure;
}
int  patient:: get_fbs() const
{
    return fbs;
}
 patient:: patient(string name,int age,double tem,int heart,int respon,int blood,int f) : name_patient(name),age_patient(age),body_temperature(tem),respon_rate(respon),heart_rate(heart),fbs(f),blood_pressure(blood)
 {
    if (age>100)
    {
        cerr<<"the age of patient is out of acceptable range"<<endl;
        
    }
    if (!((body_temperature<=37.5) &&  (body_temperature>=36)))
    {
        cout<<"the patient temperature is not normal"<<endl;
    }
    
if   (!((heart_rate<=100) &&  (body_temperature>=60)))
    {
        cout<<"the patient heart_rate is not in a normal range"<<endl;
    }
    if(!((blood_pressure<=120) &&  (body_temperature>=80)))
    {
cout<<"the patient blood pressure is not in a normal range"<<endl;
    }
    if ((age_patient<=3) &&  (age_patient>=0))
    {
        if(!((respon_rate<=30) &&  (respon_rate>=20)))
        {
            cout<<"by the age , the patient respon_rate is not normal"<<endl;
        }
    }


    if ((age_patient<=6) &&  (age_patient>3))
    {
        if(!((respon_rate<=25) &&  (respon_rate>=18)))
        {
            cout<<"by the age , the patient respon_rate is not normal"<<endl;
        }
    }
    
    
    if ((age_patient<=10) &&  (age_patient>6))
    {
        if(!((respon_rate<=23) &&  (respon_rate>=18)))
        {
            cout<<"by the age , the patient respon_rate is not normal"<<endl;
        }
    }
    
    

    if ((age_patient<=50) &&  (age_patient>10))
    {
        if(!((respon_rate<=25) &&  (respon_rate>=15)))
        {
            cout<<"by the age , the patient respon_rate is not normal"<<endl;
        }
    }
    
    
    if ((age_patient<=65) &&  (age_patient>50))
    {
        if(!((respon_rate<=28) &&  (respon_rate>=12)))
        {
            cout<<"by the age , the patient respon_rate is not normal"<<endl;
        }
}

if ((age_patient<=100) &&  (age_patient>65))
    {
        if(!((respon_rate<=30) &&  (respon_rate>=10)))
        {
            cout<<"by the age , the patient respon_rate is not normal"<<endl;
        }
    }
    
    

if ((fbs<60) || (fbs>120))
{
    cout<<"the fbs is not in a normal range"<<endl;
}


 }
    







    
 
 patient::patient()
 {

 }
patient::~patient()
{
    
   string saver =encrypt_data1(name_patient);
    protect_data2(age_patient);
    protect_data2(heart_rate);
    protect_data2(respon_rate);
    protect_data2(blood_pressure);
    protect_data2(fbs);
    write_to_file("data.txt",saver,get_age_patient(),get_body_temperature(),get_heart_rate(),get_respon_rate(),get_blood_pressure(),get_fbs());
  

}
