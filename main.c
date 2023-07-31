#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
int main()
{
    // question 1
    int number;
    printf("Enter an integer:");
    scanf("%d",&number);
    if(number%2==0){
        printf("%d is a even number",number);
    }else{
        printf("%d is a odd number",number);
    }

{
    int number;
    printf("Enter an integer:");
    scanf("%d",&number);
    switch(number%2)
    {
        case 0:
        printf("%d is a even number",number);
        break;
        case 1:
        printf("%d is a odd number",number);
        break;
    }
}

    // question 2
{
    float n1,n2,anwser;
    char operator;
    printf("Enter two numbers:");
    scanf("%f %f",&n1,&n2);
    printf("Enter operator(+ ,-,*,/):");
    scanf(" %c",&operator);
    switch(operator)
    {
        case '+':
            answer=n1+n2;
            break;
        case '-':
            answer=n1-n2;
            break;
        case '*':
            answer=n1*n2;
            break;
        case '/':
            answer=n1/n2;
            break;
        default:
            printf("Invalid");
    }
    printf("answer=%.2f",answer);
}
    // question 3
{
    int choice;
    float radius,answer;
    printf("1.Calculate the Circumference of a circle\n");
    printf("2.Calculate the area of a circle\n");
    printf("2.Calculate the volume of a sphere\n");

    printf("Enter your choice(1/2/3):");
    scanf("%d",&choice);
    if(choice==1 || choice==2 || choice==3){
        printf("Enter radius:");
        scanf("%f",&radius);
        switch(choice)
        {
        case 1:
            answer=2*PI*radius;
            printf(" Circumference of the circle:%.2f\n",answer);
            break;
        case 2:
            answer=PI*pow(radius,2);
            printf(" Area of the circle:%.2f\n",answer);
            break;
        case 3:
            answer=(4.0/3.0)*PI*pow(radius,3);
            printf(" Volume of the sphere:%.2f\n",answer);
            break;
        }
    }else{
        printf("Invalid choice\n");
    }
}

// question 4
{
    char letter;
    printf("Enter a letter:");
    scanf(" %c",&letter );
    switch(letter)
    {
    case 'a':
        printf("a is a vowel");
        break;
    case 'A':
        printf("A is a vowel");
        break;
    case 'e':
        printf("e is a vowel");
        break;
    case 'E':
        printf("E is a vowel");
        break;
    case  'i':
        printf("i is a vowel");
        break;
    case 'I':
        printf("I is a vowel");
        break;
    case 'o':
        printf("i is a vowel");
        break;
    case 'O':
        printf("O is a vowel");
        break;
    case 'u':
        printf("u is a vowel");
        break;
    case 'U':
        printf("U is a vowel");
        break;
    default:
        printf(" %c is not a vowel",letter);

    }

}

// question 5
{
    int month;
    printf("Enter month number:");
    scanf("%d",&month);
    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Number of days:31");
            break;
        case 2:
            printf("Number of days:28");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Number of days:30");
            break;
        default:
            printf("Invalid month");
    }
}

return 0;
}
