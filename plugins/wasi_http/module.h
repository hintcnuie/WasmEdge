// SPDX-License-Identifier: Apache-2.0
// SPDX-FileCopyrightText: 2019-2024 Second State INC

#pragma once

#include "env.h"

#include "runtime/instance/module.h"

namespace WasmEdge {
namespace Host {

class WasiHttpModule : public Runtime::Instance::ModuleInstance {
public:
  WasiHttpModule();

  WasiHttpEnvironment &getEnv() { return Env; }

private:
  WasiHttpEnvironment Env;
};

} // namespace Host
} // namespace WasmEdge
