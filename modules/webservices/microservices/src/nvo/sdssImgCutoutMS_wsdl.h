/* sdssImgCutoutMS_wsdl.h
   Generated by wsdl2h 1.2.9l from sdssImgCutout.wsdl and typemap.dat
   2008-01-25 19:18:50 GMT
   Copyright (C) 2001-2007 Robert van Engelen, Genivia Inc. All Rights Reserved.
   This part of the software is released under one of the following licenses:
   GPL or Genivia's license for commercial use.
*/

/* NOTE:

 - Compile this file with soapcpp2 to complete the code generation process.
 - Use soapcpp2 option -I to specify paths for #import
   To build with STL, 'stlvector.h' is imported from 'import' dir in package.
 - Use wsdl2h options -c and -s to generate pure C code or C++ code without STL.
 - Use 'typemap.dat' to control schema namespace bindings and type mappings.
   It is strongly recommended to customize the names of the namespace prefixes
   generated by wsdl2h. To do so, modify the prefix bindings in the Namespaces
   section below and add the modified lines to 'typemap.dat' to rerun wsdl2h.
 - Use Doxygen (www.doxygen.org) to browse this file.
 - Use wsdl2h option -l to view the software license terms.

   DO NOT include this file directly into your project.
   Include only the soapcpp2-generated headers and source code files.
*/

//gsoapopt cw

/******************************************************************************\
 *                                                                            *
 * http://skyserver.sdss.org/                                                 *
 *                                                                            *
\******************************************************************************/

/* WSDL Documentation:

This is an <b>XML Web Service</b> interface to fetch <b>JPEG</b> image cutouts from the <b>SDSS </b> image archive.<br>Send comments to <b>Maria Nieto-Santisteban</b> -- nieto@pha.jhu.edu
*/


/******************************************************************************\
 *                                                                            *
 * Import                                                                     *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Schema Namespaces                                                          *
 *                                                                            *
\******************************************************************************/


/* NOTE:

It is strongly recommended to customize the names of the namespace prefixes
generated by wsdl2h. To do so, modify the prefix bindings below and add the
modified lines to typemap.dat to rerun wsdl2h:

ns1 = "http://skyserver.sdss.org/"

*/

//gsoap ns1   schema namespace:	http://skyserver.sdss.org/
//gsoap ns1   schema elementForm:	qualified
//gsoap ns1   schema attributeForm:	unqualified

/******************************************************************************\
 *                                                                            *
 * Schema Types                                                               *
 *                                                                            *
\******************************************************************************/


/// Built-in type "xs:base64Binary".
struct xsd__base64Binary
{	unsigned char *__ptr;
	int __size;
	char *id, *type, *options; // NOTE: for DIME and MTOM XOP attachments only
};


/// "http://skyserver.sdss.org/":ArrayOfString is a complexType.
struct ns1__ArrayOfString
{
/// Size of array of char** is 0..unbounded
    int                                  __sizestring                  ;
/// Array of length 0..unbounded
    char**                               string                         0;	///< Nullable pointer.
};


/// Element "http://skyserver.sdss.org/":Revisions of complexType.

/// "http://skyserver.sdss.org/":Revisions is a complexType.
struct _ns1__Revisions
{
};


/// Element "http://skyserver.sdss.org/":RevisionsResponse of complexType.

/// "http://skyserver.sdss.org/":RevisionsResponse is a complexType.
struct _ns1__RevisionsResponse
{
/// Element RevisionsResult of type "http://skyserver.sdss.org/":ArrayOfString.
    struct ns1__ArrayOfString*           RevisionsResult                0;	///< Optional element.
};


/// Element "http://skyserver.sdss.org/":GetJpeg of complexType.

