#ifndef Iterator_H
#define Iterator_H

namespace fhdo_pk2
{
class Iterator
{
public:
  virtual bool hasNext() = 0;
  virtual const char *next() = 0;
};
}
#endif