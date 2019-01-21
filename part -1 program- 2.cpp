#include<bits/stdc++.h>
using namespace std;
int i0 = 6;
double find_ratio(int n, int N)
{
    double ratio = 10*log10 ( pow(sqrt(3*N)*1.0,n*1.0)/i0 );
    return ratio;
}

int main()
{
    int N,n,i0=6; double ratio;
    cout<<"Write the cluster size N = ";
    cin>>N;

    cout<<"Write the Path Loss Exponent n = ";
    cin>>n;

    ratio = find_ratio(n,N);

    cout<<"The signal to interference ration is "<<ratio<<"."<<endl<<endl;

    double minimum_accepatable_ratio=18;


    if(ratio>=minimum_accepatable_ratio){
        printf("Cluster Size N = %d should be used.\n",N);
    }
    else{
        int possible_cluster_size[]={3,4,7,12,13,19};
        for(int i=0;i<6;i++){
            double r = find_ratio(n,possible_cluster_size[i]);
            if(r>=minimum_accepatable_ratio)
                printf("Cluster Size N = %d should be used.\n",possible_cluster_size[i]);
        }
    }
}
/* For a given cluster size, find the signal to interference ratio for the co channel cells of the first tier only.
If minimum acceptable S/I ration is 18 dB, show the decision about which cluster size should be used.
Set path loss exponent, n = 4. */
