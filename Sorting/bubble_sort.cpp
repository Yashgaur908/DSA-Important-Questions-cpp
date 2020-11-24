#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter Array Size:: ";
    cin>>size;
    int array[size];
    cout<<"Enter Array Elements::\n";
    for(int i=0; i<size; i++)
    {
        cin>>array[i];
    }
    for(int counter = 0; counter < size-1; counter++)
    {
        for(int i=0; i<size-counter-1; i++)
        {
            if(array[i]>array[i+1])
            {
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp; 
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