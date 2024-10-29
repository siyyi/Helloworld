#include<iostream>
using namespace std;
void sort(int arr[],int size){
int temp=0;
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-1-j;j++){
			if(arr[j]>arr[j+1]){
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			}
		}
	}


}
int main(){
    int arr[]={12,4,89,43,21,78};
    int size=sizeof(arr)/sizeof(arr[0]);
    sort(arr,size);
    return 0;
}
//git工作区：本地仓库的代码目录
//git命令：git add：把工作取得代码改动提交到暂存区
