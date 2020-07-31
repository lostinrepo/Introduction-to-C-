#include<iostream>
using namespace std;

void merge(int *arr1, int size1, int *arr2, int size2, int *ans)
{
    int i=0,j=0,x=0;
    while(i<size1 && j< size2){
        if(arr1[i]<arr2[j]){
            ans[x]=arr1[i];
            i++;
            x++;
            
        } else {
            ans[x]=arr2[j];
            j++;
            x++;
            
        }
        
    }
    
    while (i < size1) 
        ans[x++] = arr1[i++]; 
  
     
    while (j < size2) 
        ans[x++] = arr2[j++]; 
   
    
    cout << "Merged Array : " <<endl;
     for(int i=0;i<size1+size2;i++){
     	cout << " " << ans[i];
	 }   
    }
    
int main(){
	int arr1[5]={1,2,3,8,9};
	int arr2[5]={3,6,11,23,45};
	int size1= sizeof(arr1)/sizeof(arr1[0]);
	int size2= sizeof(arr2)/sizeof(arr2[0]);
	int ans[100];
	merge(arr1,size1,arr2,size2,ans);
}
