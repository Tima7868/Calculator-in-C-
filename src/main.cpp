#include <iostream>
#include <my_header.hpp>

int main()
{
    long double a, b; // first and second anction

    char op; // a operator

    while (true)
    {
        std::cout<<"* * * * * Rulse * * * * *\n";
        std::cout<<"* Use '+' to addition\n";
        std::cout<<"* * Use '-' to subtraction\n";
        std::cout<<"* * * Use '*' to multiplication\n";
        std::cout<<"* * * * Use '/' to division\n";
        std::cout<<"* * * * * Use '**' to exponentiation\n\n\n";

        std::cout << "Enter first anction: ";

        std::cin >> a;

        std::cout << "Enter operator: ";

        std::cin >> op;

        std::cout << "Enter second anction: ";

        std::cin >> b;

        if (op == '+')
            std::cout << a << " + " << b << " = " << addition(a, b)<<"\n";

        if (op == '-')
            std::cout << a << " - " << b << " = " << subtraction(a, b)<<"\n";

        if (op == '*')
            std::cout << a << " * " << b << " = " << multiplication(a, b)<<"\n";

        if (op == '/')
            std::cout << a << " / " << b << " = " << division(a, b)<<"\n";

        std::cout<<"\n\n\n";
    }
}
