// Copyright (c) 2020 by Robert Bosch GmbH. All rights reserved.
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

#include "iceoryx_posh/popo/guard_condition.hpp"
#include "iceoryx_posh/popo/wait_set.hpp"

using namespace iox;
using namespace iox::popo;


extern "C" {
#include "iceoryx_binding_c/types.h"
}

#include "test.hpp"

using namespace ::testing;

TEST(types_test, WaitSetStorageSizeFits)
{
    EXPECT_THAT(sizeof(WaitSet), Eq(sizeof(wait_set_storage_t)));
    EXPECT_THAT(alignof(WaitSet), Le(alignof(wait_set_storage_t)));
}

TEST(types_test, GuardConditionStorageSizeFits)
{
    EXPECT_THAT(sizeof(GuardCondition), Eq(sizeof(guard_cond_storage_t)));
    EXPECT_THAT(alignof(GuardCondition), Le(alignof(guard_cond_storage_t)));
}
