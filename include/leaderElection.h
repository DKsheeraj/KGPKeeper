#ifndef LEADER_ELECTION_H
#define LEADER_ELECTION_H

#include <vector>
#include "Node.h"
#include <thread>
#include <fstream>
#include <nlohmann/json.hpp>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>   
#include <bits/stdc++.h> 
#include <ctime>

#define P(s) semop(s, &pop, 1) 
#define V(s) semop(s, &vop, 1) 

using json = nlohmann::json;

void assignType(Node &node);
void sendHeartbeat(Node &node);
void receiveHeartbeat(Node &node);
bool isValidAckMessage(const char* buffer, int* port);
void startElection(Node &node, int &sockfd);
void receiveVotes(Node &node, int &sockfd, struct timeval &timeout, long long &startTime);

#endif