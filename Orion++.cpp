#include <iostream>
#include <string>

int main() {
    std::string print_func_output;
    std::string script;
    std::string scriptCallled_userinput;
    std::string input_question;
    std::string userin_command;
    std::string userIn_input;
    std::string userIn_internalCommand;
    std::string acc_userIn;
    std::string if_Printin;

    
    do {
    std::cout << "cmd.ent: " << std::endl;
    std::cin >> script;

    if (script == "cmd.std:print.func{{>>cso.prt;") {
        std::cout << "";

        std::cin.ignore(); 

        
        std::getline(std::cin, print_func_output);
        std::cout << "" << std::endl;
        std::cout << print_func_output << std::endl;
    }

    if (script == "cmd.std:print.func{while||true<>}{{>>cso.prt;") {
        std::cout << "" << std::endl;

  
        std::cin.ignore(); 
        std::getline(std::cin, print_func_output);

       
        for (int i = 0; i < 100; ++i) {
            std::cout << print_func_output << std::endl; 
        }
      }
    if (script == "char.[in]/|str.var::as|lv{userIn}||prog>>ask_ques;") {
        std::cout << "";

        std::cin.ignore(); 
        std::getline(std::cin, userin_command);

        if (userin_command == "if::userIn==<>|const//synt;") {
            std::cout << "";

            std::cin.ignore();
            std::getline(std::cin, userIn_input);

            std::cout << "";

            std::cin.ignore();
            std::getline(std::cin, input_question);

            std::cout << "";

            std::cin.ignore();
            std::getline(std::cin, userIn_internalCommand);
            
            if (userIn_internalCommand == "cmd.std:print.func[in]{{>>cso.prt");
                std::cout << "";

                std::cin.ignore();
                std::getline(std::cin, if_Printin);

                std::cout << input_question << std::endl;

                std::cin.ignore();
                std::getline(std::cin, acc_userIn);

                if (acc_userIn == userIn_input);
                    std::cout << if_Printin << std::endl;
        }
        
    }

    } while(script != "cmd.orion++//|-->exit.quit();");
        


    return 0;
}
