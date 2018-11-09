#include <iostream>
#include <rxcpp/rx.hpp>

namespace Rx {
    using namespace rxcpp;
    using namespace rxcpp::sources;
    using namespace rxcpp::operators;
    using namespace rxcpp::util;
}
using namespace Rx;

int main() {
    auto values = observable<>::range(1, 12)
            .filter([](int v) { return v % 2 == 0; })
            .map([](int x) { return x * x; });
    values.subscribe(
            [](int v) { printf("OnNext: %d\n", v); },
            []() { printf("OnCompleted\n"); });
}