/// "http://skyserver.sdss.org/":GetJpeg is a complexType.
struct _ns1__GetJpeg
{
/// Element ra_ of type xs:double.
    double                               ra_USCORE                      1;	///< Required element.
/// Element dec_ of type xs:double.
    double                               dec_USCORE                     1;	///< Required element.
/// Element scale_ of type xs:double.
    double                               scale_USCORE                   1;	///< Required element.
/// Element width_ of type xs:int.
    int                                  width_USCORE                   1;	///< Required element.
/// Element height_ of type xs:int.
    int                                  height_USCORE                  1;	///< Required element.
/// Element opt_ of type xs:string.
    char*                                opt_USCORE                     0;	///< Optional element.
};


/// Element "http://skyserver.sdss.org/":GetJpegResponse of complexType.

/// "http://skyserver.sdss.org/":GetJpegResponse is a complexType.
struct _ns1__GetJpegResponse
{
/// Element GetJpegResult of type xs:base64Binary.
    struct xsd__base64Binary*            GetJpegResult                  0;	///< Optional element.
};


/// Element "http://skyserver.sdss.org/":GetJpegQuery of complexType.

/// "http://skyserver.sdss.org/":GetJpegQuery is a complexType.
struct _ns1__GetJpegQuery
{
/// Element ra_ of type xs:double.
    double                               ra_USCORE                      1;	///< Required element.
/// Element dec_ of type xs:double.
    double                               dec_USCORE                     1;	///< Required element.
/// Element scale_ of type xs:double.
    double                               scale_USCORE                   1;	///< Required element.
/// Element width_ of type xs:int.
    int                                  width_USCORE                   1;	///< Required element.
/// Element height_ of type xs:int.
    int                                  height_USCORE                  1;	///< Required element.
/// Element opt_ of type xs:string.
    char*                                opt_USCORE                     0;	///< Optional element.
/// Element query_ of type xs:string.
    char*                                query_USCORE                   0;	///< Optional element.
};


/// Element "http://skyserver.sdss.org/":GetJpegQueryResponse of complexType.

/// "http://skyserver.sdss.org/":GetJpegQueryResponse is a complexType.
struct _ns1__GetJpegQueryResponse
{
/// Element GetJpegQueryResult of type xs:base64Binary.
    struct xsd__base64Binary*            GetJpegQueryResult             0;	///< Optional element.
};


/// Element "http://skyserver.sdss.org/":DimeJpeg of complexType.

/// "http://skyserver.sdss.org/":DimeJpeg is a complexType.
struct _ns1__DimeJpeg
{
/// Element ra_ of type xs:double.
    double                               ra_USCORE                      1;	///< Required element.
/// Element dec_ of type xs:double.
    double                               dec_USCORE                     1;	///< Required element.
/// Element scale_ of type xs:double.
    double                               scale_USCORE                   1;	///< Required element.
/// Element width_ of type xs:int.
    int                                  width_USCORE                   1;	///< Required element.
/// Element height_ of type xs:int.
    int                                  height_USCORE                  1;	///< Required element.
/// Element opt_ of type xs:string.
    char*                                opt_USCORE                     0;	///< Optional element.
};


/// Element "http://skyserver.sdss.org/":DimeJpegResponse of complexType.

/// "http://skyserver.sdss.org/":DimeJpegResponse is a complexType.
struct _ns1__DimeJpegResponse
{
};

/// Element "http://skyserver.sdss.org/":ArrayOfString of type "http://skyserver.sdss.org/":ArrayOfString.
/// Note: use wsdl2h option -g to generate this global element declaration.

/// Element "http://skyserver.sdss.org/":base64Binary of type xs:base64Binary.
/// Note: use wsdl2h option -g to generate this global element declaration.

/******************************************************************************\
 *                                                                            *
 * Services                                                                   *
 *                                                                            *
\******************************************************************************/


//gsoap ns2  service name:	ImgCutoutSoap 
//gsoap ns2  service type:	ImgCutoutSoap 
//gsoap ns2  service port:	http://casjobs.sdss.org/ImgCutoutDR5/ImgCutout.asmx 
//gsoap ns2  service namespace:	http://skyserver.sdss.org/ImgCutoutSoap 
//gsoap ns2  service transport:	http://schemas.xmlsoap.org/soap/http 

