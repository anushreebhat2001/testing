#include <iostream>
using namespace std;
void zero(int a[], int n)
{
  int j= 0;  // for new array with non zero elements in the beginning
    for (int i = 0; i < n; i++)
       {
           if (a[i] != 0)
            a[j++] = a[i]; //inserting the non zero element
       }
    for (int i = j; i < n; i++)
        a[j++] = 0; //adding in the 0 at the end
}
int main()
{
   int a[100];
    int n;
    cout<<"enter the number of elements in array : ";
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];   //input the array
    zero(a, n);
    cout << "Array after moving zero to end of array :\n";
    for (int i = 0; i < n; i++)
        cout << a[i] << "\t";
    return 0;
}

