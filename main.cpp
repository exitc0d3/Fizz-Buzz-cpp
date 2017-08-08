#include <iostream>

using namespace std;

int main()
{
    string output = "";

    for (int i = 1; i < 101; i++)
    {
        if (i % 3 == 0) output += "Fizz";
        if (i % 5 == 0) output += "Buzz;" 
        if (output == "") output = i;
        cout << output << "\n";
    }
}
