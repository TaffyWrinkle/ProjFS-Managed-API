// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.

#pragma once

#include <windows.h>
#include <Objbase.h>

#include <vcclr.h>
#include <malloc.h>
#include <memory>
#include <vector>
#include <string>

#include "projectedfslib.h"

// This is needed to support using the API on Windows 10 version 1803
#include "prjlib_deprecated.h"

#define UNREFERENCED_PARAMETER(P) (P)

//
//  length of \\?\Volume{00000000-0000-0000-0000-000000000000}\
//
#define VOLUME_PATH_LENGTH 49

#include "NotificationType.h"
#include "UpdateType.h"
#include "HResult.h"

