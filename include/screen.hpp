#include <string>

#include "libs/cpp-terminal/cursor.hpp"
#include "libs/cpp-terminal/exception.hpp"
#include "libs/cpp-terminal/input.hpp"
#include "libs/cpp-terminal/iostream.hpp"
#include "libs/cpp-terminal/key.hpp"
#include "libs/cpp-terminal/options.hpp"
#include "libs/cpp-terminal/screen.hpp"
#include "libs/cpp-terminal/terminal.hpp"
#include "libs/cpp-terminal/tty.hpp"

using namespace std;

namespace Aquila {
  class Screen {
    Screen();

    private:
      int width;
      int height;

    public:
      Term::Key getch();
      void print_raw(string print_string);
      void print(string print_string);
      // will replace homebrew codes with actual colors
      string parse_metastring(string metastring);
  };
}