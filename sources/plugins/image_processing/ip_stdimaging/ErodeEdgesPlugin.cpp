/*
    Standard image processing plug-ins of Computer Vision Sandbox

    Copyright (C) 2011-2018, cvsandbox
    http://www.cvsandbox.com/contacts.html

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
*/

#include <ximaging.h>
#include "ErodeEdgesPlugin.hpp"

// Supported pixel formats of input/output images
const XPixelFormat ErodeEdgesPlugin::supportedFormats[] =
{
    XPixelFormatGrayscale8
};

ErodeEdgesPlugin::ErodeEdgesPlugin( ) :
edgeType( 0 )
{
}

void ErodeEdgesPlugin::Dispose( )
{
    delete this;
}

// The plug-in can not process image in-place
bool ErodeEdgesPlugin::CanProcessInPlace( )
{
    return false;
}

// Provide supported pixel formats
XErrorCode ErodeEdgesPlugin::GetPixelFormatTranslations( XPixelFormat* inputFormats, XPixelFormat* outputFormats, int32_t* count )
{
    return GetPixelFormatTranslationsImpl( inputFormats, outputFormats, count, supportedFormats, supportedFormats,
        sizeof( supportedFormats ) / sizeof( XPixelFormat ) );
}

// Process the specified source image and return new as a result
XErrorCode ErodeEdgesPlugin::ProcessImage( const ximage* src, ximage** dst )
{
    XErrorCode ret = SuccessCode;

    if ( ( src == 0 ) || ( dst == 0 ) )
    {
        ret = ErrorNullParameter;
    }
    else
    {
        // create output image of required format
        if ( src->format == XPixelFormatGrayscale8 )
        {
            ret = XImageAllocateRaw( src->width, src->height, src->format, dst );
        }
        else
        {
            ret = ErrorUnsupportedPixelFormat;
        }

        if ( ret == SuccessCode )
        {
            if ( edgeType == 0 )
            {
                ret = ErodeHorizontalEdges( src, *dst );
            }
            else
            {
                ret = ErodeVerticalEdges( src, *dst );
            }

            if ( ret != SuccessCode )
            {
                XImageFree( dst );
            }
        }
    }

    return ret;
}

// Process the specified source image by changing it
XErrorCode ErodeEdgesPlugin::ProcessImageInPlace( ximage* src )
{
    XUNREFERENCED_PARAMETER( src )

    return ErrorNotImplemented;
}

// Get the specified property value of the plug-in
XErrorCode ErodeEdgesPlugin::GetProperty( int32_t id, xvariant* value ) const
{
    XErrorCode ret = SuccessCode;

    switch ( id )
    {
    case 0:
        value->type = XVT_U1;
        value->value.ubVal = edgeType;
        break;

    default:
        ret = ErrorInvalidProperty;
    }

    return ret;
}

// Set the specified property value of the plug-in
XErrorCode ErodeEdgesPlugin::SetProperty( int32_t id, const xvariant* value )
{
    XErrorCode ret = SuccessCode;

    xvariant convertedValue;
    XVariantInit( &convertedValue );

    // make sure property value has expected type
    ret = PropertyChangeTypeHelper( id, value, propertiesDescription, 1, &convertedValue );

    if ( ret == SuccessCode )
    {
        switch ( id )
        {
        case 0:
            edgeType = convertedValue.value.ubVal;
            break;
        }
    }

    XVariantClear( &convertedValue );

    return ret;
}
