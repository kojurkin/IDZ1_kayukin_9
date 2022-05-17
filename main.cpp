#include <iostream>
#include <fstream>
#include <random>

double average (char ch,int res)

int main()
{
    char ch;
    std::string inname, outname;
    std::cout << "Enter input file name (\"test.txt\" for test program)" << std::endl;
    std::cin >> inname;
    std::cout << "Enter output file name" << std::endl;
    std::cin >> outname;

/*
    int testnumcount;
    std::cout << "Enter count of symbols" << std::endl;
    std::cin >> testnumcount;
    char testch;
    std::ofstream outtestfile ("test.txt");
    for (int i = 0; i < testnumcount; i++)
    {
        testch = rand() % 127;
        outtestfile << testch << " ";
    }
    outtestfile.close();
*/

    std::ifstream inputfile (inname);
    std::ofstream outputfile (outname);
    if(!inputfile)
    {
        std::cout << "The File wasn`t opened" << std::endl;
    }
    while (inputfile != EOF)
    {

    }
    inputfile.close();
    outputfile.close();
    return 0;
}
