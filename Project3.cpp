// Project3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>       // std::cout
#include <string>         // std::string
using namespace std;
int countsetbits_pr_one(int N)
{
    int count = 0;
    while (N)
    {
        N &= N - 1;
        count++;
    }
    return count;
}
int countsetbits_pr_two(int N)
{
    int count = 0;
    int num_to_bits[16] = { 0, 1, 1, 2, 1, 2, 2, 3,
                        1, 2, 2, 3, 2, 3, 3, 4 };
    while (N)
    {
        count = count + num_to_bits[N & 0xF];
        N = N>>4;
    }
    return count;
}
int main()
{
    int number;
    int count;
    cout << "Enter the number::";
    cin >> number;

    count = countsetbits_pr_one(number);
    cout << "count1 =  " << count << endl;
    count = countsetbits_pr_two(number);
    cout << "count2 =  " << count << endl;
    return 0;
}
/*Count set bits*/