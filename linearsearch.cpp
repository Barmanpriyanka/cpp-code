
#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {

    
    if(key==arr[i])
    {
        return i;
    }
    }
 return -1;
}
int main()
{
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int key;
    cout<<"enter the key:";
    cin>>key;
    cout<<linearsearch(arr,n,key);
    return 0;

}