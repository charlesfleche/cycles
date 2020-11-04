/*
 * Copyright 2011-2013 Blender Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <stdio.h>

#include <algorithm>
#include <iterator>
#include <sstream>

#include <pxr/usd/usd/stage.h>

#include "graph/node_xml.h"

#include "render/background.h"
#include "render/camera.h"
#include "render/film.h"
#include "render/graph.h"
#include "render/integrator.h"
#include "render/light.h"
#include "render/mesh.h"
#include "render/nodes.h"
#include "render/object.h"
#include "render/osl.h"
#include "render/scene.h"
#include "render/shader.h"

#include "subd/subd_patch.h"
#include "subd/subd_split.h"

#include "util/util_foreach.h"
#include "util/util_path.h"
#include "util/util_projection.h"
#include "util/util_transform.h"
#include "util/util_xml.h"

#include "app/cycles_usd.h"

CCL_NAMESPACE_BEGIN

/* File */

void usd_read_file(Scene *scene, const char *filepath)
{
  pxr::UsdStage::Open(filepath);
}

CCL_NAMESPACE_END
