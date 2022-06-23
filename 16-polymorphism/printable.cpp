#include "printable.h"

std::ostream &operator<<(std::ostream &os, const I_Printable &object)
{
    object.print(os);
    return os;
}