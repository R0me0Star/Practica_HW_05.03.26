template < class T > T *merge(const T *a, size_t sa, const T *b, size_t sb, T *c)
{
  const T *end_a = a + sa;
  const T *end_b = b + sb;
  T *current_c = c;

  while (a != end_a && b != end_b) {
    if (*a < *b) {
      *current_c = *a;
      ++a;
    } else {
      *current_c = *b;
      ++b;
    }

    ++current_c;
  }

  while (a != end_a) {
    *current_c = *a;
    ++a;
    ++current_c;
  }

  while (b != end_b) {
    *current_c = *b;
    ++b;
    ++current_c;
  }

  return c;
}
