#include<iostream>
using namespace std;

// Function prototypes
void getInfo(int&, int&);
double computeWays(int, int);
double factorial(int);

/*******************************************************************
* getLotteryInfo *
* Gets and validates lottery info from the user and places it in   *
* reference parameters referencing variables in the main function. *
*******************************************************************/
void getInfo( int & pickFrom, int & numPicks){
    cout << "\nHow many balls (1-12) are in the pool to pick from? ";
    cin >> pickFrom;
    while ( pickFrom < 1 || pickFrom > 12 or cin.fail()){
        cin.clear();
        cin.ignore(100,'\n');
        cout << "Input Error! There must be between 1 and 12 balls."
             << "\nHow many balls (1-12) are in the pool to pick from? ";
        cin >> pickFrom;
    }
    cout << "How many balls (1-" <<  pickFrom << ") will be drawn? ";
    cin >> numPicks;
    while ( numPicks < 1 || numPicks > pickFrom or cin.fail()){
        cin.clear();
        cin.ignore(100,'\n');
        cout << "Input Error! \nHow many balls (1-" <<  pickFrom << ") will be drawn? ";
        cin >> numPicks;
    }
}

/******************************************************************
* computeWays                                                     *
* Computes and returns the number of different possible sets      *
* of k numbers that can be chosen from a set of n numbers.        *
* The formula for this is     k!(n- k)!                           *
*                             --------                            *
*                                 n!                              *
*******************************************************************/
// Note that the computation is done in a way that does not require
// multiplying two factorials together. This is done to prevent any
// intermediate result becoming so large that it causes overflow.
double computeWays( int n, int k){
    return ( factorial(k) * factorial (n- k)/ factorial(n) );
}

double factorial(int n){
    if (n==0){
        return 1;
    }
    else{
        return (n * factorial(n-1));
    }
}