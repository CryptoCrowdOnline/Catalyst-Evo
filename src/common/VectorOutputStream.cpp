#include "VectorOutputStream.h"

namespace Common {

VectorOutputStream::VectorOutputStream(std::vector<uint8_t>& out) : out(out) {
}
//------------------------------------------------------------- Seperator Code -------------------------------------------------------------//
size_t VectorOutputStream::writeSome(const void* data, size_t size) {
  out.insert(out.end(), static_cast<const uint8_t*>(data), static_cast<const uint8_t*>(data) + size);
  return size;
}
//------------------------------------------------------------- Seperator Code -------------------------------------------------------------//
}
