#ifndef Medium_H
#define Medium_H

#include <string>

class Medium
{
  private:
    int id;
    std::string titel;
    int jahr;

  public:
    Medium(std::string newTitel, int newJahr);
    inline int getId() const
    {
        return id;
    }
    inline std::string getTitel() const
    {
        return titel;
    }
    inline int getJahr() const
    {
        return jahr;
    }

    int alter();
    virtual void druckeDaten() = 0;
};
#endif