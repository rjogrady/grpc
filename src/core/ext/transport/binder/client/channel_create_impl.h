// Copyright 2021 gRPC authors.
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

#ifndef GRPC_CORE_EXT_TRANSPORT_BINDER_CLIENT_CHANNEL_CREATE_IMPL_H
#define GRPC_CORE_EXT_TRANSPORT_BINDER_CLIENT_CHANNEL_CREATE_IMPL_H

#include <grpc/support/port_platform.h>

#include "src/core/ext/transport/binder/wire_format/binder.h"
#include "src/core/lib/channel/channel_args.h"

namespace grpc {
namespace internal {

grpc_channel* CreateChannelFromBinderImpl(
    std::unique_ptr<grpc_binder::Binder> endpoint_binder,
    const grpc_channel_args* args);

}  // namespace internal
}  // namespace grpc

#endif  // GRPC_CORE_EXT_TRANSPORT_BINDER_CLIENT_CHANNEL_CREATE_IMPL_H