//gsoap ns3  service name:	ImgCutoutSoap12 
//gsoap ns3  service type:	ImgCutoutSoap 
//gsoap ns3  service port:	http://casjobs.sdss.org/ImgCutoutDR5/ImgCutout.asmx 
//gsoap ns3  service namespace:	http://skyserver.sdss.org/ImgCutoutSoap12 
//gsoap ns3  service transport:	http://schemas.xmlsoap.org/soap/http 

/** @mainpage Service Definitions

@section Service_documentation Documentation
This is an <b>XML Web Service</b> interface to fetch <b>JPEG</b> image cutouts from the <b>SDSS </b> image archive.<br>Send comments to <b>Maria Nieto-Santisteban</b> -- nieto@pha.jhu.edu

@section Service_bindings Bindings
  - @ref ImgCutoutSoap
  - @ref ImgCutoutSoap12

*/

/**

@page ImgCutoutSoap Binding "ImgCutoutSoap"

@section ImgCutout_service Service Documentation "ImgCutout"
This is an <b>XML Web Service</b> interface to fetch <b>JPEG</b> image cutouts from the <b>SDSS </b> image archive.<br>Send comments to <b>Maria Nieto-Santisteban</b> -- nieto@pha.jhu.edu

@section ImgCutoutSoap_operations Operations of Binding  "ImgCutoutSoap"
  - @ref __ns2__Revisions
  - @ref __ns2__GetJpeg
  - @ref __ns2__GetJpegQuery
  - @ref __ns2__DimeJpeg

@section ImgCutoutSoap_ports Endpoints of Binding  "ImgCutoutSoap"
  - http://casjobs.sdss.org/ImgCutoutDR5/ImgCutout.asmx

Note: use wsdl2h option -N to change the service binding prefix name

*/

/**

@page ImgCutoutSoap12 Binding "ImgCutoutSoap12"

@section ImgCutout_service Service Documentation "ImgCutout"
This is an <b>XML Web Service</b> interface to fetch <b>JPEG</b> image cutouts from the <b>SDSS </b> image archive.<br>Send comments to <b>Maria Nieto-Santisteban</b> -- nieto@pha.jhu.edu

@section ImgCutoutSoap12_operations Operations of Binding  "ImgCutoutSoap12"
  - @ref __ns3__Revisions
  - @ref __ns3__GetJpeg
  - @ref __ns3__GetJpegQuery
  - @ref __ns3__DimeJpeg

@section ImgCutoutSoap12_ports Endpoints of Binding  "ImgCutoutSoap12"
  - http://casjobs.sdss.org/ImgCutoutDR5/ImgCutout.asmx

Note: use wsdl2h option -N to change the service binding prefix name

*/

/******************************************************************************\
 *                                                                            *
 * ImgCutoutSoap                                                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * __ns2__Revisions                                                           *
 *                                                                            *
\******************************************************************************/


/// Operation "__ns2__Revisions" of service binding "ImgCutoutSoap"

/**

Operation details:

Return CVS revision numbers
  - SOAP document/literal style
  - SOAP action="http://skyserver.sdss.org/Revisions"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns2__Revisions(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    struct _ns1__Revisions*             ns1__Revisions,
    // response parameters:
    struct _ns1__RevisionsResponse*     ns1__RevisionsResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns2__Revisions(
    struct soap *soap,
    // request parameters:
    struct _ns1__Revisions*             ns1__Revisions,
    // response parameters:
    struct _ns1__RevisionsResponse*     ns1__RevisionsResponse
  );
@endcode

*/

//gsoap ns2  service method-style:	Revisions document
//gsoap ns2  service method-encoding:	Revisions literal
//gsoap ns2  service method-action:	Revisions http://skyserver.sdss.org/Revisions
int __ns2__Revisions(
    struct _ns1__Revisions*             ns1__Revisions,	///< Request parameter
    struct _ns1__RevisionsResponse*     ns1__RevisionsResponse	///< Response parameter
);

/******************************************************************************\
 *                                                                            *
 * __ns2__GetJpeg                                                             *
 *                                                                            *
\******************************************************************************/


