#ifndef _REF_H_
#define _REF_H_
#include <string>
#include <cstdlib>

const std::string CPP_REF {"google-chrome https://cplusplus.com/search.do?q="};

class Reference {
    private:
        std::string m_refName;
    public:
        Reference(const char *refname) : m_refName(refname){}
        ~Reference() {};
        void ref_coll() {
            std::string call {CPP_REF + m_refName};
            system(call.c_str());
        }
};

#endif //_REF_H_
