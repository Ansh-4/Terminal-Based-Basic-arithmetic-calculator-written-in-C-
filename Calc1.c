#include <stdio.h>

int main()
{
    //declaring the operator variable and operands variables
    
    int a, b, c, d, e, f;
    char op1;
    int result;
    int rows, cols;
    int choice01, choice02;
    int i, j, k;
    int el1, el2;

    int ma[100][100]; 
    int mb[100][100];
    int sm[100][100];
    int r1, r2, c1, c2;
    int Result[100][100];

    //Basic info and rules for the calc program

    printf("===== Welcome to the Multi-Function Calculator =====\n");
    printf("This calculator can perform basic arithmetic operations and matrix operations (addition only for now).\n");
    printf("NOTE - The operators will work in the order the operands are entered.\n");
    printf("You can enter up to 6 operands in arithmetic mode.\n\n");

    //input for operands
    printf("Choose the type of problem you want to solve:\n");
    printf("1 - Matrix Sum and Multiplication\n");
    printf("2 - Arithmetic Operations\n");
    printf("3 - Checking if the number is prime or not\n");
    printf("4 - Calculating factorial of a number\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice01);

    while ((getchar()) != '\n');

    //different options using if and else

    switch(choice01) {
        case 1:
            printf("\nEnter 1 for Matrix Addition\n");
            printf("Enter 2 for Matrix Multiplication\n");
            printf("Enter your choice: ");
            scanf("%d", &choice02);

            if (choice02 == 1) {
                printf("\nEnter the number of rows for the matrix: ");
                scanf("%d", &rows);
                while ((getchar()) != '\n');

                printf("Enter the number of columns for the matrix: ");
                scanf("%d", &cols);
                while ((getchar()) != '\n');

                printf("\nEnter the elements of Matrix A (%d x %d):\n", rows, cols);
                for (i = 0; i < rows; i++) {
                    for (j = 0; j < cols; j++) {
                        scanf("%d", &ma[i][j]);
                    }
                }

                //input for matrix b
                printf("\nEnter the elements of Matrix B (%d x %d):\n", rows, cols);
                for (i = 0; i < rows; i++) {
                    for (j = 0; j < cols; j++) {
                        scanf("%d", &mb[i][j]);
                    }
                }

                for (i = 0; i < rows; i++) {
                    for (j = 0; j < cols; j++) {
                        sm[i][j] = ma[i][j] + mb[i][j];
                    }
                }

                printf("\nResultant Matrix (A + B):\n");
                for (i = 0; i < rows; i++) {
                    for (j = 0; j < cols; j++) {
                        printf("%d\t", sm[i][j]);
                    }
                    printf("\n");
                }
            }
            else if (choice02 == 2) {
                printf("\nEnter the number of rows for the Matrix A: ");
                scanf("%d", &r1);
                while ((getchar()) != '\n');
                printf("\nEnter the number of columns for the matrix A:");
                scanf("%d",&c1);
                while ((getchar()) != '\n'); // flash line

                printf("\nEnter the number of rows for the Matrix B:");
                scanf("%d",&r2);
                while ((getchar()) != '\n'); // flash line


                printf("\nEnter the number of columns for the Matrix B: ");
                scanf("%d", &c2);
                while ((getchar()) != '\n');

                if(c1!=r2){
                    printf("Error: Column of first matrix must equal row of second matrix.\n");
                    return 1;
                }


                //input matrix a 
                printf("\nEnter the elements of Matrix A :");
                for(i=0;i<r1;i++){
                    for(j=0;j<c1;j++){
                        scanf("%d",&ma[i][j]);
                    }
                }

                //input matrix b
                printf("\nEnter the elements of Matrix B :");
                for(i=0;i<r2;i++){
                    for(j=0;j<c2;j++){
                        scanf("%d",&mb[i][j]);
                    }
                }

                //multiplication of matrices

                for(int i=0;i<r1;i++){
                    for(int j=0;j<c2;j++){
                        Result[i][j]=0;
                    }
                }

                
                for(i=0;i<r1;i++){
                    for(j=0;j<c2;j++){
                        for(int k=0;k<c1;k++){
                            Result[i][j]+=ma[i][k]*mb[k][j];
                        }
                    }
                }

                //result
                printf("\nmultiple of the Matrices A and B will be:");
                for(i=0;i<r1;i++){
                    for(j=0;j<c2;j++){
                        printf("%d\t\n",Result[i][j]);
                    }
                    printf("\n");
                }
                return 0;



            }
            else {
                printf("\nInvalid input.\n");
            }
            break;

        case 2:
            //arithmetic

            printf("\nEnter the first operand: ");
            scanf("%d", &a);
            while ((getchar()) != '\n');

            //input for operator
            printf("Enter operator (+, -, /, X): ");
            scanf(" %c", &op1);
            while ((getchar()) != '\n');

            printf("Enter the second operand: ");
            scanf("%d", &b);
            while ((getchar()) != '\n');

            //calculation for the fist two input operands
            //using if and else statements

            result = a;
            if (op1 == '+')
                result += b;
            else if (op1 == '-')
                result -= b;
            else if (op1 == '/')
                result /= b;
            else if (op1 == 'X')
                result *= b;
            else {
                printf("\nInvalid operator.\n");
                return 1;
            }

            //declaring operator 2 and choice 1 and choice 2
            char op2, op3, op4;
            char choice1, choice2, choice3;

            //asking the user whether they want a 3rd operand or not
            printf("\nDo you want a third operand? (Y/N): ");
            scanf(" %c", &choice1);
            while ((getchar()) != '\n');

            //usinng if and else statments with logical operators

            if (choice1 == 'Y' || choice1 == 'y') {
                printf("Enter operator (+, -, /, X): ");
                scanf(" %c", &op2);
                while ((getchar()) != '\n');

                printf("Enter the third operand: ");
                scanf("%d", &c);
                while ((getchar()) != '\n');

                if (op2 == '+')
                    result += c;
                else if (op2 == '-')
                    result -= c;
                else if (op2 == '/')
                    result /= c;
                else if (op2 == 'X')
                    result *= c;
                else {
                    printf("\nInvalid operator.\n");
                    return 1;
                }

                printf("\nDo you want a fourth operand? (Y/N): ");
                scanf(" %c", &choice2);
                while ((getchar()) != '\n');

                if (choice2 == 'Y' || choice2 == 'y') {
                    printf("Enter operator (+, -, /, X): ");
                    scanf(" %c", &op3);
                    while ((getchar()) != '\n');

                    printf("Enter the fourth operand: ");
                    scanf("%d", &d);
                    while ((getchar()) != '\n');

                    if (op3 == '+') result += d;
                    else if (op3 == '-') result -= d;
                    else if (op3 == 'X') result *= d;
                    else if (op3 == '/') result /= d;
                    else {
                        printf("\nInvalid operator.\n");
                        return 1;
                    }

                    printf("\nDo you want a fifth (last) operand? (Y/N): ");
                    scanf(" %c", &choice3);
                    while ((getchar()) != '\n');

                    if (choice3 == 'Y' || choice3 == 'y') {
                        printf("Enter operator (+, -, /, X): ");
                        scanf(" %c", &op4);
                        while ((getchar()) != '\n');

                        printf("Enter the fifth operand: ");
                        scanf("%d", &e);
                        while ((getchar()) != '\n');

                        if (op4 == '+')
                            result += e;
                        else if (op4 == '-')
                            result -= e;
                        else if (op4 == '/')
                            result /= e;
                        else if (op4 == 'X')
                            result *= e;
                        else {
                            printf("\nInvalid operator.\n");
                            return 1;
                        }
                    }
                }
            }

            printf("\n=== Final Result: %d ===\n", result);
            break;

        default:
            printf("\nInvalid input.\n");
            break;
    }

    return 0;
}

}