/// Operation "__ns2__GetJpeg" of service binding "ImgCutoutSoap"

/**

Operation details:

Returns the bytes of the Jpeg image for a given pointing<br><b>Input 1:</b> RA in degrees (double)<br><b>Input 2:</b> Dec in degrees (double)<br><b>Input 3:</b> Scale, in arcsec/pixel (double)<br><b>Input 4:</b> Width in pixels (int)<br><b>Input 5:</b> Height in pixels (int)<br><b>Input 6:</b> Drawing options (string)<br><b>Output:</b> Image (byte[])
  - SOAP document/literal style
  - SOAP action="http://skyserver.sdss.org/GetJpeg"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns2__GetJpeg(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    struct _ns1__GetJpeg*               ns1__GetJpeg,
    // response parameters:
    struct _ns1__GetJpegResponse*       ns1__GetJpegResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns2__GetJpeg(
    struct soap *soap,
    // request parameters:
    struct _ns1__GetJpeg*               ns1__GetJpeg,
    // response parameters:
    struct _ns1__GetJpegResponse*       ns1__GetJpegResponse
  );
@endcode

*/

//gsoap ns2  service method-style:	GetJpeg document
//gsoap ns2  service method-encoding:	GetJpeg literal
//gsoap ns2  service method-action:	GetJpeg http://skyserver.sdss.org/GetJpeg
int __ns2__GetJpeg(
    struct _ns1__GetJpeg*               ns1__GetJpeg,	///< Request parameter
    struct _ns1__GetJpegResponse*       ns1__GetJpegResponse	///< Response parameter
);

/******************************************************************************\
 *                                                                            *
 * __ns2__GetJpegQuery                                                        *
 *                                                                            *
\******************************************************************************/


/// Operation "__ns2__GetJpegQuery" of service binding "ImgCutoutSoap"

/**

Operation details:

Returns the bytes of the Jpeg image for a given pointing.<br><b>Input 1:</b> RA in degrees (double)<br><b>Input 2:</b> Dec in degrees (double)<br><b>Input 3:</b> Scale, in arcsec/pixel (double)<br><b>Input 4:</b> Width in pixels (int)<br><b>Input 5:</b> Height in pixels (int)<br><b>Input 6:</b> Drawing options (string)<br><b>Input 7:</B> Marking selection (string)<br>The marking selection string can be:<UL><LI>List of objects. RA and DEC columns must be included. <B>Example:</B><BR><br><TABLE><TR><TD><b>ObjId</b></TD><TD><b>RA</b></TD><TD><b>DEC</b></TD><TD><b>RMag</b></TD></TR><TR><TD>582378008234755083</TD><TD> 195.578582</TD><TD> 2.548192</TD><TD> 23.565</TD></TR><TR><TD> 582378008234754800</TD><TD> 195.572594</TD><TD> 2.554787</TD><TD> 21.446</TD></TR></TABLE><LI>SELECT SQL query. RA and DEC columns must be included. <B>Example:</B><BR><br>'SELECT  top 10 p.objID, p.ra, p.dec, p.r<br>FROM fGetObjFromRect(195.5,195.65,2.5,2.6) n,   PhotoPrimary p<br>WHERE n.objID=p.objID'<LI>String&nbsp;following the pattern: <B><I>ObjType Band (low_mag, high_mag)</I></B><UL><LI><EM><STRONG>ObjType:</STRONG></EM> S | G | P<br>S for Stars<br>G for Galaxies<br>P for both Stars and Galaxies<LI><STRONG><EM>Band:</EM></STRONG>&nbsp;U |&nbsp;G |&nbsp;R | I&nbsp;|&nbsp;Z | A<br>to select objects with <STRONG><EM>Band </EM></STRONG>BETWEEN <STRONG><EM>low_mag</EM></STRONG> AND <STRONG><EM>high_mag</EM></STRONG><P><br>Band 'A' will look for all the objects with values betwen <b><i>low_mag</i></b> and <b><i>high_mag</i></b> 	  for any band (compositions of ORs).<br>Only Stars, Galaxies, or PhotoPrimary objects will be marked when magnitude     ranges are not specified. <B>Examples:</B><BR><br>S<br>S R (0.0, 23.5)<br>G A (10, 25)</P></LI></UL></LI></UL><b>Output:</b> Image (byte[])
  - SOAP document/literal style
  - SOAP action="http://skyserver.sdss.org/GetJpegQuery"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns2__GetJpegQuery(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    struct _ns1__GetJpegQuery*          ns1__GetJpegQuery,
    // response parameters:
    struct _ns1__GetJpegQueryResponse*  ns1__GetJpegQueryResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns2__GetJpegQuery(
    struct soap *soap,
    // request parameters:
    struct _ns1__GetJpegQuery*          ns1__GetJpegQuery,
    // response parameters:
    struct _ns1__GetJpegQueryResponse*  ns1__GetJpegQueryResponse
  );
@endcode

*/

