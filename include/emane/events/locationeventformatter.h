/*
 * Copyright (c) 2014 - Adjacent Link LLC, Bridgewater, New Jersey
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * * Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * * Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in
 *   the documentation and/or other materials provided with the
 *   distribution.
 * * Neither the name of Adjacent Link LLC nor the names of its
 *   contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef EMANEEVENTSLOCATIONEVENTFORMATTER_HEADER_
#define EMANEEVENTSLOCATIONEVENTFORMATTER_HEADER_

#include "emane/events/locationevent.h"
#include "emane/types.h"

namespace EMANE
{
  namespace Events
  {
    /**
     * @class LocationEventFormatter
     *
     * @brief Callable formatter object for LocationEvent
     * instances.
     */
    class LocationEventFormatter
    {
    public:
      /**
       * Creates a LocationEventFormatter instance
       *
       * @param event %Event reference
       */
      LocationEventFormatter(const LocationEvent & event);
    
      /**
       * Gets the formatted output
       *
       * @return list of output strings
       */
      Strings operator()() const;
      
    private:
      const LocationEvent & event_;
    };
  }
}

#endif // EMANEEVENTSLOCATIONEVENTFORMATTER_HEADER_
