#include <iostream>
#include <set>
using namespace std;

int main()
{
    long long int size, num;
    cin >> size;
    set<long long int> memo;

    for (int i = 0; i < size; i++)
    {
        cin >> num;
        memo.insert(num);
    }

    cout << memo.size();
    return 0;
}