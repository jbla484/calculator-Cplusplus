class Calculate
{
public:
    void addition();
    void subtraction();
    void multiplication();
    void division();
    void print();
private:
    double number1, number2;
};

int main()
{
    Calculate test{};
    char response{};

    std::cout << "Welcome to James' calculator!" << std::endl;
    std::cout << "Press 'q' to end the session." << std::endl << std::endl;

    do
    {
        std::cout << "Do you want to add, subtract, multiply, or divide? ('a', 's', 'm', 'd')" << std::endl;
        std::cin >> response;

        switch (response)
        {
        case 'a':
            test.print();
            test.addition();
            break;
        case 's':
            test.print();
            test.subtraction();
            break;
        case 'm':
            test.print();
            test.multiplication();
            break;
        case 'd':
            test.print();
            test.division();
            break;
        case 'q':
            std::cout << "Thanks for using my calculator." << std::endl;
            break;
        default:
            std::cout << "Wrong command, try again." << std::endl;
            break;
        }
    } while (response != 'q');  
}

void Calculate::print()
{
    std::cout << "Enter a number: " << std::endl;
    std::cin >> number1;

    std::cout << "Enter another number: " << std::endl;
    std::cin >> number2;
}

void Calculate::addition()
{
    std::cout << std::endl << "The result is: " << number1 + number2 << std::endl << std::endl;
}

void Calculate::subtraction()
{
    std::cout << std::endl << "The result is: " << number1 - number2 << std::endl << std::endl;
}

void Calculate::multiplication()
{
    std::cout << std::endl << "The result is: " << number1 * number2 << std::endl << std::endl;
}

void Calculate::division()
{
    std::cout << std::endl << "The result is: " << number1 / number2 << std::endl << std::endl;
}
