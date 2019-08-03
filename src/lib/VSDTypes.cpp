/* -*- Mode: C++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/*
 * This file is part of the libvisio project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

#include "VSDTypes.h"

namespace libvisio
{

const VSDName &VSDName::operator=(const VSDName &name)
{
  if (this != &name)
  {
    m_data = name.m_data;
    m_format = name.m_format;
  }
  return *this;
}

} // namespace libvisio

/* vim:set shiftwidth=2 softtabstop=2 expandtab: */
