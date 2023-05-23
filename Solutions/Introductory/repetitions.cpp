#include <iostream>
#include <string>
using namespace std;

int main()
{
    int longest = 1, present = 1;
    string input;

    cin >> input;

    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == input[i + 1])
        {
            present++;
        }
        else
        {
            present = 1;
        }
        if (present > longest)
        {
            longest = present;
        }
    }

    cout << longest;

    return 0;
}