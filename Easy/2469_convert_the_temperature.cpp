/*
You are given a non-negative floating point number rounded to two decimal places celsius, that denotes the temperature in Celsius.

You should convert Celsius into Kelvin and Fahrenheit and return it as an array ans = [kelvin, fahrenheit].

Return the array ans. Answers within 10-5 of the actual answer will be accepted.

Note that:

Kelvin = Celsius + 273.15
Fahrenheit = Celsius * 1.80 + 32.00


*/

/*
approach : 1. initialize a vector
            2. push kelvin value   --> celsius+273.15
            3. push fahrenheit value  --> celsius*1.80+32.00

*/

class Solution
{
public:
    vector<double> convertTemperature(double celsius)
    {
        vector<double> res;
        res.push_back(celsius + 273.15);
        res.push_back(celsius * 1.80 + 32.00);

        return res;
    }
};