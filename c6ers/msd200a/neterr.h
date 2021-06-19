/********************************************************************/
/**                     Microsoft LAN Manager                      **/
/**               Copyright(c) Microsoft Corp., 1987-1990          **/
/********************************************************************/

/***	neterr.h - network error definitions
 *
 */



#ifndef NETERR_INCLUDED

#define NETERR_INCLUDED 


#define NERR_Success		0	/* Success */

/*
 *	Redirector related
 *		Error codes from 50 to 79, 88, and 230 to 249
 */

#define ERROR_NOT_SUPPORTED	50	/* The network request is not supported.  */
#define ERROR_REM_NOT_LIST	51	/* This remote computer is not listening. */
#define ERROR_DUP_NAME		52	/* A duplicate name exists on the network. */
#define ERROR_BAD_NETPATH	53	/* The network path cannot be located. */
#define ERROR_NETWORK_BUSY	54	/* The network is busy. */
#define ERROR_DEV_NOT_EXIST	55	/* This device does not exist on the network. */
#define ERROR_TOO_MANY_CMDS	56	/* The network BIOS command limit has been reached. */
#define ERROR_ADAP_HDW_ERR	57	/* A network adapter hardware error has occurred. */
#define ERROR_BAD_NET_RESP	58	/* The network responded incorrectly. */
#define ERROR_UNEXP_NET_ERR	59	/* An unexpected network error occurred. */
#define ERROR_BAD_REM_ADAP	60	/* The remote adapter is not compatible. */
#define ERROR_PRINTQ_FULL	61	/* The printer queue is full. */
#define ERROR_NO_SPOOL_SPACE	62	/* Space to store the file waiting to be printed is not available on the server. */
#define ERROR_PRINT_CANCELLED	63	/* The requested print file has been cancelled. */
#define ERROR_NETNAME_DELETED	64	/* The network name was deleted. */
#define	ERROR_NETWORK_ACCESS_DENIED 65	/* Network access is denied. */
#define ERROR_BAD_DEV_TYPE	66	/* The network resource type is not correct. */
#define ERROR_BAD_NET_NAME	67	/* The network name cannot be found. */
#define ERROR_TOO_MANY_NAMES	68	/* The name limit for the local computer network adapter card was exceeded. */
#define ERROR_TOO_MANY_SESS	69	/* The network BIOS session limit was exceeded. */
#define ERROR_SHARING_PAUSED	70	/* File sharing has been temporarily paused. */
#define ERROR_REQ_NOT_ACCEP	71	/* The network request was not accepted. */
#define ERROR_REDIR_PAUSED	72	/* Print or disk redirection is temporarily paused. */

#define ERROR_NET_WRITE_FAULT	88	/* A network data fault occurred. */

#define	ERROR_BAD_PIPE		230	/* This is a nonexistent pipe or an invalid operation. */
#define	ERROR_PIPE_BUSY		231	/* The specified pipe is busy. */
#define	ERROR_NO_DATA		232	/* There is no data to be read on a non-blocking read. */
#define	ERROR_PIPE_NOT_CONNECTED 233	/* The server disconnected the pipe. */
#define	ERROR_MORE_DATA		234	/* Additional data is available. */

#define	ERROR_VC_DISCONNECTED	240	/* The session was cancelled. */


/***	NERR_BASE is the base of error codes from network utilities,
 *	chosen to avoid conflict with OS/2 and redirector error codes.
 *	2100 is a value that has been assigned to us by OS/2.
 */
#define	NERR_BASE	2100



