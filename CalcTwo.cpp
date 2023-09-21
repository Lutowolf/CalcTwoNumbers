#include <iostream>
using namespace std;

class Calc
{
private:
    double Num1;
    double Num2;
public:
    bool set_Num1(double Input1)
    {
        if (Input1 > 0)
        {
            this->Num1 = Input1;
            return true;
        }
        else
        {
            return false;
        };
    }
    bool set_Num2(double Input2)
    {
        if (Input2 > 0) 
        {
            this->Num2 = Input2;
            return true;
        }
        else
        {
            return false;
        }
    }
    double add()
    {
        double ResA = this->Num1 + this->Num2;
        cout << "Num1 + Num2 = " << ResA << endl;
        return ResA;
    }
    double multiply()
    {
        double ResM = this->Num1 * this->Num2;
        cout << "Num1 * Num2 =  " << ResM << endl;
        return ResM;
    }
    double subtract_1_2()
    {
        double ResS12 = this->Num1 - this->Num2;
        cout << "Num1 - Num2 =  " << ResS12 << endl;
        return ResS12;
    }
    double subtract_2_1()
    {
        double ResS21 = this->Num2 - this->Num1;
        cout << "Num2 - Num1 =  " << ResS21 << endl;
        return ResS21;
    }
    double divide_1_2()
    {
        double ResD12 =this->Num1 / this->Num2;
        cout << "Num1 / Num2 =  " << ResD12 << endl;
        return ResD12;
    }
    double divide_2_1()
    {
        double ResD21 = this->Num2 / this->Num1;
        cout << "Num2 / Num1 =  " << ResD21 << endl;
        return ResD21;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    Calc Calc;
    double InNum1 = 0;
    double InNum2 = 0;
    for(;;) 
    {
        cout << "Введите Num1: ";
        cin >> InNum1;
        cout << endl << "Введите Num2: ";
        cin >> InNum2;
        cout << endl;
        bool response1 = Calc.set_Num1(InNum1);
        bool response2 = Calc.set_Num2(InNum2);
        if (response1 == true&& response2 == true) 
        {
            Calc.add();
            Calc.multiply();
            Calc.subtract_1_2();
            Calc.subtract_2_1();
            Calc.divide_1_2();
            Calc.divide_2_1();
        }
        else 
        {
            cout << "Неверный ввод!" << endl;
        }
    }
}