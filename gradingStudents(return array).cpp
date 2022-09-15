/*
HackerLand University has the following grading policy:

Every student receives a grade in the inclusive range from 0 to 100.
Any grade less than 40 is a failing grade.
Sam is a professor at the university and likes to round each student's grade according to these 
rules:

If the difference between the grade and the next multiple of 5 is less than 3, round grade up to the next 
multiple of 5.
If the value of grade is less than 38, no rounding occurs as the result will still be a failing grade.
Examples
*grade = 84 : 84 round to 85 (85 - 84 is less than 3)
*grade = 29 : 29 do not round (result is less than 40)
*grade = 57 : 57 do not round (60 - 57 is 3 or higher)
Given the initial value of grade for each of Sam's n students, write code to automate the rounding process.

Function Description

Complete the function gradingStudents in the editor below.

gradingStudents has the following parameter(s):

int grades[n]: the grades before rounding

Returns

int[n]: the grades after rounding as appropriate
Input Format

The first line contains a single integer, n, the number of students.
Each line i of the n subsequent lines contains a single integer, grades[i].

Sample Input 0

4
73
67
38
33
Sample Output 0

75
67
40
33
*/

#include <bits/stdc++.h>

using namespace std;

int *gradingStudents(int grades[], int len){
    for(int i = 0; i < len; i++){
        if(grades[i] >= 38) {
            int rem = grades[i] % 5;
            if(rem == 3){
                grades[i] = grades[i] + (rem - 1);
            }
            else if(rem == 4){
                grades[i] = grades[i] + 1;
            }
        }
    }
    
    return grades;
}

int main(){
    int n;
    cin >> n;
    
    int arr[n];
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int *ans = gradingStudents(arr, n);
    
    for(int i = 0; i < n; i++){
        cout << ans[i] << endl;
    }
    
    cout<< endl;
    
    return 0;
}
