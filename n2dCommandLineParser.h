//  This file is part of Nifti2Dicom, is an open source converter from 
//  3D NIfTI images to 2D DICOM series.
//
//  Copyright (C) 2008,2009 Daniele E. Domenichelli
//
//  Nifti2Dicom is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  Nifti2Dicom is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with Nifti2Dicom.  If not, see <http://www.gnu.org/licenses/>.

// $Id$


#ifndef N2DCOMMANDLINEPARSER_H
#define N2DCOMMANDLINEPARSER_H

#include <tclap/CmdLine.h>

#include "n2dDefsCommandLineArgsStructs.h"

namespace n2d {

//BEGIN class n2d::CommandLineParser

/*!
 * \brief Parses command line and fills nifti2dicomArgs
 *
 */
class CommandLineParser
{
public:
    CommandLineParser();
    ~CommandLineParser();

    bool parse(int argc, char* argv[]);

    VitalStatisticsArgs vitalStatisticsArgs;
    InputArgs           inputArgs;
    OutputArgs          outputArgs;
    DicomTagsArgs       dicomTagsArgs;
    UIDArgs             uidArgs;
    ResliceArgs         resliceArgs;
    AccessionNumberArgs accessionNumberArgs;
    FiltersArgs         filtersArgs;


private:
    TCLAP::CmdLine cmd;

    bool AccessionNumberWarning(bool hasDicomHeaderFile);
};
//END class n2d::CommandLineParser

} // namespace n2d

#endif // N2DCOMMANDLINEPARSER_H