//gsoap ns2  service method-style:	GetJpegQuery document
//gsoap ns2  service method-encoding:	GetJpegQuery literal
//gsoap ns2  service method-action:	GetJpegQuery http://skyserver.sdss.org/GetJpegQuery
int __ns2__GetJpegQuery(
    struct _ns1__GetJpegQuery*          ns1__GetJpegQuery,	///< Request parameter
    struct _ns1__GetJpegQueryResponse*  ns1__GetJpegQueryResponse	///< Response parameter
);

/******************************************************************************\
 *                                                                            *
 * __ns2__DimeJpeg                                                            *
 *                                                                            *
\******************************************************************************/


/// Operation "__ns2__DimeJpeg" of service binding "ImgCutoutSoap"

/**

Operation details:

Returns the Jpeg image for a given pointing in a SOAP attachment (DIME)<br><b>Input 1:</b> RA in degrees J2000 (double)<br><b>Input 2:</b> Dec in degrees J2000 (double)<br><b>Input 3:</b> Scale, in arcsec/pixel (double)<br><b>Input 4:</b> Width in pixels (int)<br><b>Input 5:</b> Height in pixels (int)<br><b>Input 6:</b> Drawing options (string)<br><b>Output:</b> Jpeg image in attachment
  - SOAP document/literal style
  - SOAP action="http://skyserver.sdss.org/DimeJpeg"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns2__DimeJpeg(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    struct _ns1__DimeJpeg*              ns1__DimeJpeg,
    // response parameters:
    struct _ns1__DimeJpegResponse*      ns1__DimeJpegResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns2__DimeJpeg(
    struct soap *soap,
    // request parameters:
    struct _ns1__DimeJpeg*              ns1__DimeJpeg,
    // response parameters:
    struct _ns1__DimeJpegResponse*      ns1__DimeJpegResponse
  );
@endcode

*/

//gsoap ns2  service method-style:	DimeJpeg document
//gsoap ns2  service method-encoding:	DimeJpeg literal
//gsoap ns2  service method-action:	DimeJpeg http://skyserver.sdss.org/DimeJpeg
int __ns2__DimeJpeg(
    struct _ns1__DimeJpeg*              ns1__DimeJpeg,	///< Request parameter
    struct _ns1__DimeJpegResponse*      ns1__DimeJpegResponse	///< Response parameter
);

/******************************************************************************\
 *                                                                            *
 * ImgCutoutSoap12                                                            *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * __ns3__Revisions                                                           *
 *                                                                            *
\******************************************************************************/


/// Operation "__ns3__Revisions" of service binding "ImgCutoutSoap12"

/**

Operation details:

Return CVS revision numbers
  - SOAP document/literal style
  - SOAP action="http://skyserver.sdss.org/Revisions"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns3__Revisions(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    struct _ns1__Revisions*             ns1__Revisions,
    // response parameters:
    struct _ns1__RevisionsResponse*     ns1__RevisionsResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns3__Revisions(
    struct soap *soap,
    // request parameters:
    struct _ns1__Revisions*             ns1__Revisions,
    // response parameters:
    struct _ns1__RevisionsResponse*     ns1__RevisionsResponse
  );
@endcode

*/

