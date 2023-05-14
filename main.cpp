/* Console_colour (Demo file)
 * A simple header file to add colour to your console output.
 * GitHub: https://www.github.com/awesomelewis2007/cpp_console_colour
 * Licence: GNU General Public License v3.0
 * By: Lewis Evans
 */

#include "src/colour.h"
#include <iostream>
int main(int argc, char const *argv[]) {
    bool test_types = false;
    bool test_colour_grid = false;
    bool test_colours = false;

    if (argc > 1) {

        if (std::string(argv[1]) == "-t" || std::string(argv[1]) == "--types") {
            test_types = true;
        } else if (std::string(argv[1]) == "-g" ||
                   std::string(argv[1]) == "--grid") {
            test_colour_grid = true;
        } else if (std::string(argv[1]) == "-c" ||
                   std::string(argv[1]) == "--colours") {
            test_colours = true;
        } else if (std::string(argv[1]) == "-h" ||
                   std::string(argv[1]) == "--help") {
            std::cout << "Usage: " << argv[0] << "[OPTIONS]" << std::endl;
            std::cout << "Options:" << std::endl;
            std::cout << "  -c, --colours\t\tTest text colours" << std::endl;
            std::cout << "  -g, --grid\t\tTest colour grid" << std::endl;
            std::cout << "  -t , --types\t\tTest text types" << std::endl;
            std::cout << "  -a, --all\t\tTest all" << std::endl;
            std::cout << "  -h, --help\t\tDisplay this help and exit"
                      << std::endl;
            return 0;
        } else if (std::string(argv[1]) == "-a" ||
                   std::string(argv[1]) == "--all") {
            test_types = true;
            test_colour_grid = true;
            test_colours = true;
        }
    }
    if (test_types == false && test_colour_grid == false &&
        test_colours == false) {
        std::cout << "Usage: " << argv[0] << "[OPTIONS]" << std::endl;
        std::cout << "Options:" << std::endl;
        std::cout << "  -c, --colours\t\tTest text colours" << std::endl;
        std::cout << "  -g, --grid\t\tTest colour grid" << std::endl;
        std::cout << "  -t , --types\t\tTest text types" << std::endl;
        std::cout << "  -a, --all\t\tTest all" << std::endl;
        std::cout << "  -h, --help\t\tDisplay this help and exit" << std::endl;
        return 1;
    }

    ascii_colours::normal normal;
    ascii_colours::bold bold;
    ascii_colours::italic italic;
    ascii_colours::underline underline;
    ascii_colours::bold_italic bold_italic;
    ascii_colours::bold_underline bold_underline;
    ascii_colours::underline_italic underline_italic;
    ascii_colours::bold_underline_italic bold_underline_italic;

    if (test_types == true) {
        std::cout << normal.red << "Hello World!" << normal.reset << std::endl;
        std::cout << bold.red << "Hello World!" << bold.reset << std::endl;
        std::cout << italic.red << "Hello World!" << italic.reset << std::endl;
        std::cout << underline.red << "Hello World!" << underline.reset
                  << std::endl;
        std::cout << bold_italic.red << "Hello World!" << bold_italic.reset
                  << std::endl;
        std::cout << bold_underline.red << "Hello World!"
                  << bold_underline.reset << std::endl;
        std::cout << underline_italic.red << "Hello World!"
                  << underline_italic.reset << std::endl;
        std::cout << bold_underline_italic.red << "Hello World!"
                  << bold_underline_italic.reset << std::endl;
    }
    if (test_colours == true) {
        std::cout << normal.green << "Hello World!" << normal.reset
                  << std::endl;
        std::cout << normal.blue << "Hello World!" << normal.reset << std::endl;
        std::cout << normal.yellow << "Hello World!" << normal.reset
                  << std::endl;
        std::cout << normal.magenta << "Hello World!" << normal.reset
                  << std::endl;
        std::cout << normal.cyan << "Hello World!" << normal.reset << std::endl;
        std::cout << normal.white << "Hello World!" << normal.reset
                  << std::endl;
        std::cout << normal.black << "Hello World!" << normal.reset
                  << std::endl;
    }
    if (test_colour_grid == true) {
        std::cout << normal.red << "██" << normal.green << "██" << normal.yellow
                  << "██" << normal.blue << "██" << normal.magenta << "██"
                  << normal.cyan << "██" << normal.white << "██" << normal.black
                  << "██" << normal.reset << std::endl;

        std::cout << bold.red << "██" << bold.green << "██" << bold.yellow
                  << "██" << bold.blue << "██" << bold.magenta << "██"
                  << bold.cyan << "██" << bold.white << "██" << bold.black
                  << "██" << bold.reset << std::endl;
    }

    return 0;
}
