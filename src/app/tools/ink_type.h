// Aseprite
// Copyright (C) 2001-2015  David Capello
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.

#ifndef APP_TOOLS_INK_TYPE_H_INCLUDED
#define APP_TOOLS_INK_TYPE_H_INCLUDED
#pragma once

namespace app {
namespace tools {

  enum class InkType {
    DEFAULT = 0,
    REPLACE_PIXEL = 0,
    ALPHA_COMPOSITING = 1,
    LOCK_ALPHA = 2,
  };

} // namespace tools
} // namespace app

#endif
