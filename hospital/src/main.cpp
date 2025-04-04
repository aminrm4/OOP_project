#include <iostream>
#include "patient.hpp"
#include <string>
#include "hospital.hpp"
using namespace std;

string data_encrypt(const std::string &data)
{
    char key = 'X';
    std::string result = data;
    for (size_t i = 0; i < data.size(); ++i)
    {
        result[i] ^= key;
    }
    return result;
}

void protect_data(int &ddata2)
{
    const int k = 5;
    ddata2 = ddata2 ^ k;
}

int main()
{
    int counter = 0;
    while (true)
    {
        counter++;
        hospital object1(counter);

        fstream file2("data.txt", ios::in);
        string reader;
        while (getline(file2, reader))
        {
            string name;
            int age;
            double temp;
            int rate;
            int res;
            int blood;
            int fbs;

            istringstream iss(reader);
            iss >> name >> age >> temp >> rate >> res >> blood >> fbs;
            name = data_encrypt(name);
            protect_data(age);
            protect_data(rate);
            protect_data(blood);
            protect_data(res);
            protect_data(fbs);
            cout << "the name of the patient is " << name << endl;
            cout << "the age  of the patient is " << age << endl;
            cout << "the temperature  of the patient is " << temp << endl;
            cout << "the  haeart rate  of the patient is " << rate << endl;
            cout << "the respon rate (by age) of the patient is " << res << endl;
            cout << "the blood_pressure of the patient is " << blood << endl;
            cout << "the fasting blood suger (fbs)  of the patient is " << fbs << endl;
        }

        cout << "----------------------------------------------" << endl;
        cout << "enter the new data of patient" << endl;
        string main_name;
        cout << "name:" << endl;
        cin >> main_name;
        int main_age;
        cout << "age:" << endl;
        cin >> main_age;
        if (main_age<0)
        {
            cerr<<"age is not vaild"<<endl;
            return 0;
        }
        
        cout << "body_temperature :" << endl;
        double main_temp;
        cin >> main_temp;
        cout << "heart rate :" << endl;
        int main_heart;
        cin >> main_heart;
        cout << "respon_rate :" << endl;
        int main_rate;
        cin >> main_rate;
        cout << "blood pressure :" << endl;
        int main_blood;
        cin >> main_blood;
        cout << "fbs:" << endl;
        int main_fbs;
        cin >> main_fbs;
        patient obj2(main_name, main_age, main_temp, main_heart, main_rate, main_blood, main_fbs);
        cout << "the total patient in hospital are " << object1.get_list_patient() << endl;
        cout << "do you want continue ? if yes enter y" << endl;
        char check;
        cin >> check;
        if (check != 'y')
        {
            return 0;
        }
    }
}