/* UNUSED BASE+0 */
/* UNUSED BASE+1 */
#define NERR_NetNotStarted	(NERR_BASE+2)	/* The workstation driver (NETWKSTA.SYS on OS/2 workstations, NETWKSTA.EXE on DOS workstations) isn't installed. */
#define NERR_UnknownServer	(NERR_BASE+3)	/* The server cannot be located. */
#define NERR_ShareMem		(NERR_BASE+4)	/* An internal error occurred.  The network cannot access a shared memory segment. */
#define NERR_NoNetworkResource	(NERR_BASE+5)	/* A network resource shortage occurred . */
#define NERR_RemoteOnly		(NERR_BASE+6)	/* This operation is not supported on workstations. */
#define NERR_DevNotRedirected	(NERR_BASE+7)	/* The device is not connected. */
/* UNUSED BASE+8 */
/* UNUSED BASE+9 */
/* UNUSED BASE+10 */
/* UNUSED BASE+11 */
/* UNUSED BASE+12 */
/* UNUSED BASE+13 */
#define NERR_ServerNotStarted	(NERR_BASE+14)	/* The Server service isn't started. */
#define NERR_ItemNotFound	(NERR_BASE+15)	/* The queue is empty. */
#define NERR_UnknownDevDir	(NERR_BASE+16)	/* The device or directory does not exist. */
#define NERR_RedirectedPath	(NERR_BASE+17)	/* The operation is invalid on a redirected resource. */
#define NERR_DuplicateShare	(NERR_BASE+18)	/* The name has already been shared. */
#define NERR_NoRoom		(NERR_BASE+19)	/* The server is currently out of the requested resource. */
/* UNUSED BASE+20 */
#define NERR_TooManyItems	(NERR_BASE+21)	/* Requested add of item exceeds maximum allowed. */
#define NERR_InvalidMaxUsers	(NERR_BASE+22)	/* The Peer service supports only two simultaneous users. */
#define NERR_BufTooSmall	(NERR_BASE+23)	/* The API return buffer is too small. */
/* UNUSED BASE+24 */
/* UNUSED BASE+25 */
/* UNUSED BASE+26 */
#define NERR_RemoteErr		(NERR_BASE+27)	/* A remote API error occurred.  */
/* UNUSED BASE+28 */
/* UNUSED BASE+29 */
/* UNUSED BASE+30 */
#define NERR_LanmanIniError	(NERR_BASE+31)	/* An error occurred when opening or reading LANMAN.INI. */
/* UNUSED BASE+32 */
/* UNUSED BASE+33 */
#define NERR_OS2IoctlError	(NERR_BASE+34)	/* An internal error occurred when calling the workstation driver. */
/* UNUSED BASE+35 */
#define	NERR_NetworkError	(NERR_BASE+36)	/* A general network error occurred. */
/* UNUSED BASE+37 */
#define NERR_WkstaNotStarted	(NERR_BASE+38)	/* The Workstation service has not been started. */
#define NERR_BrowserNotStarted	(NERR_BASE+39)	/* The requested information is not available. */
#define NERR_InternalError	(NERR_BASE+40)	/* An internal LAN Manager error occurred.*/
#define NERR_BadTransactConfig	(NERR_BASE+41)	/* The server is not configured for transactions. */
#define NERR_InvalidAPI		(NERR_BASE+42)	/* The requested API isn't supported on the remote server. */
#define NERR_BadEventName	(NERR_BASE+43)	/* The event name is invalid. */
/* UNUSED BASE+44 */

/*
 *	Config API related
 *		Error codes from BASE+45 to BASE+49
 */

/* UNUSED BASE+45 */
#define NERR_CfgCompNotFound	(NERR_BASE+46)	/* Could not find the specified component in LANMAN.INI. */
#define NERR_CfgParamNotFound	(NERR_BASE+47)	/* Could not find the specified parameter in LANMAN.INI. */
#define NERR_LineTooLong	(NERR_BASE+49)	/* A line in LANMAN.INI is too long. */

/*
 *	Spooler API related
 *		Error codes from BASE+50 to BASE+79
 */

