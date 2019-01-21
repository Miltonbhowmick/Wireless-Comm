#include <bits/stdc++.h>
using namespace std;
const int N = 7;
int findCapacity(int cellRadius,int totalRadioChannels,int coverageArea)
{
    int cellArea = ((3*sqrt(3))/2) * pow(cellRadius,2);
    int K = totalRadioChannels / N;
    int clusterArea = N * cellArea;
    int M = coverageArea / clusterArea;
    return M*K*N;
}
int main()
{
    int coverageArea, R, totalRadioChannels;
    cout<<"Enter the coverage area of cellular system : ";
    cin>>coverageArea;
    cout<<"Enter the cell radius (R) : ";
    cin>>R;
    cout<<"Enter the total number of available radio channels : ";
    cin>>totalRadioChannels;
    cout<<"\nCapacity (using cell radius R) : ";
    cout<<findCapacity(R,totalRadioChannels,coverageArea);
    cout<<" duplex channels."<<endl;
    cout<<"Capacity (using cell radius R/2) : ";
    cout<<findCapacity(R/2,totalRadioChannels,coverageArea);
    cout<<" duplex channels."<<endl;
    return 0;
}
