/* file: dbscan_dense_default_distr_step7_fpt_cpu.cpp */
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
//  Implementation of DBSCAN functions for distributed computing mode.
//--
*/

#include "algorithms/kernel/dbscan/dbscan_kernel.h"
#include "algorithms/kernel/dbscan/dbscan_dense_default_distr_impl.i"
#include "algorithms/kernel/dbscan/dbscan_container.h"

namespace daal
{
namespace algorithms
{
namespace dbscan
{
namespace interface1
{
template class DistributedContainer<step7Master, DAAL_FPTYPE, defaultDense, DAAL_CPU>;
} // namespace interface1
namespace internal
{
template class DBSCANDistrStep7Kernel<DAAL_FPTYPE, defaultDense, DAAL_CPU>;
} // namespace internal
} // namespace dbscan
} // namespace algorithms
} // namespace daal