#define NERR_QNotFound		(NERR_BASE+50)	/* The printer queue does not exist. */
#define NERR_JobNotFound	(NERR_BASE+51)	/* The print job does not exist. */
#define NERR_DestNotFound	(NERR_BASE+52)	/* The printer destination cannot be found. */
#define NERR_DestExists 	(NERR_BASE+53)	/* The printer destination already exists. */
#define NERR_QExists		(NERR_BASE+54)	/* The printer queue already exists. */
#define NERR_QNoRoom		(NERR_BASE+55)	/* No more printer queues can be added. */
#define NERR_JobNoRoom		(NERR_BASE+56)	/* No more print jobs can be added.  */
#define NERR_DestNoRoom 	(NERR_BASE+57)	/* No more printer destinations can be added. */
#define NERR_DestIdle		(NERR_BASE+58)	/* This printer destination is idle and cannot accept control operations. */
#define NERR_DestInvalidOp	(NERR_BASE+59)	/* This printer destination request contains an invalid control function. */
#define NERR_ProcNoRespond	(NERR_BASE+60)	/* The printer processor is not responding. */
#define NERR_SpoolerNotLoaded	(NERR_BASE+61)	/* The spooler is not running. */
#define NERR_DestInvalidState	(NERR_BASE+62)	/* This operation cannot be performed on the print destination in its current state. */
#define NERR_QInvalidState	(NERR_BASE+63)	/* This operation cannot be performed on the printer queue in its current state. */
#define NERR_JobInvalidState	(NERR_BASE+64)	/* This operation cannot be performed on the print job in its current state. */
#define	NERR_SpoolNoMemory	(NERR_BASE+65)	/* A spooler memory allocation failure occurred. */
#define NERR_DriverNotFound	(NERR_BASE+66)	/* The device driver does not exist. */
#define NERR_DataTypeInvalid	(NERR_BASE+67)	/* The datatype is not supported by the processor. */
#define NERR_ProcNotFound	(NERR_BASE+68)	/* The print processor is not installed. */

/*
 *	Service API related
 *		Error codes from BASE+80 to BASE+99
 */

#define NERR_ServiceTableLocked	(NERR_BASE+80)	/* The service does not respond to control actions. */
#define NERR_ServiceTableFull	(NERR_BASE+81)	/* The service table is full. */
#define NERR_ServiceInstalled	(NERR_BASE+82)	/* The requested service has already been started. */
#define NERR_ServiceEntryLocked	(NERR_BASE+83)	/* The service does not respond to control actions. */
#define NERR_ServiceNotInstalled (NERR_BASE+84) /* The service has not been started. */
#define NERR_BadServiceName	(NERR_BASE+85)	/* The service name is invalid. */
#define NERR_ServiceCtlTimeout	(NERR_BASE+86)	/* The service is not responding to the control function. */
#define NERR_ServiceCtlBusy	(NERR_BASE+87)	/* The service control is busy. */
#define NERR_BadServiceProgName	(NERR_BASE+88)	/* LANMAN.INI contains an invalid service program name. */
#define NERR_ServiceNotCtrl	(NERR_BASE+89)	/* The service cannot be controlled in its present state. */
#define NERR_ServiceKillProc	(NERR_BASE+90)	/* The service ended abnormally. */
#define NERR_ServiceCtlNotValid	(NERR_BASE+91)	/* The requested pause or stop is not valid for this service. */

/*
 *	Wksta and Logon API related
 *		Error codes from BASE+100 to BASE+118
 */

#define NERR_AlreadyLoggedOn	(NERR_BASE+100)	/* This workstation is already logged on to the local-area network. */
#define NERR_NotLoggedOn	(NERR_BASE+101)	/* The workstation isn't logged on to the local-area network. */
#define NERR_BadUsername	(NERR_BASE+102)	/* The username or groupname parameter is invalid.  */
#define NERR_BadPassword	(NERR_BASE+103)	/* The password parameter is invalid. */
#define NERR_UnableToAddName_W	(NERR_BASE+104)	/* @W The logon processor did not add the message alias. */
#define NERR_UnableToAddName_F	(NERR_BASE+105)	/* The logon processor did not add the message alias. */
#define NERR_UnableToDelName_W	(NERR_BASE+106)	/* @W The logoff processor did not delete the message alias. */
#define NERR_UnableToDelName_F	(NERR_BASE+107)	/* The logoff processor did not delete the message alias. */
/* UNUSED BASE+108 */
#define NERR_LogonsPaused 	(NERR_BASE+109) /* Network logons are paused. */
#define NERR_LogonServerConflict (NERR_BASE+110)/* A centralized logon-server conflict occurred. */
#define NERR_LogonNoUserPath	(NERR_BASE+111) /* The server is configured without a valid user path. */
#define NERR_LogonScriptError	(NERR_BASE+112) /* An error occurred while loading or running the logon script. */
/* UNUSED BASE+113 */
#define NERR_StandaloneLogon    (NERR_BASE+114) /* The logon server was not specified.  Your computer will be logged on as STANDALONE. */
#define NERR_LogonServerNotFound (NERR_BASE+115) /* The logon server cannot be found.  */
#define NERR_LogonDomainExists	(NERR_BASE+116) /* There is already a logon domain for this computer.  */
#define NERR_NonValidatedLogon	(NERR_BASE+117) /* The logon server could not validate the logon. */

