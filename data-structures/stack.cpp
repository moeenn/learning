#include <cassert>
#include <iostream>
#include <array>
#include <optional>

template<typename T, int N>
class Stack {
private:
  std::array<T, N> m_data;
  uint m_index;

public:
  explicit Stack(): m_index(0) {}

  bool push(T item) {
    if (is_full()) return false;
    m_data[m_index++] = item;
    return true;
  }

  std::optional<T> pop() {
    if (is_empty()) return {};
    return m_data[--m_index];
  }

  std::optional<T> peek() {
    if (is_empty()) return {};
    return m_data[m_index-1];
  }

  bool is_full() const {
    return m_index == N;
  }

  bool is_empty() const {
    return m_index == 0;
  }
};

int main() {
  Stack<int, 3> s{};
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);

  for (int i = 0; i < 3; i++) {
    std::optional<int> result = s.peek(); 
    std::cout << result.value() << "\n";
  }

  std::cout << "success!\n";
  return 0;
}
