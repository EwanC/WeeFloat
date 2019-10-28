#pragma once

#include <cstdint>

struct BFloat16 final {
  BFloat16() = delete;
  BFloat16(float){};
  BFloat16(uint16_t){};

  BFloat16& operator+=(const BFloat16& rhs);
  BFloat16& operator-=(const BFloat16& rhs);
  BFloat16& operator*=(const BFloat16& rhs);
  BFloat16& operator/=(const BFloat16& rhs);

  bool operator<(const BFloat16&) const {
    return true; /* stub */
  }
  bool operator>(const BFloat16& rhs) const {
    return rhs < *this;
  }
  bool operator<=(const BFloat16& rhs) const {
    return !(*this > rhs);
  }
  bool operator>=(const BFloat16& rhs) const {
    return !(*this < rhs);
  }

  bool operator==(const BFloat16&) const {
    return true; /* do actual comparison */
  }
  bool operator!=(const BFloat16& rhs) const {
    return !(*this == rhs);
  }

  friend std::ostream& operator<<(std::ostream&, const BFloat16&);
};
