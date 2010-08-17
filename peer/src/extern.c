/*
 * Copyright (C) 2010, Robert Oostenveld
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/
 *
 */

#include "peer.h"

pthread_mutex_t mutexstatus = PTHREAD_MUTEX_INITIALIZER;
int tcpserverStatus = 0;
int announceStatus  = 0;
int discoverStatus  = 0;
int expireStatus    = 0;

pthread_mutex_t mutexappendcount = PTHREAD_MUTEX_INITIALIZER;
int appendcount = 0;

pthread_mutex_t mutexsocketcount = PTHREAD_MUTEX_INITIALIZER;
int socketcount = 0;

pthread_mutex_t mutexthreadcount = PTHREAD_MUTEX_INITIALIZER;
int threadcount = 0; 

pthread_mutex_t mutexconnectioncount = PTHREAD_MUTEX_INITIALIZER;
int connectioncount = 0; 

pthread_mutex_t mutexhost = PTHREAD_MUTEX_INITIALIZER;
hostdef_t *host = NULL;

pthread_mutex_t mutexpeerlist = PTHREAD_MUTEX_INITIALIZER;
peerlist_t *peerlist = NULL;

pthread_mutex_t mutexjoblist = PTHREAD_MUTEX_INITIALIZER;
joblist_t *joblist = NULL;

pthread_mutex_t mutexuserlist = PTHREAD_MUTEX_INITIALIZER;
userlist_t *userlist = NULL;

pthread_mutex_t mutexgrouplist = PTHREAD_MUTEX_INITIALIZER;
grouplist_t *grouplist = NULL;

pthread_mutex_t mutexhostlist = PTHREAD_MUTEX_INITIALIZER;
hostlist_t *hostlist = NULL;

pthread_mutex_t mutexsmartmem;
struct {
/*		int minavail; */
/*		int maxavail; */
		int enabled;
} smartmem;

pthread_mutex_t mutexfairshare = PTHREAD_MUTEX_INITIALIZER;
struct {
		int    n;
		time_t t0;
		int prevhostcount;
		int prevhostid;
		int enabled;
} fairshare;

fairsharelist_t *fairsharelist = NULL;

