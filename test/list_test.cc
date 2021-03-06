//COMPILE: g++ list_test.cc -std=c++11
#include <iostream>
#include "./../cclib-common/inc/base/precompile_define.h"
#include "./../inc/adt/list.h"
#include "./../cclib-common/inc/util/util.h"

using namespace std;
using namespace cclib;
using namespace cclib::adt;

void listTest() {
    List<int> cc;
    cc.push_back(12);
    cc.push_back(22);
    cc.push_front(32);
    cclib::common::util::printListValue(cc);

    List<int>::iterator itr = cc.begin();
    cout << "itr: " << *itr << endl;

    cc.pop_front();
    cclib::common::util::printListValue(cc);

    cc.pop_back();
    cclib::common::util::printListValue(cc);

    List<int> aa = cc;
    List<int>::iterator itr1 = aa.begin();
    cout << "itr1: " << *itr1 << endl;
    itr1++;
    cout << "itr2: " << *itr1 << endl;
}

int main(int argc, char const *argv[])
{
    /* code */
    listTest();
    return 0;
}
