#include <bits/stdc++.h>
using namespace std;
double findReuseRatio(int N)
{
    return sqrt(3*(double)N);
}
double findSIR(int N, int n, int i)
{
    double a = pow(findReuseRatio(N),n);
    double b = a / (double)i;
    return log10(b) * 10;
}
int main()
{
    int N = 7, degreeOfSectors = 120;
    int n = 4, numOfInterferingCells = 6;
    cout<<"Cluster size : N = "<<N<<endl;
    cout<<"SIR (without sectoring) : "<<findSIR(N,n,numOfInterferingCells)<<endl;
    numOfInterferingCells /= (360/120);
    cout<<"SIR (with 120 degree sectoring) : "<<findSIR(N,n,numOfInterferingCells)<<endl<<endl;

    cout<<"So Sectoring improves S/I."<<endl;
}
/* Write a program to show how sectoring improves S/I in a cellular system. Take cluster size N=7 and 120 degree sectorized antenna. */
