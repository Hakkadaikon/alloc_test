#include <iostream>
#include <cstdint>

int main(void)
{
    // allocate type
    using alloc_t = uint8_t;

    // allocate size
    const uint64_t allocate_size = 1 * 1024 * 1024 * 1024;

    alloc_t** test = new alloc_t*[allocate_size];

    uint64_t count = 0;
    while (true) {
        try {
            test[count++] = new alloc_t[allocate_size];
        } catch (...) {
            std::cout << "bad alloc." << std::endl;
            break;
        }
    }

    std::cout << "completed! count:" << std::to_string(count) << std::endl;
    return 0;
}
