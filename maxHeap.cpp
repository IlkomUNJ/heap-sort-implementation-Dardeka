#include <iostream>
using namespace std;

int *maxHeap(int arr[], int n)
{
    int step = 1;
    int max[3] = {};
    int left;
    int right;
    int res = n / 2;
    while(step != res){
        for (int i = (n - 1); i >= 0; i--)
        {
            cout<<"Current index : "<<i<<endl;
            int parent = i / 2;
            left = 2 * parent + 1;
            right = 2 * parent + 2;
            if (parent < res)
            {
                max[0] = arr[parent];
                max[1] = arr[left];
                max[2] = arr[right];
                cout<<"Before : "<<arr[parent]<<" "<<arr[left]<<" "<<arr[right]<<endl;
            }
            else
            {
                arr[left] = 0;
                arr[right] = 0;
                max[0] = arr[parent];
                max[1] = arr[left];
                max[2] = arr[right];
                cout<<"Before : "<<arr[parent]<<" "<<arr[left]<<" "<<arr[right]<<endl;
            }
            if (parent < res)
            {
                if (arr[parent] < arr[left] && arr[left] != 0)
                {
                    int temp = arr[parent];
                    arr[parent] = arr[left];
                    arr[left] = temp;
                }
                if (arr[parent] < arr[right] && arr[right] != 0)
                {
                    int temp = arr[parent];
                    arr[parent] = arr[right];
                    arr[right] = temp;
                }
            }
            cout<<"After : "<<arr[parent]<<" "<<arr[left]<<" "<<arr[right]<<endl;
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout<<"\n"<<endl;
        }
        
        cout<<"End "<<step<<" round"<<endl;
        // cout<<""<<endl;
        cout<<"\n"<<endl;
        cout<<"\n"<<endl;
        step+=1;
    }
    
    return arr;
}

int main()
{

    // Section for max heap 
    int tree[8] = {1,2,3,4,5,6,7,8};
    int n = sizeof(tree) / 4;
    
    cout << "Before using Heap :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << tree[i] << " ";
    }
    cout << "\n" << endl;
    
    int *y = maxHeap(tree, n);
    cout << "After using Max Heap :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << y[i] << " ";
    }
    cout<<"\n"<<endl;

}