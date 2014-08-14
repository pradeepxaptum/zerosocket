/********************************************************************************
* XAPTUM CONFIDENTIAL
* ________________________________________________________________
* 
*  [2012] - [2014] Xaptum Incorporated 
*  All Rights Reserved.
* 
* NOTICE:  All information contained herein is, and remains
* the property of Xaptum Incorporated and its suppliers,
* if any.  The intellectual and technical concepts contained
* herein are proprietary to Xaptum Incorporated
* and its suppliers and may be covered by U.S. and Foreign Patents,
* patents in process, and are protected by trade secret or copyright law.
* Dissemination of this information or reproduction of this material
* is strictly forbidden unless prior written permission is obtained
* from Xaptum Incorporated.
* 
* /libzerosocket-cpp/zerosocket.h
* zerosocket.h
* 
* Created on: Aug 13, 2014
*     Author: pradeepbarthur Inc.
********************************************************************************/

#ifndef ZEROSOCKET_H_
#define ZEROSOCKET_H_

enum ZSElement {
	ZUNK = 0,
	ZVER, // 1
	ZUSR, // 2
	ZPAS, // 3
	ZTOK, // 4
	ZDAT, // 5
	ZDID, // 6
	ZMET, // 7
	ZADR, // 8
	ZPRT, // 9
	ZORG, // 10
	ZDST  // 11
};

const char * const ZSElementName [] = { "UNKN", "zver", "zusr", "zpas", "ztok",
		"zdat", "zdid", "zmet", "zadr", "zprt" , "zorg" , "zdst" };

const char * const ZSElementDesc [] = {
		"UNKNOWN",
		"ProtocolVersion",
		"Username",
		"Password",
		"Token",
		"Date",
		"DeviceId",
		"Method",
		"Address",
		"Port",
		"Origin",
		"Destination"
	};

#define SIZEOFARRAY(ARR) sizeof(ARR)/sizeof(*ARR)

ZSElement getZSElementIndex(const char * name) ;

const char * getZSVersion(void);

#endif /* ZEROSOCKET_H_ */
