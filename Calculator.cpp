class Calculate
{
    //Public member functions
public:
    void addition();
    void subtraction();
    void multiplication();
    void division();
    void print();
    //Private data members
private:
    double number1, number2;
};

//Print function
void Calculate::print()
{
    std::cout << "Enter a number: " << std::endl;
    std::cin >> number1;

    std::cout << "Enter another number: " << std::endl;
    std::cin >> number2;
}
//Addition function
void Calculate::addition()
{
    std::cout << std::endl << "The result is: " << number1 + number2 << std::endl << std::endl;
}
//Subtraction function
void Calculate::subtraction()
{
    std::cout << std::endl << "The result is: " << number1 - number2 << std::endl << std::endl;
}
//Multiplication function
void Calculate::multiplication()
{
    std::cout << std::endl << "The result is: " << number1 * number2 << std::endl << std::endl;
}
//Division function
void Calculate::division()
{
    std::cout << std::endl << "The result is: " << number1 / number2 << std::endl << std::endl;
}

int main()
{
    Calculate test{};
    char response{};
    //Intro message
    std::cout << "Welcome to James' calculator!" << std::endl;
    std::cout << "Press 'q' to end the session." << std::endl << std::endl;
    //Loops until the user enters 'q'
    do
    {
        //Asking the user what operation they desire
        std::cout << "Do you want to add, subtract, multiply, or divide? ('a', 's', 'm', 'd')" << std::endl;
        std::cin >> response;
        //Switch statement that calls correct functions using a class
        switch (response)
        {
        //Addition operation
        case 'a':
            test.print();
            test.addition();
            break;
        //Subtraction operation
        case 's':
            test.print();
            test.subtraction();
            break;
        //Multiplication operation
        case 'm':
            test.print();
            test.multiplication();
            break;
        //Division operation
        case 'd':
            test.print();
            test.division();
            break;
        //Quitting the program
        case 'q':
            std::cout << "Thanks for using my calculator." << std::endl;
            break;
        //Anything else
        default:
            std::cout << "Wrong command, try again." << std::endl;
            break;
        }
    } while (response != 'q');  
}