/*
 *	ACF API related (access, user, group)
 *		Error codes from BASE+119 to BASE+149
 */

#define NERR_ACFNotFound	(NERR_BASE+119)	/* The accounts file NET.ACC cannot be found. */
#define NERR_GroupNotFound	(NERR_BASE+120)	/* The groupname cannot be found. */
#define NERR_UserNotFound	(NERR_BASE+121)	/* The username cannot be found. */
#define NERR_ResourceNotFound	(NERR_BASE+122)	/* The resource name cannot be found.  */
#define NERR_GroupExists	(NERR_BASE+123)	/* The group already exists. */
#define NERR_UserExists		(NERR_BASE+124)	/* The user account already exists. */
#define NERR_ResourceExists	(NERR_BASE+125)	/* The resource permission list already exists. */
#define NERR_NotPrimary		(NERR_BASE+126)	/* The UAS database is replicant and will not allow updates. */
#define NERR_ACFNotLoaded	(NERR_BASE+127) /* The user account system has not been started. */
#define NERR_ACFNoRoom		(NERR_BASE+128)	/* There are too many names in the user account system. */
#define NERR_ACFFileIOFail	(NERR_BASE+129)	/* A disk I/O failure occurred.*/
#define NERR_ACFTooManyLists	(NERR_BASE+130)	/* The limit of 64 entries per resource was exceeded. */
#define NERR_UserLogon		(NERR_BASE+131) /* Deleting a user with a session is not allowed. */
#define NERR_ACFNoParent	(NERR_BASE+132)	/* The parent directory cannot be located. */
#define NERR_CanNotGrowSegment  (NERR_BASE+133) /* Unable to grow UAS session cache segment. */
#define NERR_SpeGroupOp		(NERR_BASE+134) /* This operation is not allowed on this special group. */
#define NERR_NotInCache  	(NERR_BASE+135) /* This user is not cached in UAS session cache. */
#define NERR_UserInGroup	(NERR_BASE+136) /* The user already belongs to this group. */
#define NERR_UserNotInGroup	(NERR_BASE+137) /* The user does not belong to this group. */
#define NERR_AccountUndefined	(NERR_BASE+138) /* This user account is undefined. */
#define NERR_AccountExpired	(NERR_BASE+139) /* This user account has expired. */
#define NERR_InvalidWorkstation (NERR_BASE+140) /* The user is not allowed to log on from this workstation. */
#define NERR_InvalidLogonHours	(NERR_BASE+141) /* The user is not allowed to log on at this time.  */
#define NERR_PasswordExpired	(NERR_BASE+142) /* The password of this user has expired. */
#define NERR_PasswordCantChange (NERR_BASE+143) /* The password of this user cannot change. */
#define NERR_PasswordHistConflict (NERR_BASE+144) /* This password cannot be used now. */
#define NERR_PasswordTooShort	(NERR_BASE+145) /* The password is shorter than required. */
#define NERR_PasswordTooRecent	(NERR_BASE+146) /* The password of this user is too recent to change.  */
#define NERR_InvalidDatabase	(NERR_BASE+147) /* The UAS database file is corrupted. */
#define NERR_DatabaseUpToDate	(NERR_BASE+148) /* No updates are necessary to this replicant UAS database. */
#define NERR_SyncRequired	(NERR_BASE+149) /* This replicant database is outdated; synchronization is required. */

/*
 *	Use API related 
 *		Error codes from BASE+150 to BASE+169
 */

#define NERR_UseNotFound	(NERR_BASE+150)	/* The connection cannot be found. */
#define NERR_BadAsgType		(NERR_BASE+151)	/* This asg_type is invalid. */
#define NERR_DeviceIsShared	(NERR_BASE+152) /* This device is currently being shared. */

/* 
 *	Message Server related 
 *		Error codes BASE+170 to BASE+209
 */

