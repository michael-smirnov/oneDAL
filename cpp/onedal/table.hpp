/*******************************************************************************
 * Copyright 2020 Intel Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *******************************************************************************/

#pragma once

#include "onedal/array.hpp"
#include "onedal/common.hpp"
#include "onedal/types_data.hpp"
#include "onedal/detail/common.hpp"

namespace dal {

namespace detail {
class table_impl;
} // namespace detail

class table : public base {
public:
<<<<<<< HEAD
=======
    using pimpl = dal::detail::pimpl<detail::table_impl>;

public:
    table() = default;

>>>>>>> Add logictic regression placeholder
    table(const table& table)
        : impl_(table.impl_)
    { }

    std::int64_t get_row_count() const noexcept;
    std::int64_t get_column_count() const noexcept;

private:
    using pimpl = dal::detail::pimpl<detail::table_impl>;

private:
    table(const pimpl& impl)
        : impl_(impl)
    { }

private:
    pimpl impl_;

private:
    friend detail::pimpl_accessor;
};

template <typename T, access_mode Mode>
array<T> flatten(const table& t, const range& rows, const range& columns);

template <typename T, access_mode Mode>
array<T> flatten(const table& t) {
    return flatten<T, Mode>(t, {0, -1}, {0, -1});
}

template <typename T, access_mode Mode>
array<T> flatten(const table& t, const range& rows) {
    return flatten<T, Mode>(t, rows, {0, -1});
}

} // namespace dal
