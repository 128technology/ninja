// Copyright 2011 Google Inc. All Rights Reserved.
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

#include "extensions.h"

#include "build.h"

bool ProcessExtraOption(StringPiece arg, BuildConfig* config) {
  if (arg == "list") {
    printf("custom extensions:\n");
    printf("%11s  %s\n", "stdout", "use 'stdout=false' to disable stdout from invoked rules");
    return false;
  }
  if (arg == "stdout=false") {
    config->verbosity = BuildConfig::STATUS_ONLY;
    return true;
  }
  return false;
}
