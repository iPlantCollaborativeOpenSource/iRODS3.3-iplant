/*** Copyright (c), The Regents of the University of California            ***
 *** For more information please refer to files in the COPYRIGHT directory ***/
/* fileReaddir.h - This file may be generated by a program or script
 */

#ifndef FILE_READDIR_H
#define FILE_READDIR_H

/* This is a low level file type API call */

#include "rods.h"
#include "rcMisc.h"
#include "procApiRequest.h"
#include "apiNumber.h"
#include "initServer.h"

#include "fileDriver.h"

typedef struct {
    int fileInx;
} fileReaddirInp_t;
    
#define fileReaddirInp_PI "int fileInx;"

#if defined(RODS_SERVER)
#define RS_FILE_READDIR rsFileReaddir
/* prototype for the server handler */
int
rsFileReaddir (rsComm_t *rsComm, fileReaddirInp_t *fileReaddirInp, 
rodsDirent_t **fileReaddirOut);
int
_rsFileReaddir (rsComm_t *rsComm, fileReaddirInp_t *fileReaddirInp, 
rodsDirent_t **fileReaddirOut);
int
remoteFileReaddir (rsComm_t *rsComm, fileReaddirInp_t *fileReaddirInp,
rodsDirent_t **fileReaddirOut, rodsServerHost_t *rodsServerHost);
int
getPhyPathInOpenedDir (int dirFd, int pathInx, char *outPath);
int
getStModeInOpenedDir (int dirFd, int pathInx);
int
getCurDirInOpenedDir (int dirFd, char *curdir);
int
freePhyPathInOpenedDir (int dirFd, int pathInx);
#else
#define RS_FILE_READDIR NULL
#endif

/* prototype for the client call */
int
rcFileReaddir (rcComm_t *conn, fileReaddirInp_t *fileReaddirInp, 
rodsDirent_t **fileReaddirOut);

#endif	/* FILE_READDIR_H */
