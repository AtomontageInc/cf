#pragma once

#if (__GNUC__ == 4 && __GNUC_MINOR__ <= 8)

#include <type_traits>

namespace std {
template<typename T>
using result_of_t = typename result_of<T>::type;

template<typename T>
using decay_t = typename decay<T>::type;

template<bool B, typename T, typename U>
using conditional_t = typename conditional<B,T,U>::type;
}

#endif
