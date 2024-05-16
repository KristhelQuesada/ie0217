#ifndef EMAIL_VERIFIER_HPP
#define EMAIL_VERIFIER_HPP

#include <string>

class ValidadorEmail {
    public:
        static bool verifyEmail(const std::string& email);
};

#endif // EMAIL_VERIFIER_HPP