#ifndef H_CELERO_TIMER_H
#define H_CELERO_TIMER_H

///
/// \author	John Farrier
///
/// \copyright Copyright 2015 John Farrier
///
/// Licensed under the Apache License, Version 2.0 (the "License");
/// you may not use this file except in compliance with the License.
/// You may obtain a copy of the License at
///
/// http://www.apache.org/licenses/LICENSE-2.0
///
/// Unless required by applicable law or agreed to in writing, software
/// distributed under the License is distributed on an "AS IS" BASIS,
/// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
/// See the License for the specific language governing permissions and
/// limitations under the License.
///

#include <celero/Export.h>
#include <stdint.h>

namespace celero
{
	///
	/// \namespace timer
	///
	/// \author	John Farrier
	///
	/// \brief	Provide basic cross-platform timing functions to measure code performance speed.
	///
	namespace timer
	{
		///
		///	\brief	Retrieves the current time.
		///
		///	\author	John Farrier
		///
		///	\return	The time, in ticks.
		///
		CELERO_EXPORT uint64_t GetSystemTime();

		///
		///	\brief	Converts the gathered system time into seconds.
		///
		/// This assumes "x" is a delta and relatively small (easily fits inside of a double).
		///
		///	\author	John Farrier
		///
		///	\param	x	The time, in ticks.
		///
		///	\return	The time, in seconds.
		///
		CELERO_EXPORT double ConvertSystemTime(const uint64_t x);

		///
		/// On Windows, this caches the frequency of the high performance clock.
		///
		CELERO_EXPORT void CachePerformanceFrequency();
	}
}

#endif