//gsoap ns3  service method-style:	Revisions document
//gsoap ns3  service method-encoding:	Revisions literal
//gsoap ns3  service method-action:	Revisions http://skyserver.sdss.org/Revisions
int __ns3__Revisions(
    struct _ns1__Revisions*             ns1__Revisions,	///< Request parameter
    struct _ns1__RevisionsResponse*     ns1__RevisionsResponse	///< Response parameter
);

/******************************************************************************\
 *                                                                            *
 * __ns3__GetJpeg                                                             *
 *                                                                            *
\******************************************************************************/


/// Operation "__ns3__GetJpeg" of service binding "ImgCutoutSoap12"

/**

Operation details:

Returns the bytes of the Jpeg image for a given pointing<br><b>Input 1:</b> RA in degrees (double)<br><b>Input 2:</b> Dec in degrees (double)<br><b>Input 3:</b> Scale, in arcsec/pixel (double)<br><b>Input 4:</b> Width in pixels (int)<br><b>Input 5:</b> Height in pixels (int)<br><b>Input 6:</b> Drawing options (string)<br><b>Output:</b> Image (byte[])
  - SOAP document/literal style
  - SOAP action="http://skyserver.sdss.org/GetJpeg"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns3__GetJpeg(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    struct _ns1__GetJpeg*               ns1__GetJpeg,
    // response parameters:
    struct _ns1__GetJpegResponse*       ns1__GetJpegResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns3__GetJpeg(
    struct soap *soap,
    // request parameters:
    struct _ns1__GetJpeg*               ns1__GetJpeg,
    // response parameters:
    struct _ns1__GetJpegResponse*       ns1__GetJpegResponse
  );
@endcode

*/

//gsoap ns3  service method-style:	GetJpeg document
//gsoap ns3  service method-encoding:	GetJpeg literal
//gsoap ns3  service method-action:	GetJpeg http://skyserver.sdss.org/GetJpeg
int __ns3__GetJpeg(
    struct _ns1__GetJpeg*               ns1__GetJpeg,	///< Request parameter
    struct _ns1__GetJpegResponse*       ns1__GetJpegResponse	///< Response parameter
);

/******************************************************************************\
 *                                                                            *
 * __ns3__GetJpegQuery                                                        *
 *                                                                            *
\******************************************************************************/


/// Operation "__ns3__GetJpegQuery" of service binding "ImgCutoutSoap12"

