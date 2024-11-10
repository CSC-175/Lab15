# include <iostream>
# include "../Lab15.cpp"
using namespace std;

int main()
{
    int pickFrom, // The number of numbers to pick from
    numPicks;// The number of numbers to select
    double ways; // The number of different possible
    // ways to pick the set of numbers
    char again;

    getInfo(pickFrom, numPicks);
    ways = computeWays(pickFrom, numPicks);
    cout.setf(ios::fixed);
    cout.precision(4);
    cout << ways;
    cout << " " << int(1/ways);

    return 0;
}