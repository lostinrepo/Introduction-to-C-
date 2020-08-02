void sort012(int *input, int size)
{
   
int i=0,nzero=0,ntwo=size-1;
  while(i<ntwo){
      if(input[i]==1){
          i++;
      }else if(input[i]==0){
          int temp=input[i];
          input[i]=input[nzero];
          input[nzero]=temp;
          nzero++;
          i++;
      }else{
          int temp=input[i];
          input[i]=input[ntwo];
          input[ntwo]=temp;
          ntwo--;
        
      }
          
      }
      
      
      
      for(int i=0;i<size;i++){
      	cout << input[i] << " ";
      	
	  }
        
    
}


int main(){
	int arr[5]={0,2,1,1,0};
	int size=5;
	sort012(arr,size);	
}
