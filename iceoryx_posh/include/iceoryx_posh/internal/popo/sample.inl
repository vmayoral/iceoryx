// Copyright (c) 2020 by Robert Bosch GmbH. All rights reserved.
// Copyright (c) 2021 by Apex.AI Inc. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// SPDX-License-Identifier: Apache-2.0

#ifndef IOX_POSH_POPO_SAMPLE_INL
#define IOX_POSH_POPO_SAMPLE_INL

namespace iox
{
namespace popo
{
// template <typename T, typename H>
// template <typename S, typename>
// inline void Sample<T, H>::publish() noexcept
//{
//     if (m_members.smartChunkUniquePtr)
//     {
//         m_members.producerRef.get().publish(std::move(*this));
//     }
//     else
//     {
//         LogError() << "Tried to publish empty Sample! Might be an already published or moved Sample!";
//         errorHandler(Error::kPOSH__PUBLISHING_EMPTY_SAMPLE, nullptr, ErrorLevel::MODERATE);
//     }
// }
//
// template <typename T, typename H>
// inline T* Sample<T, H>::release() noexcept
//{
//     return m_members.smartChunkUniquePtr.release();
// }
} // namespace popo
} // namespace iox

#endif // IOX_POSH_POPO_SAMPLE_INL
