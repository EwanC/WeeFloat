#pragma once

#include <cstdint>

template<int N>
class MSFP final {
  MSFP() = delete;
  MSFP(float);
  MSFP(uint16_t);
};
