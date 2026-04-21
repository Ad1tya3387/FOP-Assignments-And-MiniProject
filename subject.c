#include <stdio.h>

void main(){
	
	float maths,physics,english,biology,chemistry;
	printf("Enter marks in order: Maths, Physics English, biology, chemistry:\n");
	scanf("%f%f%f%f%f", &maths, &physics, &english, &biology, &chemistry);
	
	float average = (maths+physics+english+biology+chemistry)/5;
	
	if(maths < 40 || maths < 40 || maths < 40 || maths < 40 || maths < 40){
	printf("You have Failed in One of Your Subjects Resulting in Term Fail :(\n");
	} 
	
		if(average >= 50 && average < 60){
			printf("You have Passed With %.2f Percentage!\n", average);
		}else if(average >= 60 && average < 70){
			printf("You have Passed With Merit with %.2f Percentage!\n", average);
		}else if(average >= 70 && average < 80){
			printf("You have Passed With  Distinction with %.2f Percentage!\n", average);
		}else if(average >= 80 && average < 100){
			printf("You have Passed With First Class with Distinction with %f Percentage!\n", average);
		}else{
			printf("You have Failed :(\n");
			}
	}

