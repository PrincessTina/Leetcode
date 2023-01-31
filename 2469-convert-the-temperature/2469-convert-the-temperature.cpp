class Solution {
public:
    vector<double> convertTemperature(double Celsius) {
        return {Celsius + 273.15, Celsius * 1.8 + 32};
    }
};