#define	NERR_NoComputerName	(NERR_BASE+170)	/* A computername has not been configured.  */
#define	NERR_MsgAlreadyStarted	(NERR_BASE+171)	/* The Messenger service is already started. */
#define NERR_MsgInitFailed	(NERR_BASE+172)	/* The Messenger service failed to start.  */
#define	NERR_NameNotFound	(NERR_BASE+173)	/* The message alias cannot be found on the local-area network. */
#define	NERR_AlreadyForwarded	(NERR_BASE+174)	/* This message alias has already been forwarded. */
#define NERR_AddForwarded	(NERR_BASE+175)	/* This message alias has been added but is still forwarded. */
#define NERR_AlreadyExists	(NERR_BASE+176)	/* This message alias already exists locally. */
#define	NERR_TooManyNames	(NERR_BASE+177)	/* The maximum number of added message aliases has been exceeded. */
#define NERR_DelComputerName	(NERR_BASE+178)	/* The computername cannot be deleted.*/
#define	NERR_LocalForward	(NERR_BASE+179)	/* Messages cannot be forwarded back to the same workstation. */
#define NERR_GrpMsgProcessor	(NERR_BASE+180) /* Error in domain message processor */
#define NERR_PausedRemote	(NERR_BASE+181)	/* The message was sent, but the recipient has paused the Messenger service. */
#define	NERR_BadReceive		(NERR_BASE+182)	/* The message was sent but not received. */
#define	NERR_NameInUse		(NERR_BASE+183)	/* The message alias is currently in use. Try again later. */
#define	NERR_MsgNotStarted	(NERR_BASE+184)	/* The Messenger service has not been started. */
#define	NERR_NotLocalName	(NERR_BASE+185)	/* The name is not on the local computer. */
#define	NERR_NoForwardName	(NERR_BASE+186)	/* The forwarded message alias cannot be found on the network. */
#define	NERR_RemoteFull		(NERR_BASE+187)	/* The message alias table on the remote station is full. */
#define NERR_NameNotForwarded	(NERR_BASE+188)	/* Messages for this alias are not currently being forwarded. */
#define NERR_TruncatedBroadcast	(NERR_BASE+189)	/* The broadcast message was truncated. */
#define	NERR_InvalidDevice	(NERR_BASE+194)	/* This is an invalid devicename. */
#define	NERR_WriteFault		(NERR_BASE+195)	/* A write fault occurred. */
/* UNUSED BASE+196 */
#define	NERR_DuplicateName	(NERR_BASE+197)	/* A duplicate message alias exists on the local-area network. */
#define	NERR_DeleteLater	(NERR_BASE+198)	/* @W This message alias will be deleted later. */
#define NERR_IncompleteDel	(NERR_BASE+199) /* The message alias was not successfully deleted from all networks. */
#define NERR_MultipleNets	(NERR_BASE+200) /* This operation is not supported on machines with multiple networks. */

/* 
 * 	Server API related 
 *		Error codes BASE+210 to BASE+229
 */
 
#define NERR_NetNameNotFound	(NERR_BASE+210)	/* This shared resource does not exist.*/
#define	NERR_DeviceNotShared	(NERR_BASE+211)	/* This device is not shared. */
#define NERR_ClientNameNotFound	(NERR_BASE+212)	/* A session does not exist with that computername. */
#define NERR_FileIdNotFound	(NERR_BASE+214)	/* There isn't an open file with that ID number. */
#define NERR_ExecFailure	(NERR_BASE+215)	/* A failure occurred when executing a remote administration command. */
#define NERR_TmpFile		(NERR_BASE+216) /* A failure occurred when opening a remote temporary file. */
#define NERR_TooMuchData	(NERR_BASE+217) /* The data returned from a remote administration command has been truncated to 64K. */
#define NERR_DeviceShareConflict (NERR_BASE+218) /* This device cannot be shared as both a spooled and a non-spooled resource. */
#define NERR_BrowserTableIncomplete (NERR_BASE+219)  /* The information in the list of servers may be incorrect. */
#define NERR_NotLocalDomain	(NERR_BASE+220) /* The computer isn't active on this domain. */

/* 
 * 	CharDev API related 
 *		Error codes BASE+230 to BASE+249
 */
 
