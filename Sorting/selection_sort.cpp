#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter Array Size:: ";
    cin>>size;
    int array[size];
    cout<<"Enter " <<size<<" Array Elements\n";
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }
    for(int i=0; i<size-1; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(array[i]>array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    for(int i=0; i<size; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    return 0;
}