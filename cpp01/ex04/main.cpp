
#include "file.hpp"

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        file f(std::string(argv[1]) + ".replace", argv[2], argv[3]);
        f.sed_is_for_loosers(argv[1], f.get_filename());
    }
    else
        std::cout << "Error: wrong number of args\n";
}

//-------TESTS---------//

//[Success]
// ./Sed_is_for_losers "test" "o" "x"
// ./Sed_is_for_losers "test" "hallo" "ha"
// ./Sed_is_for_losers "test" "hallo" "ByeBye"
// ./Sed_is_for_losers test "a" ""
// ./Sed_is_for_losers "test" "a" "a"
// ./Sed_is_for_losers "test" "a" "aa"
// ./Sed_is_for_losers "test" "a" "aaaaaaaaaaaaaaaaaa"

//[Errors]
// ./Sed_is_for_losers test "" "a"
// ./Sed_is_for_losers test "" ""
// ./Sed_is_for_losers noexist "a" "b"
// ./Sed_is_for_losers
// ./Sed_is_for_losers "test" "a" "b" "c"