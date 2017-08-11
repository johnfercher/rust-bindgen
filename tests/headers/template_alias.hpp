// bindgen-flags: --with-derive-hash --with-derive-partialeq -- -std=c++14

namespace JS {
namespace detail {
    template <typename T>
    using Wrapped = T;
}

template <typename T>
struct Rooted {
    detail::Wrapped<T> ptr;
};
}
