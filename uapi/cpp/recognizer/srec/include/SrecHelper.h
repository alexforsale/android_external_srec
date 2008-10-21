/*---------------------------------------------------------------------------*
 *  SrecHelper.h                                                             *
 *                                                                           *
 *  Copyright 2007, 2008 Nuance Communciations, Inc.                               *
 *                                                                           *
 *  Licensed under the Apache License, Version 2.0 (the 'License');          *
 *  you may not use this file except in compliance with the License.         *
 *                                                                           *
 *  You may obtain a copy of the License at                                  *
 *      http://www.apache.org/licenses/LICENSE-2.0                           *
 *                                                                           *
 *  Unless required by applicable law or agreed to in writing, software      *
 *  distributed under the License is distributed on an 'AS IS' BASIS,        *
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. *
 *  See the License for the specific language governing permissions and      *
 *  limitations under the License.                                           *
 *                                                                           *
 *---------------------------------------------------------------------------*/

#ifndef __UAPI__SRECHELPER
#define __UAPI__SRECHELPER

#include "exports.h"
#include "ReturnCode.h"
#include "ESR_ReturnCode.h"


namespace android
{
  namespace speech
  {
    namespace recognition
    {
      namespace srec
      {
        /**
         * SREC helper functions.
         */
        class SREC_EXPORT SrecHelper
        {
          public:
            /**
             * Returns the UAPI return-code associated with the specified SREC return-code.
             *
             * @param code the SREC return-code
             */
            static ReturnCode::Type toUAPI(ESR_ReturnCode code);
        };
      }
    }
  }
}

#endif
