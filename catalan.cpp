#include<iostream>
using namespace std;
int catalan(int n){
    int arr[n+1];
    arr[0]=1;
    arr[1]=1;
    //int res=0;
    for (int i = 2; i <=n ; i++){
        arr[i]=0;
        for(int j=0;j<i;j++){
            arr[i]+=arr[j]*arr[i-j-1];
        }
    }
    return arr[n];
}
int main(){
    int n=5;
   // int arr[n];
    cout<<catalan(n);

}