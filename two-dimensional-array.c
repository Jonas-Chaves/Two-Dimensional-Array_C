#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delay(int number_of_seconds) 
{ 
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;
    // Storing start time
    clock_t start_time = clock();
    // looping till required time is not achieved 
    while (clock() < start_time + milli_seconds); 
}


int main (){
    
while(1){
  int m[11][10] = {};
  int aux = 90;
  int random, min, max;
  
  time_t t;
  srand((unsigned) time(&t));

// ############ add value ############
  for (int i = 10; i >= 0; i--){
      for (int j = 9; j >= 0; j--){
	        if (aux == 90){
	            m[i][j] = aux;
	        }else{
	            int paraLoop = 1;
	        
	            while(paraLoop <=5){
    	            random = rand() % 90;
    	            min = m[i+1][j] - 11;
    	            max = m[i+1][j] - 1;
    	            if(random < max && random > min){
    	                paraLoop = 10;
    	            }
	            }
		        m[i][j] = random;
	        }
      }
      aux = aux - 10;
  }

// ############ Print matriz ############
        for (int i = 0; i < 11; i++){
            for (int j = 0; j < 10; j++){
	            printf (" %d ", m[i][j]);
	        }
	        printf ("\n");
        }

    delay(5);
    system("clear");
}
    return 0;
}