/* UNUSED BASE+230 */
#define NERR_DevInvalidOpCode	(NERR_BASE+231)	/* The operation is invalid for this device. */
#define NERR_DevNotFound	(NERR_BASE+232)	/* This device cannot be shared. */
#define NERR_DevNotOpen		(NERR_BASE+233)	/* This device was not open. */
#define NERR_BadQueueDevString	(NERR_BASE+234)	/* This devicename list is invalid. */
#define NERR_BadQueuePriority	(NERR_BASE+235)	/* The queue priority is invalid. */
#define NERR_NoCommDevs		(NERR_BASE+237)	/* There are no shared communication devices. */
#define NERR_QueueNotFound	(NERR_BASE+238)	/* The queue you specified doesn't exist. */
#define NERR_BadDevString	(NERR_BASE+240) /* This list of devices is invalid. */
#define NERR_BadDev		(NERR_BASE+241) /* The requested device is invalid. */
#define NERR_InUseBySpooler	(NERR_BASE+242) /* This device is already in use by the spooler. */
#define NERR_CommDevInUse	(NERR_BASE+243) /* This device is already in use as a communication device. */

/* 
 *	NetICanonicalize and NetIType and NetIMakeLMFileName
 *	NetIListCanon and NetINameCheck
 *		Error codes BASE+250 to BASE+269
 */
 
#define NERR_InvalidComputer   (NERR_BASE+251) /* This computername is invalid. */
/* UNUSED BASE+252 */
/* UNUSED BASE+253 */
#define NERR_MaxLenExceeded    (NERR_BASE+254) /* The string and prefix specified are too long. */
/* UNUSED BASE+255 */
#define NERR_BadComponent      (NERR_BASE+256) /* This path component is invalid. */
#define NERR_CantType	       (NERR_BASE+257) /* Cannot determine type of input. */
/* UNUSED BASE+258 */
/* UNUSED BASE+259 */
#define NERR_TooManyEntries    (NERR_BASE+262) /* The buffer for types is not big enough. */

/* 
 *	NetProfile
 *		Error codes BASE+270 to BASE+276
 */
 
#define NERR_ProfileFileTooBig	(NERR_BASE+270) /* Profile files cannot exceed 64K. */
#define NERR_ProfileOffset	(NERR_BASE+271) /* The start offset is out of range. */
#define NERR_ProfileCleanup	(NERR_BASE+272) /* The system cannot delete current connections to network resources. */
#define NERR_ProfileUnknownCmd	(NERR_BASE+273) /* The system was unable to parse the command line in this file.*/
#define NERR_ProfileLoadErr	(NERR_BASE+274) /* An error occurred while loading the profile file. */
#define NERR_ProfileSaveErr	(NERR_BASE+275) /* @W Errors occurred while saving the profile file.  The profile was partially saved. */


/*
 * 	NetAudit and NetErrorLog
 *		Error codes BASE+277 to BASE+279
 */

#define NERR_LogOverflow	   (NERR_BASE+277)	/* This log file exceeds the maximum defined size. */
#define NERR_LogFileChanged	   (NERR_BASE+278)	/* This log file has changed between reads. */
#define NERR_LogFileCorrupt	   (NERR_BASE+279)	/* This log file is corrupt. */

/* 
 *	NetRemote
 *		Error codes BASE+280 to BASE+299
 */
#define NERR_SourceIsDir   (NERR_BASE+280) /* The source path cannot be a directory. */
#define NERR_BadSource     (NERR_BASE+281) /* The source path is illegal. */
#define NERR_BadDest       (NERR_BASE+282) /* The destination path is illegal. */
#define NERR_DifferentServers   (NERR_BASE+283) /* The source and destination paths are on different servers. */
/* UNUSED BASE+284 */
#define NERR_RunSrvPaused 	(NERR_BASE+285) /* The Run server you requested is paused. */
/* UNUSED BASE+286 */
/* UNUSED BASE+287 */
/* UNUSED BASE+288 */
#define NERR_ErrCommRunSrv 	(NERR_BASE+289) /* An error occurred when communicating with a Run server. */
/* UNUSED BASE+290 */
#define NERR_ErrorExecingGhost 	(NERR_BASE+291) /* An error occurred when starting a background process. */
#define NERR_ShareNotFound 	(NERR_BASE+292) /* The shared resource you are connected to could not be found.*/
/* UNUSED BASE+293 */
/* UNUSED BASE+294 */


/*
 *  NetWksta.sys (redir) returned error codes.
 *
 *          NERR_BASE + (300-329)
 */

