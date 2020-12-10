#include <stdio.h>

typedef struct{
	double max;
	double min;
	double avg;
}Stats;

Stats getStatistics(double [], int);
int main(void){
	double arr[4] = {2.2, 3.3, 5.2, 4.6};
	Stats st = getStatistics(arr, 4);
	printf("\nMax = %f", st.max);
	printf("\nMin = %f", st.min);
	printf("\nAvg = %f", st.avg);
	
}

Stats getStatistics(double arr[], int size){
	Stats st;
	int i;
	double _sum = 0, _max = arr[0], _min = arr[0];
	for(i = 0; i < size; i++){
		_sum += arr[i];
		if(arr[i] > _max){
			_max = arr[i];
		}
		if(arr[i] < _min){
			_min = arr[i];
		}
	}
	
	st.max = _max;
	st.min = _min;
	st.avg = _sum / size;
	return st;
}

