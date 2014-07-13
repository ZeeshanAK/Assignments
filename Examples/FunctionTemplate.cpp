#include<iostream>
using namespace std;

template <class M>
M maximum (M value1, M value2, M value3)
{
    M maximumValue = value1;

    if (maximumValue < value2)
        maximumValue = value2;

    if (maximumValue < value3)
        maximumValue = value3;

    return maximumValue;
}

int main()
{
    int num1, num2, num3;
    cout << "Enter three integer values;" << endl;
    cin >> num1 >> num2 >> num3;
    cout << "The maximum integer value is: " << maximum (num1, num2, num3);

    double d1, d2, d3;
    cout << "\n\nEnter three double values;" << endl;
    cin >> d1 >> d2 >> d3;
    cout << "The maximum double value is: " << maximum (d1, d2, d3);

}
