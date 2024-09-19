#include <stdio.h>
#include <stdlib.h>

int main(){

	int sum = 0;
	int cur_store;
	int cur_term = 2;
	int prev_term = 1;
	
	while (cur_term < 4000000){
		printf("%d\n", cur_term);
		if (cur_term % 2 == 0){
			sum = sum + cur_term;
		}
		cur_store = cur_term;
		cur_term = cur_term + prev_term;
		prev_term = cur_store;
	}
	printf("%d", sum);
}
