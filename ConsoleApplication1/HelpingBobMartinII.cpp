// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>


using namespace std; 

int main()
{
    //std::cout << "Hello World!\n";

    //how to calculate average: 
    vector<int> nums = 
    { 
        1, 
        2,
        3, 
        4, 
        5, 
        6 
    };

    //21 / 6.0 = 3 R 3
    //int otherNums[10]; //c-style arrays
    int sum = 0; 
    for (int i = 0; i < nums.size(); i = i + 1)
    {
        sum += nums[i];
    }

    //extrapolation 

    cout << "Sum is: " << sum << "\n";
    cout << "AVERAGE: " << sum / 6.0 << "7\n";

}
