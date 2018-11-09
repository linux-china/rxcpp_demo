#include <iostream>
#include <rxcpp/rx.hpp>

int main() {
    auto sequences = rxcpp::observable<>::from(1, 2, 3, 4);
    sequences.subscribe([](int v) { printf("OnNext: %d\n", v); },
                        []() {
                            printf("OnCompleted sequences\n");
                        });

    auto values = rxcpp::observable<>::range(1, 12)
            .filter([](int v) { return v % 2 == 0; })
            .map([](int x) { return x * x; });
    values.subscribe(
            [](int v) { printf("OnNext: %d\n", v); },
            []() { printf("OnCompleted range\n"); });
}
