/* file: dbscan_dense_default_distr_step7_fpt_dispatcher.cpp */
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

/*
//++
//  Implementation of DBSCAN algorithm container for distributed
//  computing mode.
//--
*/

#include "algorithms/kernel/dbscan/dbscan_container.h"

namespace daal
{
namespace algorithms
{
__DAAL_INSTANTIATE_DISPATCH_CONTAINER(dbscan::DistributedContainer, distributed, step7Master, DAAL_FPTYPE, dbscan::defaultDense)

namespace dbscan
{
namespace interface1
{
using DistributedType = Distributed<step7Master, DAAL_FPTYPE, defaultDense>;

template <>
DistributedType::Distributed()
{
    initialize();
}

template <>
DistributedType::Distributed(const DistributedType & other) : input(other.input)
{
    initialize();
}

} // namespace interface1
} // namespace dbscan
} // namespace algorithms
} // namespace daal
