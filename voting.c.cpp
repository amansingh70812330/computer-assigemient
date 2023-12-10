#include <stdio.h>
int main()
{ 
 printf("\n\t\t\t\**** Welcome to EVM Voting Machine ****\n");
	int year,month,day,num,p;
	char string[50];
	printf("\n\n Enter your name:- ");
	scanf("%[^\n]*c",string);
	printf("\n Enter your birth date:- ");
	scanf("%d",&day);
	if(day>30){printf("please cheack your date.");}
	else {
	printf("\n enter your birth month:- ");
	scanf("%d",&month);
    if(month>12){printf(" please cheack your month.");}
    else {
	printf("\n enter your birth year:- ");
	scanf("%d",&year);
	if(year>2023){printf(" please cheack your year.");}
	else{
	    int age=2023-year;
	    printf("\n your age is:- %d",age);
		if(age<18){printf(" you are not valid for voting.");}
		else {	printf("\n Enter your aadhar card no:- ");
		scanf("%d",&num);
	 int votes[4] = {0, 0, 0, 0};
    int option, i;
    char candidates[4][20] = {"Candidate 1", "Candidate 2", "Candidate 3", "Candidate 4"};

    while(1) {
        printf(" Please choose your candidate:\n");
        for(i = 0; i < 4; i++) {
            printf(" %d. %s\n", i+1, candidates[i]);
        }
        printf(" 5. Exit\n");
        printf(" Enter your option: ");
        scanf("%d", &option);

        if(option >= 1 && option <= 4) {
            votes[option-1]++;
            printf("\n Thank you for voting!\n");
        } else if(option == 5) {
            break;
        } else {
            printf("\n Invalid option! Please try again.\n");
        }
    }

    printf("\n **** Voting Results ****\n");
    for(i = 0; i < 4; i++) {
        printf(" %s: %d votes\n", candidates[i], votes[i]);
    }
    
}
}
}
}
	return 0;
}
