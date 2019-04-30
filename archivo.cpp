#include <iostream>
#include <fstream>
using namespace std;

#define PI 3.1415; 

int main(){
    float u = 0;  
    float U[101][101];
    float U_old[101][101];
    int i;
    int j;
    float delta_x = 0.01;
    float delta_y = 0.01;
   
    
    for (i=1; i<100 ; i++){
        
      if (i<39 && i>41 && i<59 && i>61){
          
          for (j=1; j<100 ; j++){
              
            if(j<19 && j>21 && j<79 && j>81){
                 
                U[i][j]= 0.25*(U_old[i+1][j] + U_old[i-1][j] + U_old[i][j+1] + U_old[i][j-1]) ;
                
            }
            }
            
        }else
      {
          
          U[40][60];
      } cout  << i << " " << j << endl ;
      }  
        
