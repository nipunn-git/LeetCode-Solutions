/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {
    static double result[2];  // static so we can return pointer safely
    result[0] = celsius + 273.15;          // Kelvin
    result[1] = celsius * 1.80 + 32.00;    // Fahrenheit
    *returnSize = 2;
    return result;
}