#include <iostream>
#include "model_generated.h"

template <typename T, typename U>
bool check_tensor(T result, U expected, float eps, bool print_error) {
    bool error = false;
    for (size_t i = 0; i < result.size(); i++) {
        auto err = std::abs(result[i] - expected[i]);
        error |= (err > eps);
        if (print_error) {
            std::cout << "index " << i << " -> " << err << std::endl;
        }
    }
    return error;
}
  
int main(){
static const float output0[] = {0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f, 0.0010000000474974513f};
Tensor<float, 1,1000> result0;
bool error = false;
float EPS = 1e-4;
result0 = predict(input0);

error |= check_tensor(result0, output0, EPS, false);

std::cout << (error ? "Error" : "Correct") << std::endl;
return error;}