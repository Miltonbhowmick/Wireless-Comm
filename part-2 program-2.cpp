#include<bits/stdc++.h>
using namespace std;
int main()
{
    /* calculate path difference */
    double h_t,h_r,d;
    cout<<"Enter the height of the transmitter antenna : ";
    cin>>h_t;
    cout<<"Enter the height of the receiving antenna : ";
    cin>>h_r;
    cout<<"Enter the distance : ";
    cin>>d;

    double  path_diff = sqrt((h_t+h_r)*(h_t+h_r)+d*d) - sqrt((h_t-h_r)*(h_t-h_r)+d*d);

    cout<<"The Path Difference is : ";
    cout<<path_diff<<endl;

    /* calculate received power */
    double p_t,p_r,g_t,g_r;
    cout<<"Enter transmitted power : ";
    cin>>p_t;
    cout<<"Enter the transmitter gain : ";
    cin>>g_t;
    cout<<"Enter the receiver gain : ";
    cin>>g_r;

    p_r = p_t*g_t*g_r*h_t*h_t*h_r*h_r/(d*d*d*d);
    cout<<"The received power is : ";
    cout<<p_r<<endl;

}
