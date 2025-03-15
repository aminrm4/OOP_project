#ifndef PATIENT_HPP
#define PATIENT_HPP
 #endif
 #include<string>
 using namespace std;
 class patient
 {
private:
string name_patient;
int age_patient;
double body_temperature;
int heart_rate;
int respon_rate;
int blood_pressure;
int fbs;



public:
void set_name_patient(string name);
void set_age_patient(int age);
void set_body_temperature(double temp);
void set_heart_rate(int heart);
void set_respon_rate(int respon);
void set_blood_pressure(int blood);
void set_fbs(int f);
string get_name_patient() const;
int get_age_patient() const;
double get_body_temperature() const;
int get_heart_rate() const;
int get_respon_rate() const;
int get_blood_pressure() const;
int get_fbs() const;
patient(string name,int age,double tem,int heart,int respon,int blood,int f);
patient();
~patient();


 };