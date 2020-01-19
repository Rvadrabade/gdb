#include<iostream>
using namespace std;

int main(){

const int N {10};
int arr[N]{};
int *ptr[N]{};

for(int i=0;i<N;i++){
    arr[i]=i;
}

for(int i=0;i<N;i++){
    ptr[i]=&arr[i];
}


for(int i=0;i<N;i++){
    cout<<**ptr+i<<endl;
}
}
