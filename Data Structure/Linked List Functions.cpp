 #include<stdio.h>
 #include <stdlib.h>
 
 typedef struct node{
 	int data;
 	struct node * next; 
 }node;
 
  node * root =NULL; 
  
  
  void append( ){
  	 node * temp  = (node * )malloc(sizeof(node ));
  	 printf("Enter data \n");
  	 scanf("%d",&temp->data ); 
  	 temp->next=NULL;
  	 if(root == NULL ){
	    
  	 root =temp;
  }
  	 else
	{
	node * p=root; 
	while( p-> next != NULL ){
		p=p->next;
	}
	p->next=temp;
 
	
	   }  	 
	   
  } 
  
    void length( ){
  	 int count=0;
	   node * temp  = root;
   
  	   
	while( temp != NULL ){
		temp=temp->next;
		count ++;
	}
 
 
    printf("Length of the list is  - >> %d \n",count);
	
	   }  	 
	   
 
  void display(){

  	
	  if (root==NULL){
	  	printf("List is empty .. \n" );
	  	
	  }
	  else{
	  	
	  	  	node * p=root;
	  
	  while( p  != NULL ){
  		printf("node %d  \n",p->data);
		p=p->next;
	}
	
	}
	
  	
  }
  
  void add_begin(){
  	
  	 node * temp  = (node * )malloc(sizeof(node ));
  	 printf("Enter data \n");
  	 scanf("%d",&temp->data ); 
  	 temp->next=NULL;
  	 if(root == NULL ){
	    
  	 root =temp;
  }
  	 else
	{
	  
	temp->next=root; 
	root=temp;
	   }  	 
	
  	
  }
  
  void add_after(){
  	int loc;
  	 printf("Enter location \n");
  	 scanf("%d",&loc ); 
  	
  	
  	 	 node * temp  = (node * )malloc(sizeof(node ));
  	 printf("Enter data \n");
  	 scanf("%d",&temp->data ); 
  	 temp->next=NULL;
  	
  int i=1;
	  node * p=root;
	  while(i<loc){
	  	p=p->next;
	  	i++;
	  }
	  
	  temp->next = p->next;
	  p->next=temp;
	  
	
  	
  	
  	
  }
  
  void delete_node(){
  	
  	
  	node * temp=NULL;
  	int loc;
     printf("Enter location to delete \n");
  	 scanf("%d",&loc ); 
  	
  	  if(loc==1){
  	  	temp=root;
  	  	root=root->next;
  	  	temp->next=NULL;
  	  	free(temp);
		} 
		else{
	       int i=1;
	  node * p=root;
	  node* q=NULL;
	  while(i<loc-1){
	  	p=p->next;
	  	i++;
	  }
	   q=p->next;
	   p->next = q->next;
	   q->next = NULL;
	   free(q);
	  
	 
		
		}
    

  }
  
  
  
  int main(){
  	
  	
  	while(1){
	  
  	printf("Single Linked List Operations \n");
  	
	printf("1. Append \n");
	printf("2. Add at beginning \n");
	printf("3. Add at after \n");
    printf("4. Length \n");
    printf("5. Display \n");
    printf("6. Delete \n");
    printf("7. Quit \n");

	printf("Enter your choice \n");	
	int ch;
	scanf("%d",&ch);
	
	switch(ch){
		case 1: append();
				break;
		case 2: add_begin();
				break;		
        case 3: add_after();
				break;
	    case 4: length();
				break;	
		case 5: display();
				break;	
		case 6: delete_node();
				break;
		case 7: exit(1);
		
		default: printf("Invalid Input \n");
			 						
		
	}
	
	
	}
	 
  }
  
  
  
