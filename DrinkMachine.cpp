#include <iostream>

int main()
{
    std::cout << "Enter a number to select a beverage" << std::endl;
    std::cout << "1 = Bubble Tea" << std::endl;
    std::cout << "2 = Thai Iced Tea" << std::endl;
    std::cout << "3 = Ramune" << std::endl;
    std::cout << "4 = Vietnamese Iced Coffee" << std::endl;
    std::cout << "5 = Calpico" << std::endl;
    int beverage; // declaring a variable that will require user to input a variable between 1 and 5
    std::cin >> beverage; // getting user input and initializing "beverage" with this value

      switch (beverage)
      {
          case 1:
              std::cout << "Enjoy your \"Bubble Tea\"!" << std::endl;
              break;
          case 2:
              std::cout << "Enjoy your \"Thai Iced Tea\"!" << std::endl;
              break;
          case 3:
              std::cout << "Enjoy your \"Ramune\"!" << std::endl;
              break;
          case 4:
              std::cout << "Enjoy your \"Vietnamese Iced Coffee\"!" << std::endl;
              break;
          case 5:
              std::cout << "Enjoy your \"Calpico\"!" << std::endl;
              break;
          default:
              std::cout << "Error. choice was not valid, here is your money back.";
      }


      // Below is a modifification of the program so that it uses if/else statements instead of switch statements

     /* if (beverage == 1)
        {
            std::cout << "Enjoy your \"Bubble Tea\"!" << std::endl;
        }
        else if (beverage == 2)
        {
            std::cout << "Enjoy your \"Thai Iced Tea\"!" << std::endl;
        }
        else if (beverage == 3)
        {
            std::cout << "Enjoy your \"Ramune\"!" << std::endl;
        }
        else if (beverage == 4)
        {
            std::cout << "Enjoy your \"Vietnamese Iced Coffee\"!" << std::endl;
        }
        else if (beverage == 5)
        {
            std::cout << "Enjoy your \"Calpico\"!" << std::endl;
        }
        else
        {
            std::cout << "Error. choice was not valid, here is your money back.";
        } */

        system("pause");

        }