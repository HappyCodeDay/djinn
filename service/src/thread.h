#ifndef _THREAD_H_
#define _THREAD_H_

#include <pthread.h>
#include <stdio.h>
#include <vector>

#include "caffe/caffe.hpp"
#include "socket.h"
#include "utils.h"
#include "tonic.h"

using caffe::Blob;
using caffe::Caffe;
using caffe::Net;
using caffe::Layer;
using caffe::shared_ptr;
using caffe::Timer;
using caffe::vector;

using namespace std;

pthread_t request_thread_init(int sock);
void* request_handler(void* sock);

#endif // #define _THREAD_H_