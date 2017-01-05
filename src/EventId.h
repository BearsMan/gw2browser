/* \file       EventId.cpp
*  \brief      Contains definition of the event id enums.
*  \author     Khral Steelforge
*/

/*
Copyright (C) 2017 Khral Steelforge <https://github.com/kytulendu>

This file is part of Gw2Browser.

Gw2Browser is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

namespace gw2b {

	namespace {

		enum {
			ID_ShowFileList = wxID_HIGHEST + 1,
			ID_ShowLog,							// Show log panel
			ID_ClearLog,						// Clear the log panel
			//ID_ResetLayout,
			//ID_SetBackgroundColor,
			//ID_ShowGrid,						// Show grid on PreviewGLCanvas
			//ID_ShowMask,						// Apply white texture with black background, no shader
			//ID_SetCanvasSize,					// Set PreviewGLCanvas size
			ID_BtnBack,							// Sound player's back button
			ID_BtnPlay,							// Sound player's play button
			ID_BtnStop,							// Sound player's stop button
			ID_BtnForward,						// Sound player's forward button
			ID_SliderVolume,					// Sound player's volume slider
			ID_SliderPlayback,					// Sound player's playback slider
		};

	};

}; // namespace gw2b
