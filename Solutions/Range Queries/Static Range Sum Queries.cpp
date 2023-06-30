#include <iostream>
using namespace std;

int main()
{
    long long int size, queries;
    cin >> size >> queries;
    long long int nums[size], sum[size] = {0};

    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }

    for (int i = 1; i < size; i++)
    {
        sum[i] = nums[i - 1] + sum[i - 1];
    }

    while (queries--)
    {
        long long int a, b;
        cin >> a >> b;

        cout << sum[b - 1] + nums[b - 1] - sum[a - 1] << endl;
    }

    return 0;
}