#include "stats.h"
#include <algorithm>
#include <numeric>
#include <limits>

Stats Statistics::ComputeStatistics(const std::vector<float>& numbers) {
    //Implement statistics here

    Stats result;
    if (numbers.empty()) {
        result.average = std::numeric_limits<float>::quiet_NaN();
        result.min = std::numeric_limits<float>::quiet_NaN();
        result.max = std::numeric_limits<float>::quiet_NaN();
    } else {
        double sum = std::accumulate(numbers.begin(), numbers.end(), 0.0);
        result.average = sum / numbers.size();
        result.min = *std::min_element(numbers.begin(), numbers.end());
        result.max = *std::max_element(numbers.begin(), numbers.end());
    }
    return result;

}
