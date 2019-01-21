#include <bits/stdc++.h>
#define DB double
#define C 300000000.0
#define PI 3.1416
using namespace std;
DB getLemda(DB f)
{
    return C/(f*1000000.0);
}
DB getFraunhoferDistance(DB D,DB lemda)
{
    return 2*(pow(D,2)/lemda);
}
DB getReceivedPower(DB Pt,DB Gt,DB Gr,DB lemda,DB df,DB L)
{
    DB hi = Pt*Gt*Gr*pow(lemda,2);
    DB lo = pow(4,2)*pow(PI,2)*pow(df,2)*L;
    return hi/lo;
}
int main()
{
    DB f,Pt,Gt,Gr,D;
    cout<<"Operating frequency (in MHz) : ";
    cin>>f;
    cout<<"Transmission power from transmitter (in watts) : ";
    cin>>Pt;
    cout<<"Transmitter antenna gain : ";
    cin>>Gt;
    cout<<"Receiver antenna gain : ";
    cin>>Gr;
    cout<<"Diameter of antenna (in meter) : ";
    cin>>D;
    DB lemda = getLemda(f);
    DB df = getFraunhoferDistance(D,lemda);
    cout<<"\nReceived power at distance "<<df<<" is : ";
    cout<<getReceivedPower(Pt,Gt,Gr,lemda,df,1)<<endl;
    return 0;
}
