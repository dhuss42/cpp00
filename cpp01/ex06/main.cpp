#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl    harl;

    if (argc == 2)
        harl.harl_filter(argv[1]);
    else
        std::cerr << "Error: wrong number of arguments" << std::endl;
}
