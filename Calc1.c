#include <stdio.h>
int main()
{
    //declaring the operator variable and operands variables
    
    int a, b, c, d, e, f;
    char op1;
    int result;

    //Basic info and rules for the calc program

    printf("This calculator can only perform basic arthmetic operations and is limited to 6 maximum operands.\n");
    
    printf(" NOTE - The operators will work in order of the operands entered.\n");

    //taking input for the first two operands and a single operator
    //input for operands

    printf("Enter the first operand:");
    scanf("%d",&a);

    while ((getchar()) != '\n');//flush line

    //input for operator

    printf("Enter operator of your choice: -, +, /, X:");
    scanf(" %c",&op1);

    while ((getchar()) != '\n');

    printf("Enter the second operand:");
    scanf("%d",&b);

    while ((getchar()) != '\n');

    //calculation for the fist two input operands
    //using if and else statements

    result=a;
    if (op1=='+')
    result+=b;
    else if (op1=='-')
    result-=b;
    else if (op1=='/')
    result/=b;
    else if (op1=='X')
    result*=b;
    else{
        printf("Invalid operator.\n");
        return 1;
    }
    
    //declaring operator 2 and choice 1 and choice 2
    char op2, op3, op4;
    char choice1, choice2, choice3;
    
    //asking the user whether they want a 3rd operand or not

    printf("Do you want a thrid operand : Y/N.\n");
    scanf(" %c",&choice1);

    while ((getchar()) != '\n'); //flush line

    //usinng if and else statments with logical operators

    if(choice1=='Y'|| choice1=='y'){
        //input for the operator in between the second operand and the third operand
        printf("Enter the operator: +, -, /, X:");
        scanf(" %c",&op2);
        while ((getchar()) != '\n');

        //input for third operand

        printf("Enter the third operand:");
        scanf("%d",&c);
        while ((getchar()) != '\n');//flash line

        //using if and else statements for calculations and result

        if (op2=='+')
        result+=c;
        else if (op2=='-')
        result-=c;
        else if (op2=='/')
        result/=c;
        else if (op2=='X')
        result*=c;
        else{
            printf("invalid input.\n");
            return 1;
        
        }

        //asking for the fourth operand
        printf("Do you want a fourth operator : Y/N :");
        scanf(" %c",&choice2);
        while ((getchar()) != '\n'); //flash line

        if(choice2=='Y' || choice2=='y'){
            //input the operator between the third operand and the fourth operand
            printf("Enter the operator : +, -, /, X :");
            scanf(" %c",&op3);
            while ((getchar()) != '\n');

            //input the 4th operand

            printf("Enter the fourth operand :");
            scanf("%d",&d);
            while ((getchar()) != '\n'); //flash ;line
            
            //if and else statements used for the result 

            if (op3 == '+') result += d;
            else if (op3 == '-') result -= d;
            else if (op3 == 'X') result *= d;
            else if (op3 == '/') result /= d;
            else {
                printf("Invalid operator.\n");
                return 1;
            }

            //asking for the last operand
            printf("Do you want a fifth (last) operand : Y/N :");
            scanf(" %c",&choice3);
            while ((getchar()) != '\n');

            //using if and else

            if(choice3=='Y'||choice3=='y'){
                //input operator between the fourth operator and the fifth operator
                printf("Enter the operator: -, +, /, X:");
                scanf(" %c",&op4);
                while ((getchar()) != '\n'); //flash line

                //input the last operand
                printf("Enter the fifth operand:");
                scanf("%d",&e);
                while ((getchar()) != '\n');

                //using if and else
                
                if(op4=='+')
                result+=e;
                else if (op4=='-')
                result-=e;
                else if (op4=='/')
                result/=e;
                else if (op4=='X')
                result*=e;
                else{
                    printf("invalid operator.\n");
                    return 1;
                }

                


        }
    }
    printf("Final result: %d\n", result);
    return 0;
    }
}
