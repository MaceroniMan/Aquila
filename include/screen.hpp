#include <string>

namespace Aquila {
  class Screen {
    Screen();

    public:
      void getch();
      void print_raw();
      void print();
  };
}