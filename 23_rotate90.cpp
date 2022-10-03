#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[4][4]){
    int n = 4;
    int start = 0;
    int end = n-1;
    int total = (n*n);
    int count = 0;
    int a,b,c,d;
    while(count<total){
        int temp[end-start+1];
        
        for(int i=0;i<=end;i++){
                temp[i]=arr[i][end];
        }

        a = arr[start][start];    
        b = arr[start][end];
        c = arr[end][end];
        d = arr[end][start];


        for(int i=0;i<=end;i++){
            arr[i][end]=arr[start][i];
            count++;
        }
        arr[end][end]=b;

        for(int i=0;i<=end;i++){
            swap(temp[i],arr[end][end-i]);
            count++;
        }
        temp[0]=c;
        for(int i=0;i<=end;i++){
            swap(temp[i],arr[end-i][start]);
            count++;
        }
        temp[0]=a;

       for(int i=0;i<=end;i++){
            swap(temp[i],arr[start][i]);
            count++;
        }
        arr[start][start]=d;
    
        end--;
        start++;
    }



    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n=4;
int arr[4][4]={1,2,3,4,12,13,14,5,11,16,15,6,10,9,8,7};

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
cout<<endl;

rotate(arr);

    return 0;
}