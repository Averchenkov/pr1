#include <cstdio>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void sdvig(int k,vector<int> &arr)
{
    for(int i=0;i<abs(k);i++)
    {
        if(k>0)
        {
            int num =arr[arr.size()-1];
            for(int i=arr.size()-1;i>0;i--)
            {
                arr[i]=arr[i-1];
            }
            arr[0]=num;
        }
        else 
        {
            int num =arr[0];
            for(int i=0;i<arr.size()-1;i++)
            {
                arr[i]=arr[i+1];
            }
            arr[arr.size()-1]=num;
        }
    }
}

int main() 
{
    vector<int> arr;
    cout << "Vvedite kol-vo elementov v massive" << endl;
    int n;
    cin >> n;
    
    cout << endl << "Vvedite massiv" << endl;
    
    for(int i=0;i<n;i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    
    int k;
    cout << endl << "Vvedite kol-vo sdvigov" << endl;
    cin >> k;
    cout << endl;
    
    sdvig(k,arr);
    
    for(int i=0;i<arr.size();i++)
    {
        cout << arr.at(i) << " ";
    }
    cout << "(standart)" << endl;
    
    for(vector<int>::iterator it=arr.begin();it!=arr.end();it++)
    {
        cout << *it << " ";
    }
    cout << "(iterator)" << endl;
    
    for(auto it=arr.begin();it!=arr.end();it++)
    {
        cout << *it << " ";
    }
    cout << "(auto)"  << endl;
    return 0;
}
