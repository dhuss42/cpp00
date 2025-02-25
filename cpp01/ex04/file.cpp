
#include "file.hpp"

file::file(std::string filename, std::string s1, std::string s2) : filename(filename), s1(s1), s2(s2)
{
}

std::string file::get_filename(void)
{
    return (filename);
}

std::string file::get_s1(void)
{
    return (s1);
}

std::string file::get_s2(void)
{
    return (s2);
}



bool    file::s1_is_valid()
{
    std::string s1;

    s1 = get_s1();
    if (s1.empty() || s1 == "\n")
    {
        std::cerr << "Error: search string is invalid" << std::endl;
        return (false);
    }
    return (true);
}

void    file::replace(std::ifstream& src_file, std::ofstream& dst_file)
{
    size_t      pos;
    std::string line;

    while (std::getline(src_file, line))
    {
        pos = 0;
        if ((pos = line.find(get_s1(), pos)) != std::string::npos)
        {
            while (pos != std::string::npos)
            {
                line.erase(pos, get_s1().length());
                line.insert(pos, get_s2());
                pos += get_s2().length();
                pos = line.find(get_s1(), pos);
            }
        }
        dst_file << line;
        if (!src_file.eof())
            dst_file << '\n';
    }
}

void    file::sed_is_for_loosers(const std::string src, const std::string dst)
{
    std::ifstream src_file(src);
    if (!src_file)
    {
        std::cerr << "Error: cannot open source file: " << src << std::endl;
        exit(EXIT_FAILURE);
    }
    std::ofstream dst_file(dst);
    if (!dst_file)
    {
        std::cerr << "Error: cannot open destination file: " << dst << std::endl;
        exit(EXIT_FAILURE);
    }
    if (!s1_is_valid())
        return ;
    replace(src_file, dst_file);
    src_file.close();
    dst_file.close();
}

file::~file()
{
}