/**

Operation details:

Returns the bytes of the Jpeg image for a given pointing.<br><b>Input 1:</b> RA in degrees (double)<br><b>Input 2:</b> Dec in degrees (double)<br><b>Input 3:</b> Scale, in arcsec/pixel (double)<br><b>Input 4:</b> Width in pixels (int)<br><b>Input 5:</b> Height in pixels (int)<br><b>Input 6:</b> Drawing options (string)<br><b>Input 7:</B> Marking selection (string)<br>The marking selection string can be:<UL><LI>List of objects. RA and DEC columns must be included. <B>Example:</B><BR><br><TABLE><TR><TD><b>ObjId</b></TD><TD><b>RA</b></TD><TD><b>DEC</b></TD><TD><b>RMag</b></TD></TR><TR><TD>582378008234755083</TD><TD> 195.578582</TD><TD> 2.548192</TD><TD> 23.565</TD></TR><TR><TD> 582378008234754800</TD><TD> 195.572594</TD><TD> 2.554787</TD><TD> 21.446</TD></TR></TABLE><LI>SELECT SQL query. RA and DEC columns must be included. <B>Example:</B><BR><br>'SELECT  top 10 p.objID, p.ra, p.dec, p.r<br>FROM fGetObjFromRect(195.5,195.65,2.5,2.6) n,   PhotoPrimary p<br>WHERE n.objID=p.objID'<LI>String&nbsp;following the pattern: <B><I>ObjType Band (low_mag, high_mag)</I></B><UL><LI><EM><STRONG>ObjType:</STRONG></EM> S | G | P<br>S for Stars<br>G for Galaxies<br>P for both Stars and Galaxies<LI><STRONG><EM>Band:</EM></STRONG>&nbsp;U |&nbsp;G |&nbsp;R | I&nbsp;|&nbsp;Z | A<br>to select objects with <STRONG><EM>Band </EM></STRONG>BETWEEN <STRONG><EM>low_mag</EM></STRONG> AND <STRONG><EM>high_mag</EM></STRONG><P><br>Band 'A' will look for all the objects with values betwen <b><i>low_mag</i></b> and <b><i>high_mag</i></b> 	  for any band (compositions of ORs).<br>Only Stars, Galaxies, or PhotoPrimary objects will be marked when magnitude     ranges are not specified. <B>Examples:</B><BR><br>S<br>S R (0.0, 23.5)<br>G A (10, 25)</P></LI></UL></LI></UL><b>Output:</b> Image (byte[])
  - SOAP document/literal style
  - SOAP action="http://skyserver.sdss.org/GetJpegQuery"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns3__GetJpegQuery(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    struct _ns1__GetJpegQuery*          ns1__GetJpegQuery,
    // response parameters:
    struct _ns1__GetJpegQueryResponse*  ns1__GetJpegQueryResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns3__GetJpegQuery(
    struct soap *soap,
    // request parameters:
    struct _ns1__GetJpegQuery*          ns1__GetJpegQuery,
    // response parameters:
    struct _ns1__GetJpegQueryResponse*  ns1__GetJpegQueryResponse
  );
@endcode

*/

//gsoap ns3  service method-style:	GetJpegQuery document
//gsoap ns3  service method-encoding:	GetJpegQuery literal
//gsoap ns3  service method-action:	GetJpegQuery http://skyserver.sdss.org/GetJpegQuery
int __ns3__GetJpegQuery(
    struct _ns1__GetJpegQuery*          ns1__GetJpegQuery,	///< Request parameter
    struct _ns1__GetJpegQueryResponse*  ns1__GetJpegQueryResponse	///< Response parameter
);

/******************************************************************************\
 *                                                                            *
 * __ns3__DimeJpeg                                                            *
 *                                                                            *
\******************************************************************************/


/// Operation "__ns3__DimeJpeg" of service binding "ImgCutoutSoap12"

/**

Operation details:

Returns the Jpeg image for a given pointing in a SOAP attachment (DIME)<br><b>Input 1:</b> RA in degrees J2000 (double)<br><b>Input 2:</b> Dec in degrees J2000 (double)<br><b>Input 3:</b> Scale, in arcsec/pixel (double)<br><b>Input 4:</b> Width in pixels (int)<br><b>Input 5:</b> Height in pixels (int)<br><b>Input 6:</b> Drawing options (string)<br><b>Output:</b> Jpeg image in attachment
  - SOAP document/literal style
  - SOAP action="http://skyserver.sdss.org/DimeJpeg"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns3__DimeJpeg(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    struct _ns1__DimeJpeg*              ns1__DimeJpeg,
    // response parameters:
    struct _ns1__DimeJpegResponse*      ns1__DimeJpegResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns3__DimeJpeg(
    struct soap *soap,
    // request parameters:
    struct _ns1__DimeJpeg*              ns1__DimeJpeg,
    // response parameters:
    struct _ns1__DimeJpegResponse*      ns1__DimeJpegResponse
  );
@endcode

*/

//gsoap ns3  service method-style:	DimeJpeg document
//gsoap ns3  service method-encoding:	DimeJpeg literal
//gsoap ns3  service method-action:	DimeJpeg http://skyserver.sdss.org/DimeJpeg
int __ns3__DimeJpeg(
    struct _ns1__DimeJpeg*              ns1__DimeJpeg,	///< Request parameter
    struct _ns1__DimeJpegResponse*      ns1__DimeJpegResponse	///< Response parameter
);

/* End of sdssImgCutoutMS_wsdl.h */
