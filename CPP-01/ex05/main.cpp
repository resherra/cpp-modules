#include "Harl.hpp"

int main()
{
    Harl harl;

    //not valid
    harl.complain("wwa");

    //valid
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
}