#define NERR_InvalidLana        (NERR_BASE+300) /* The LAN adapter number is invalid.  */
#define NERR_OpenFiles          (NERR_BASE+301) /* There are open files on the connection.    */
#define NERR_ActiveConns        (NERR_BASE+302) /* Active connections still exist. */
#define NERR_BadPasswordCore    (NERR_BASE+303) /* This netname or password is invalid. */
#define NERR_DevInUse           (NERR_BASE+304) /* The device is being accessed by an active process. */
#define NERR_LocalDrive		(NERR_BASE+305) /* The drive letter is in use locally. */

/*
 *  Alert error codes.
 *
 *          NERR_BASE + (330-339)
 */
#define NERR_AlertExists	(NERR_BASE+330)	/* The specified client is already registered for the specified event. */
#define NERR_TooManyAlerts	(NERR_BASE+331)	/* The alert table is full. */
#define NERR_NoSuchAlert	(NERR_BASE+332)	/* An invalid or nonexistent alertname was raised. */
#define NERR_BadRecipient       (NERR_BASE+333) /* The alert recipient is invalid.*/
#define NERR_AcctLimitExceeded	(NERR_BASE+334) /* A user's session with this server has been deleted
						 * because his logon hours are no longer valid */

/*
 *  Additional Error and Audit log codes.
 *
 *	    NERR_BASE +(340-343)
 */
#define NERR_InvalidLogSeek	(NERR_BASE+340) /* The log file does not contain the requested record number. */
/* UNUSED BASE+341 */
/* UNUSED BASE+342 */
/* UNUSED BASE+343 */

/*
 *  Additional UAS and NETLOGON codes
 *
 *	    NERR_BASE +(350-359)
 */
#define NERR_BadUasConfig	(NERR_BASE+350) /* The user account system database is not configured correctly. */
#define NERR_InvalidUASOp	(NERR_BASE+351) /* This operation is not permitted when the Netlogon service is running. */
#define NERR_LastAdmin		(NERR_BASE+352) /* This operation is not allowed on the last admin account. */
#define NERR_DCNotFound		(NERR_BASE+353) /* Unable to find domain controller for this domain. */
#define NERR_LogonTrackingError	(NERR_BASE+354) /* Unable to set logon information for this user. */
#define NERR_NetlogonNotStarted (NERR_BASE+355) /* The Netlogon service has not been started. */
#define NERR_CanNotGrowUASFile	(NERR_BASE+356) /* Unable to grow the user account system database. */
/* UNUSED BASE+357 */
/* UNUSED BASE+358 */
/* UNUSED BASE+359 */

/*
 *  Server Integration error codes.
 *
 *	    NERR_BASE +(360-369)
 */
#define NERR_NoSuchServer	(NERR_BASE+360) /* The server ID does not specify a valid server. */
#define NERR_NoSuchSession	(NERR_BASE+361) /* The session ID does not specify a valid session. */
#define NERR_NoSuchConnection	(NERR_BASE+362) /* The connection ID does not specify a valid connection. */
#define NERR_TooManyServers	(NERR_BASE+363) /* There is no space for another entry in the table of available servers. */
#define NERR_TooManySessions	(NERR_BASE+364) /* The server has reached the maximum number of sessions it supports. */
#define NERR_TooManyConnections (NERR_BASE+365) /* The server has reached the maximum number of connections it supports. */
#define NERR_TooManyFiles	(NERR_BASE+366) /* The server cannot open more files because it has reached its maximum number. */
#define NERR_NoAlternateServers (NERR_BASE+367) /* There are no alternate servers registered on this server. */
/* UNUSED BASE+368 */
/* UNUSED BASE+369 */

/*
 *  UPS error codes.
 *
 *	    NERR_BASE + (380-384)
 */
#define NERR_UPSDriverNotStarted    (NERR_BASE+380) /* The UPS driver could not be accessed by the UPS service. */
/* UNUSED BASE+381 */
/* UNUSED BASE+382 */
/* UNUSED BASE+383 */
/* UNUSED BASE+384 */

