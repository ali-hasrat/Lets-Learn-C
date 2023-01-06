//program to print H-pattern
#include<stdio.h>
void  main( )
{ 
    int i,j,k;
for(i=1;i<=8;i++) 
 { 
  for(j=1;j<2;j++) 
  { 
   printf("*"); 
  } 
for(k=1;k<4;k++)        
 {       
  if(i>3&&i<5)       
  {        
   printf("**");   
  }   
 else   
  {    
  printf("  ");           //two spaces   
  }          
 }   
for(j=5;j<6;j++)       
  { 
   printf("*");     
  }            
  printf("\n"); 
  }
}
