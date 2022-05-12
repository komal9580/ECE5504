#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void radix_sort(int arr[], int n){ 
    int maximum = arr[0];
    for(int i=1;i<n;i++){
        if(maximum < arr[i])
            maximum = arr[i];
    }
    int digits = 0;
    while(maximum > 0){
        digits++;
        maximum /= 10;
    }
    int power = 1;
    for(int i=0;i<digits;i++){
        int new_array[n];
        int count[10];
        for(int j=0;j<10;j++)
            count[j] = 0;
        for(int j=0;j<n;j++){
            int num = (arr[j]/power) % 10;
            count[num]++;
        }
        for(int j=1;j<10;j++){
            count[j] += count[j-1];
        }
    for(int j=n-1;j>=0;j--){
         int num = (arr[j]/power) % 10;
            new_array[count[num]-1] = arr[j];
            count[num]--;
        }
        for(int j=0;j<n;j++)
            arr[j] = new_array[j];
        power *= 10;
    }
}
void fill_func(int array[50][10000], int max)
{
  for (int i = 0; i < 50; i++){
    for (int j = 0; j < 10000; j++){
      array[i][j] = (rand() % max) + 1;
    }
  }
}

void multiply_op(int arr[]){
  for (int i = 0; i<10000; i++){
      arr[i] = arr[i] * 10;
   }
}

int main(){
	srand(time(NULL));
	static int arr[50][10000];
	fill_func(arr, 1000);
	int arr_tmp[10000];
	for(int j = 0; j < 50; j++){
		for(int i = 0; i < 10000; i++){
			arr_tmp[i] = arr[j][i];
		}
		int n = sizeof(arr_tmp)/sizeof(n);
		radix_sort(arr_tmp, n);
		for(int i = 0; i < 10000; i++){
			arr[j][i] = arr_tmp[i];
		}}
    for(int j = 0; j < 50; j++){
		for(int i = 0; i < 10000; i++){
			arr_tmp[i] = arr[j][i];
	} 
		multiply_op(arr_tmp);
	}
    return 0;
}