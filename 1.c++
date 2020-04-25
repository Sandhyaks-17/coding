#include<iostream.h>
int main()
{
char op;
float num1,num2;
cout<<"Enter operand etiher + or - or * or / :";
cin>>op;
cout<<"Enter two operands";
cin>>num1>>num2;
switch(op)
case '+':
            cout << num1+num2;
            break;

        case '-':
            cout << num1-num2;
            break;

        case '*':
            cout << num1*num2;
            break;

        case '/':
            cout << num1/num2;
            break;

        default:
            cout << "Error! operator is not correct";
            break;
    }

    return 0;
}
