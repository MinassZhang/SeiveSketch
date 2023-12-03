// Copyright 2016 Jiecao Chen

#include "util.h"
#include <cassert>


constexpr int MAX = 1 << 30;
static std::random_device rd;
static std::mt19937 gen(rd());
static std::uniform_real_distribution<> dis(0, 1);
static std::default_random_engine generator;
static std::uniform_int_distribution<> dis_int(0, MAX);


uint32_t rand_int(int M) {
    return dis_int(gen) % M;
}

double rand_double(double M) {
  assert(M > 0.);
  return dis(gen) * M;
}

