#ifndef Audio_H
#define Audio_H

#include "Medium.h"

class Audio : public Medium
{
  private:
    std::string interpret;
    int dauer;

  public:
    Audio(std::string titel, int jahr, std::string interpret, int dauer);
    inline std::string getInterpret() const
    {
        return interpret;
    }
    inline int getDauer() const
    {
        return dauer;
    }
    void druckeDaten() override;
};
#endif