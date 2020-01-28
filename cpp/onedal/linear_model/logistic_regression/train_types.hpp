/*******************************************************************************
* Copyright 2014-2019 Intel Corporation
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

#include "onedal/linear_model/logistic_regression/estimator.hpp"

namespace dal {
namespace linear_model {
namespace logistic_regression {

namespace detail {
class train_input_impl;
class train_result_impl;
} // namespace detail

class train_input : public base {
  public:
    explicit train_input(const table& data,
                         const table& labels);

    auto& set_data(const table& data) {
        set_data_impl(data);
        return *this;
    }

    auto& set_labels(const table& labels) {
        set_labels_impl(labels);
        return *this;
    }

  private:
    void set_data_impl(const table& data);
    void set_labels_impl(const table& lables);

    dal::detail::pimpl<detail::train_input_impl> impl_;
};

class train_result : public base {
  public:
    train_result();

    model get_model() const;

  private:
    dal::detail::pimpl<detail::train_result_impl> impl_;
};

} // namespace logistic_regression
} // namespace linear_model
} // namespace dal
