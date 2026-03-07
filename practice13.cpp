//given a boolen 2d vector where each row is sorted . find the row with maximun no of 1's
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter number of rows and columns of a 2d vector"<<endl;
    cin>>n>>m;
    vector<vector<int>>A(n,vector<int>(m));
    int count[n];
    int i;

    for(i=0;i<n;i++){
        count[i]=0;
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"enter element at position "<<i<<":"<<j<<endl;
            cin>>A[i][j];

            if(A[i][j]==1){
                count[i]++;
            }

        }

    }
    int max=0;

    for(i=0;i<n-1;i++){
        if(count[i]>count[max]){
            max=i;

        }
    }

    cout<<"Row with maximum 1 is "<<max<<endl;
    return 0;
}