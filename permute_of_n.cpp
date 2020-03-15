#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void printPermute(vector<int> & vec, size_t start)
{
    if (start >= vec.size())
    {
        for (auto v : vec)
        {
            cout << v << " ";
        }
        cout << endl;
        return;
    }

    for (auto i = start; i < vec.size(); ++i)
    {
        std::swap(vec[start], vec[i]);
        printPermute(vec, start + 1);
        std::swap(vec[start], vec[i]);
    }
}

int main()
{
    int N = 100;

    vector<int> vec(N);
    for (auto i = 0; i < N; ++i)
    {
        vec[i] = i;
    }
    printPermute(vec, 0);
}
