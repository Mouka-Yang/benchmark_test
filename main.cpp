#include <iostream>
#include "benchmark/benchmark.h"

static void BM_SomeFunction(benchmark::State &state)
{
    std::string x = "hello";
    for (auto _ : state)
        std::string copy(x);
}
// Register the function as a benchmark
BENCHMARK(BM_SomeFunction);

const std::string testString = "test hello world";
static void BM_VectorPushback(benchmark::State &state)
{
    std::vector<std::string> v;
    v.reserve(1);
    for (auto _ : state)
    {
        v.push_back(testString);
    }
}
BENCHMARK(BM_VectorPushback);

static void BM_VectorEmplaceBack(benchmark::State &state)
{
    std::vector<std::string> v;
    v.reserve(1);
    for (auto _ : state)
    {
        v.emplace_back(testString);
    }
}
BENCHMARK(BM_VectorEmplaceBack);