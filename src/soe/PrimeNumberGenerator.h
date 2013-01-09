///
/// @file  PrimeNumberGenerator.h
///
/// Copyright (C) 2013 Kim Walisch, <kim.walisch@gmail.com>
///
/// This file is distributed under the New BSD License. See the
/// LICENSE file in the top level directory.
///

#ifndef PRIMENUMBERGENERATOR_H
#define PRIMENUMBERGENERATOR_H

#include "config.h"
#include "SieveOfEratosthenes.h"

#include <stdint.h>

namespace soe {

class PrimeNumberFinder;

class PrimeNumberGenerator : public SieveOfEratosthenes {
public:
  PrimeNumberGenerator(PrimeNumberFinder&);
  void doIt();
private:
  PrimeNumberFinder& finder_;
  void segmentProcessed(const uint8_t*, uint_t);
  DISALLOW_COPY_AND_ASSIGN(PrimeNumberGenerator);
};

} // namespace soe

#endif
