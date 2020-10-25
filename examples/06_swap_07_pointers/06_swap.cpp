#include <iostream>

void swap_old(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void swap(int &a, int &b) {
  int tmp = a;
  a = b;
  b = tmp;
}

int main() {
  int tmp1 = 0;
  int tmp2 = 2;

  swap_old(&tmp1, &tmp2);

  std::cout << "tmp1 = " << tmp1 << '\n';
  std::cout << "tmp2 = " << tmp2 << '\n';

  swap(tmp1, tmp2);

  std::cout << "tmp1 = " << tmp1 << '\n';
  std::cout << "tmp2 = " << tmp2 << '\n';

  return 0;
}
/*
swap_old(int*, int*):                        # @swap_old(int*, int*)
        movl    (%rdi), %eax
        movl    (%rsi), %ecx
        movl    %ecx, (%rdi)
        movl    %eax, (%rsi)
        retq
swap(int&, int&):                            # @swap(int&, int&)
        movl    (%rdi), %eax
        movl    (%rsi), %ecx
        movl    %ecx, (%rdi)
        movl    %eax, (%rsi)
        retq
*/