#pragma once

#define disable_timing true
#define TIME_THIS(T, D)                                                                           \
    {                                                                                             \
        if (disable_timing)                                                                       \
        {                                                                                         \
            T;                                                                                    \
        }                                                                                         \
        else                                                                                      \
        {                                                                                         \
            auto start = std::chrono::high_resolution_clock::now();                               \
            T;                                                                                    \
            auto stop     = std::chrono::high_resolution_clock::now();                            \
            auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start);   \
            std::cout << "Time taken by " << D << ": " << duration.count() << " ns" << std::endl; \
        }                                                                                         \
    }