#ifndef Bild_H
#define Bild_H

#include <string>
#include "Medium.h"

class Bild : public Medium
{
private:
  std::string ort;

public:
  Bild(std::string titel, int jahr, std::string ort);
  inline std::string getOrt() const
  {
    return ort;
  }
  void druckeDaten() override;
};
#endif