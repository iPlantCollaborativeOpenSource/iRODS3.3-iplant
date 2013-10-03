/*** Copyright (c), The Regents of the University of California            ***
 *** For more information please refer to files in the COPYRIGHT directory ***/
/* fileMkdir.h - This file may be generated by a program or script
 */

#ifndef FILE_MKDIR_H
#define FILE_MKDIR_H

/* This is a low level file type API call */

#include "rods.h"
#include "rcMisc.h"
#include "procApiRequest.h"
#include "apiNumber.h"
#include "initServer.h"

#include "fileDriver.h"

typedef struct {
    fileDriverType_t fileType;
    rodsHostAddr_t addr;
    char dirName[MAX_NAME_LEN];
    int mode;
    keyValPair_t condInput;
} fileMkdirInp_t;
    
#define fileMkdirInp_PI "int fileType; struct RHostAddr_PI; str dirName[MAX_NAME_LEN]; int mode; keyValPair_PI;"

#if defined(RODS_SERVER)
#define RS_FILE_MKDIR rsFileMkdir
/* prototype for the server handler */
int
rsFileMkdir (rsComm_t *rsComm, fileMkdirInp_t *fileMkdirInp);
int
_rsFileMkdir (rsComm_t *rsComm, fileMkdirInp_t *fileMkdirInp);
int
remoteFileMkdir (rsComm_t *rsComm, fileMkdirInp_t *fileMkdirInp,
rodsServerHost_t *rodsServerHost);
#else
#define RS_FILE_MKDIR NULL
#endif

/* prototype for the client call */
int
rcFileMkdir (rcComm_t *conn, fileMkdirInp_t *fileMkdirInp);

#endif	/* FILE_MKDIR_H */
