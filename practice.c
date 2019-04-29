#include <stdio.h>
#include <string.h>

struct Car{
  string tag;
  int age;
};


int main() {
  Car  ur = {"cat", 25};
  Car* my = new Car {"sky", 20};
  Car* we = &ur;
  ur.tag = "hat";
  cout << we.tag << endl;
  delete my;
}