/*
 *  Remoteboot error codes.
 *
 *          NERR_BASE + (400-419)
 *          Error codes 400 - 405 are used by RPLBOOT.SYS.
 *          Error codes 403, 407 - 416 are used by RPLLOADR.COM,
 *          Error code 417 is the alerter message of REMOTEBOOT (RPLSERVR.EXE).
 *          Error code 418 is for when REMOTEBOOT can't start
 *          Error code 419 is for a disallowed 2nd rpl connection
 */
#define NERR_BadDosRetCode      (NERR_BASE+400) /* The program below returned an MS-DOS error code:*/
#define NERR_ProgNeedsExtraMem  (NERR_BASE+401) /* The program below needs more memory:*/
#define NERR_BadDosFunction     (NERR_BASE+402) /* The program below called an unsupported MS-DOS function:*/
#define NERR_RemoteBootFailed   (NERR_BASE+403) /* The workstation failed to boot.*/
#define NERR_BadFileCheckSum    (NERR_BASE+404) /* The file below is corrupt.*/
#define NERR_NoRplBootSystem    (NERR_BASE+405) /* No loader is specified in the boot-block definition file.*/
#define NERR_RplLoadrNetBiosErr (NERR_BASE+406) /* NetBIOS returned an error: The NCB and SMB are dumped above.*/
#define NERR_RplLoadrDiskErr    (NERR_BASE+407) /* A disk I/O error occurred.*/
#define NERR_ImageParamErr      (NERR_BASE+408) /* Image parameter substitution failed.*/
#define NERR_TooManyImageParams (NERR_BASE+409) /* Too many image parameters cross disk sector boundaries.*/
#define NERR_NonDosFloppyUsed   (NERR_BASE+410) /* The image was not generated from an MS-DOS diskette formatted with /S.*/
#define NERR_RplBootRestart     (NERR_BASE+411) /* Remote boot will be restarted later.*/
#define NERR_RplSrvrCallFailed  (NERR_BASE+412) /* The call to the Remoteboot server failed.*/
#define NERR_CantConnectRplSrvr (NERR_BASE+413) /* Cannot connect to the Remoteboot server.*/
#define NERR_CantOpenImageFile  (NERR_BASE+414) /* Cannot open image file on the Remoteboot server.*/
#define NERR_CallingRplSrvr     (NERR_BASE+415) /* Connecting to the Remoteboot server...*/
#define NERR_StartingRplBoot    (NERR_BASE+416) /* Connecting to the Remoteboot server...*/
#define NERR_RplBootServiceTerm (NERR_BASE+417) /* Remote boot service was stopped; check the error log for the cause of the problem.*/
#define NERR_RplBootStartFailed (NERR_BASE+418) /* Remote boot startup failed; check the error log for the cause of the problem.*/
#define NERR_RPL_CONNECTED	(NERR_BASE+419)	/* A second connection to a Remoteboot resource is not allowed.*/

/*
 *  FTADMIN API error codes
 *
 *       NERR_BASE + (425-434)
 *
 */
#define NERR_FTNotInstalled     (NERR_BASE+425) /* DISKFT.SYS is not installed. */
#define NERR_FTMONITNotRunning  (NERR_BASE+426) /* FTMONIT is not running */
#define NERR_FTDiskNotLocked    (NERR_BASE+427) /* FTADMIN has not locked the disk. */
#define NERR_FTDiskNotAvailable (NERR_BASE+428) /* Some other process has locked the disk. */
#define NERR_FTUnableToStart    (NERR_BASE+429) /* The verifier/correcter cannot be started. */
#define NERR_FTNotInProgress    (NERR_BASE+430) /* The verifier/correcter can't be aborted because it isn't started. */
#define NERR_FTUnableToAbort    (NERR_BASE+431) /* The verifier/correcter can't be aborted. */
#define NERR_FTUnabletoChange   (NERR_BASE+432) /* The disk could not be locked/unlocked. */
#define NERR_FTInvalidErrHandle (NERR_BASE+433) /* The error handle was not recognized. */
#define NERR_FTDriveNotMirrored (NERR_BASE+434) /* The drive is not mirrored. */


#define MAX_NERR		(NERR_BASE+899) /* This is the last error in NERR range. */

/*
 * end of list
 *
 *    WARNING:  Do not exceed MAX_NERR; values above this are used by
 *		other error code ranges (errlog.h, service.h, apperr.h).
 */


#endif /* NETERR_INCLUDED */

