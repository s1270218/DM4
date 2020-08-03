#include<stdio.h>
#include<stdlib.h>

int main(){
 int i,n,head=0,tail=0;
 //add_name
 char str[10];
 printf("Who are you?\n" );
 scanf("%s",str);
 printf("Hello,%s\n",str);
 //cointos
 printf("Tossing a coin...\n");

 for(i=0; i<3; i++){
     n = rand();
     if(n%2==0){
         printf("Round %d; Head\n",i+1);
         head++;
     }
     else{
         printf("Round %d; Tail\n",i+1);
         tail++;
     }
 }    
 printf("Heads: %d, Tails: %d\n",head,tail);
 return 0;
}
