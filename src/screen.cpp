#include "include/screen.hpp"

using namespace std;

Aquila::Screen::Screen() {

}

Term::Key Aquila::Screen::getch() {
  Term::Event event = Term::read_event();
  switch(event.type()) {
    case Term::Event::Type::Key:
      Term::Key key(event);
      return key;
    default:
      return Term::Key::Null;
  };
}

void Aquila::Screen::print(string print_string) {
  Term::cout << parse_metastring(print_string) << std::endl;
}

void Aquila::Screen::print_raw(string print_string) {
  Term::cout << print_string << std::endl;
}

string Aquila::Screen::parse_metastring(string metastring) {
  return metastring;
}