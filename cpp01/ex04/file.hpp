#ifndef FILE_HPP
# define FILE_HPP

#include <iostream>
#include <fstream>
#include <string>

class file
{
    private:
        std::string filename;
        std::string s1;
        std::string s2;
    public:
        file();
        file(std::string filename, std::string s1, std::string s2);
        ~file();
        void    sed_is_for_loosers(const std::string src, const std::string dst);
        void    replace(std::ifstream& src_file, std::ofstream& dst_file);
        bool    s1_is_valid();
        std::string get_filename(void);
        std::string get_s1(void);
        std::string get_s2(void);
};

#endif