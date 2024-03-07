#include <iostream>

using namespace std;

int main()
{
    //1
    char symbol;
    int length;
    int direction;

    cout << "Enter the symbol: ";
    cin >> symbol;
    cout << "Enter the length: ";
    cin >> length;
    cout << "Enter the direction (1 for horizontal, 2 for vertical): ";
    cin >> direction;

    if (direction == 1)
    {
        for (int i = 0; i < length; ++i)
        {
            cout << symbol;
        }
        cout << endl;
    }
    else if (direction == 2)
    {
        for (int i = 0; i < length; ++i)
        {
            cout << symbol << endl;
        }
    }
    else
    {
        cout << "Please enter 1 for horizontal or 2 for vertical." << endl;
    }

    //3
    int min, max;
    const int SIZE = 5;
    int arr[SIZE]{ 1,2,3,4,5 };
    min = max = arr[0];
    for (size_t i = 0; i < SIZE; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    for (size_t i = 0; i < SIZE; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;

    //4
    int L, U;
    int profits[12];
    for (int i = 0; i < 12; ++i) 
    {
        cout << "Enter profit for " << i + 1 << " month: ";
        cin >> profits[i];
    }

    cout << "Enter the lower limit of the range: ";
    cin >> L;
    cout << "Enter the upper limit of the range: ";
    cin >> U;

    int maxProfit = profits[L - 1]; 
    int minProfit = profits[L - 1]; 
    int maxMonth = L; 
    int minMonth = L;

    for (int i = L; i <= U; ++i) {
        if (profits[i - 1] > maxProfit) {
            maxProfit = profits[i - 1];
            maxMonth = i;
        }
        if (profits[i - 1] < minProfit) {
            minProfit = profits[i - 1];
            minMonth = i;
        }
    }

    cout << "Minimum profit: " << minProfit << endl;
    cout << "Maximum profit: " << maxProfit << endl;

    //5
    const int SIZES = 10;
    double arrs[SIZES]{ 11.2, 22.4, 3.66, 4.5, -6.32, -11.5, -8.88, 9.87, -0.05, 0.021 };

    double sum = 0;
    double multiply = 1;
    double multiply1 = 1;
    double minElement = arrs[0];
    double maxElement = arrs[0];
    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 0; i < SIZES; ++i)
    {
        if (arrs[i] < 0)
        {
            sum += arrs[i];
        }
        if (arrs[i] > maxElement)
        {
            maxElement = arrs[i];
            maxIndex = i;
        }
        if (arrs[i] < minElement)
        {
            minElement = arrs[i];
            minIndex = i;
        }
    }

    int start = (minIndex < maxIndex) ? minIndex : maxIndex;
    int end = (minIndex < maxIndex) ? maxIndex : minIndex;

    for (int i = start + 1; i < end; ++i) {
        multiply *= arrs[i];
    }

    for (int i = 0; i < SIZES; i += 2) {
        multiply1 *= arrs[i];
    }

    double sum1 = 0;
    int firstNegativeIndex = -1;
    int lastNegativeIndex = -1;

    for (int i = 0; i < SIZES; ++i) {
        if (arrs[i] < 0) {
            firstNegativeIndex = i;
            break;
        }
    }

    for (int i = SIZES - 1; i >= 0; --i) {
        if (arrs[i] < 0) {
            lastNegativeIndex = i;
            break;
        }
    }

    if (firstNegativeIndex != -1 && lastNegativeIndex != -1) {
        for (int i = firstNegativeIndex + 1; i < lastNegativeIndex; ++i) {
            sum1 += arrs[i];
        }
    }

    cout << "Sum of negative numbers :" << sum << endl;
    cout << "The multiply of elements located between min and max elements: " << multiply << endl;
    cout << "The multiply of elements with even numbers: " << multiply1 << endl;
    cout << "The sum of elements located between the first and last negative elements: " << sum1 << endl;
        

    
    



}


