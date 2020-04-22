#include "Exceptiemuchii.h"

Exceptiemuchii::Exceptiemuchii()
{
}

Exceptiemuchii::~Exceptiemuchii()
{
}
const char* Exceptiemuchii::what() const noexcept
{
    return ("Date de intrare introduse incorect. Numarul muchiilor introduse depaseste numarul posibil de muchii al grafului.");
}
