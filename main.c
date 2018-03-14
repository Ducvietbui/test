#include "score.h"		//user-define heder file

int	main(void){
	int scores[MAX], marks[MAX];
	int statistics[6]={0};	//for 6 different marks from 0 to 5

	input_scores(scores);
	evaluation(scores, marks);
	classification(marks, statistics);
	output_results(marks, statistics);

	return 0;
}
