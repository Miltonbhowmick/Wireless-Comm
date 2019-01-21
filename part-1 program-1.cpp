//capacity of a cellular system depends on cluster size N

#include<bits/stdc++.h>
using namespace std;
int cell_area,total_area,total_channels;
int capacity(int cluster_size)
{
    int k = total_channels/cluster_size;
    int Cluster_area = cluster_size*cell_area;
    int M = total_area/Cluster_area;
    return M*k*cluster_size;
}

int main()
{
    int cluster_size_1,cluster_size_2;
    cout<<"Write the total channels "<<endl;
    cin>>total_channels;
    cout<<"Write the cell area "<<endl;
    cin>>cell_area;
    cout<<"Write the total area "<<endl;
    cin>>total_area;


    cout<<"Write the First Cluster Size ";
    cin>>cluster_size_1;
    printf("For Cluster Size N = %d the capacity is %d\n",cluster_size_1,capacity(cluster_size_1));

    cout<<"Write the Second Cluster Size ";
    cin>>cluster_size_2;
    printf("For Cluster Size N = %d the capacity is %d\n",cluster_size_2,capacity(cluster_size_2));

}

/*Consider a cellular system in which there are a total of 1001 radio channels
available for handling traffic. Suppose the area of a cell is 6 km2
and the area of the entire
system is 2100 km2 */
