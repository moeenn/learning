#include <array>
#include <cassert>
#include <iostream>
#include <optional>

template <typename T, int N> class Queue {
private:
  std::array<T, N> m_data;
  uint m_index;

  void shift_left() {
    int i;
    for (i = 0; i < N - 1; i++) {
      m_data[i] = m_data[i + 1];
    }
    m_index--;
  }

public:
  explicit Queue() : m_index(0) {}

  bool enqueue(T item) {
    if (is_full())
      return false;
    m_data[m_index++] = item;
    return true;
  }

  std::optional<T> dequeue() {
    if (is_empty())
      return {};
    T first = m_data[0];
    shift_left();
    return first;
  }

  std::optional<T> peek() const {
    if (is_empty())
      return {};
    return m_data[0];
  }

  bool is_empty() const { return m_index == 0; }

  bool is_full() const { return m_index == N; }
};

int main() {
  Queue<int, 3> q{};
  q.enqueue(10);
  q.enqueue(20);
  q.enqueue(30);

  for (int i = 0; i < 3; i++) {
    std::optional<int> result = q.dequeue();
    std::cout << result.value() << "\n";
  }

  return 0;
}
