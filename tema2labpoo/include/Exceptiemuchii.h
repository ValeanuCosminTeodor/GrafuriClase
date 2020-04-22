#ifndef EXCEPTIEMUCHII_H
#define EXCEPTIEMUCHII_H
#include <exception>

class Exceptiemuchii : public std::exception
{
public:
        Exceptiemuchii();
        virtual ~Exceptiemuchii();
        virtual const char* what() const noexcept;
};

#endif // EXCEPTIEMUCHII_H
