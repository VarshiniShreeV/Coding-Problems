/*
Problem: https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/mojtaba-prepares-contest-29b2a044/ 
Category : Basic Programming
Difficulty : Easy
Date : 10/06/2025
Language : C
*/


#include <stdio.h>
 
int main(){
	int t, i, j, g, p, n, c1, c2, temp1, temp2 ;
	scanf("%d", &t); // t - Number of Test Cases
 
	for (i=0;i<t;i++){
		scanf("%d %d", &g, &p); // g - cost of green balloon, p - cost of purple balloon
		scanf("%d", &n); // n - number of participants
 
		int q1=0, q2=0; // q1 - first question, q2 - second question
 
		for (j=0;j<n;j++){
			scanf("%d %d", &temp1, &temp2); // Input stored in temporary variables
			q1+=temp1;
			q2+=temp2;
		}
		c1 = (q1 * g) + (q2 * p); // Cost 1 => Q1 - Green Balloons, Q2 - Purple Balloons 
		c2 = (q1 * p) + (q2 * g); // Cost 2 => Q1 - Purple Balloons, Q2 - Green Balloons
 
		if (c1 < c2) // Display the minimum cost in each test case
        {
			printf("%d\n", c1);
		}
		else{
			printf("%d\n", c2);
		}
	}
}