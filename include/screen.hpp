#include <string>

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