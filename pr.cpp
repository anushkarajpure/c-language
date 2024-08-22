#include<stdio.h>
#include<conio.h>

 main()
{
	char grade;
	int mark;
	
	printf("enter the marks:"); 
	scanf("%d",&mark);
	 
	grade=(mark>=90&&mark<=100)?'A'
	     :(mark>=80&&mark<90)?'B'
	     :(mark>=70&&mark<80)?'C'
	     :(mark>=60&&mark<70)?'D'
	     :(mark>=40&&mark<60)?'E'
	     :'F';
	     
	printf("your grade is %c:",grade);     
}
