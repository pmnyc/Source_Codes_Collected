/* Copyright (C) 2016-2018 Alibaba Group Holding Limited

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#ifndef XDL_BACKEND_TF_CONVERT_UTILS_H_
#define XDL_BACKEND_TF_CONVERT_UTILS_H_

#include <vector>
#include <string>
#include <unordered_map>

#include "xdl/core/backend/log_macro_undef.h"
#include <tensorflow/core/framework/tensor.h>
#include "xdl/core/backend/log_macro_undef.h"

#include "xdl/core/lib/status.h"
#include "xdl/core/framework/tensor.h"

namespace xdl {

class XDL2TF {
 public:
  static Status ConvertType(const xdl::DataType s, tensorflow::DataType* d);
  static Status ConvertShape(const xdl::TensorShape& s, tensorflow::TensorShape* d);
  static Status ConvertTensor(const xdl::Tensor& s, tensorflow::Tensor* d);
};

class TF2XDL {
 public:
  static Status ConvertType(const tensorflow::DataType s, xdl::DataType* d);
  static Status ConvertShape(const tensorflow::TensorShape& s, xdl::TensorShape* d);
  static Status ConvertTensor(const tensorflow::Tensor& s, xdl::Tensor* d);
};

} // namespace xdl

#endif // XDL_BACKEND_TF_CONVERT_UTILS_H_
