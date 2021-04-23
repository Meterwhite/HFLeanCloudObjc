//
//  AVUtils.h
//  paas
//
//  Created by Zhu Zeng on 2/27/13.
//  Copyright (c) 2013 AVOS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AVConstants.h"
#import "AVOSCloud.h"
#import "AVHelpers.h"

// ref: https://github.com/keitaito/KeyPathMacroTestApp
#define keyPath(base, path) ({ __unused typeof(base.path) _; @#path; })
#define ivarName(base, path) ({ __unused typeof(base->path) _; @#path; })

#if defined(__IPHONE_OS_VERSION_MIN_REQUIRED)
    #import <MobileCoreServices/MobileCoreServices.h>
#else
    #import <CoreServices/CoreServices.h>
#endif

@class LCObject;

@interface AVUtils : NSObject

+ (void)warnMainThreadIfNecessary;

+ (BOOL)containsProperty:(Class)objectClass
                property:(NSString *)name;

+ (BOOL)containsProperty:(NSString *)name
                 inClass:(Class)objectClass
            containSuper:(BOOL)containSuper
           filterDynamic:(BOOL)filterDynamic;

+ (BOOL)isDynamicProperty:(NSString *)name
                  inClass:(Class)objectClass
                 withType:(Class)targetClass
             containSuper:(BOOL)containSuper;

+ (void)copyPropertiesFrom:(NSObject *)src
                  toObject:(NSObject *)target;

+ (void)copyPropertiesFromDictionary:(NSDictionary *)src
                          toNSObject:(NSObject *)target;

+ (NSString *)jsonStringFromDictionary:(NSDictionary *)dictionary;

+ (NSString *)jsonStringFromArray:(NSArray *)array;

+ (NSString *)generateUUID;
+ (NSString *)generateCompactUUID;
+ (NSString *)deviceUUID;

#pragma mark - Block

+ (void)callBooleanResultBlock:(AVBooleanResultBlock)block
                         error:(NSError *)error;

+ (void)callIntegerResultBlock:(AVIntegerResultBlock)block
                        number:(NSInteger)number
                         error:(NSError *)error;

+ (void)callArrayResultBlock:(AVArrayResultBlock)block
                       array:(NSArray *)array
                       error:(NSError *)error;

+ (void)callObjectResultBlock:(LCObjectResultBlock)block
                       object:(LCObject *)object
                        error:(NSError *)error;

+ (void)callUserResultBlock:(AVUserResultBlock)block
                       user:(AVUser *)user
                      error:(NSError *)error;

+ (void)callIdResultBlock:(AVIdResultBlock)block
                   object:(id)object
                    error:(NSError *)error;

+ (void)callProgressBlock:(AVProgressBlock)block
                  percent:(NSInteger)percentDone;


+ (void)callImageResultBlock:(AVImageResultBlock)block
                       image:(UIImage *)image
                       error:(NSError *)error;

+ (void)callFileResultBlock:(LCFileResultBlock)block
                     file:(LCFile *)file
                      error:(NSError *)error;

+ (void)callSetResultBlock:(AVSetResultBlock)block
                       set:(NSSet *)set
                     error:(NSError *)error;

+ (void)callCloudQueryResultBlock:(AVCloudQueryCallback)block
                           result:(AVCloudQueryResult *)result
                            error:error;

/*!
 Dispatch task on background thread.

 @param task The task to be dispatched.
 */
+ (void)asynchronizeTask:(void(^)(void))task;

#pragma mark - String Util

+ (NSString *)MIMEType:(NSString *)filePathOrName;
+ (NSString *)MIMETypeFromPath:(NSString *)fullPath;
+ (NSString *)contentTypeForImageData:(NSData *)data;

#pragma mark - Something about log

// the level is only for NSLogger
typedef enum LoggerLevel : NSUInteger {
    LoggerLevelError = 0,
    LoggerLevelWarning,
    LoggerLevelInfo,
    LoggerLevelVerbose,
    LoggerLevelInternal,
    LoggerLevelNum
} LoggerLevel;

@end

#define AV_WAIT_TIL_TRUE(signal, interval) \
do {                                       \
    while(!(signal)) {                     \
        @autoreleasepool {                 \
            if (![[NSRunLoop currentRunLoop] runMode:NSDefaultRunLoopMode beforeDate:[NSDate dateWithTimeIntervalSinceNow:(interval)]]) { \
                [NSThread sleepForTimeInterval:(interval)]; \
            }                              \
        }                                  \
    }                                      \
} while (0)

#define AV_WAIT_WITH_ROUTINE_TIL_TRUE(signal, interval, routine) \
do {                                       \
    while(!(signal)) {                     \
        @autoreleasepool {                 \
            routine;                       \
            if (![[NSRunLoop currentRunLoop] runMode:NSDefaultRunLoopMode beforeDate:[NSDate dateWithTimeIntervalSinceNow:(interval)]]) { \
                [NSThread sleepForTimeInterval:(interval)]; \
            }                              \
        }                                  \
    }                                      \
} while (0)

@interface NSString (AVAES256)
- (NSString *)AVAES256Encrypt;
- (NSString *)AVAES256Decrypt;
@end

@interface NSObject (LeanCloudObjcSDK)

+ (BOOL)_lc_isTypeOf:(id)instance LC_WARN_UNUSED_RESULT;

+ (instancetype)_lc_decoding:(NSDictionary *)dictionary
                         key:(NSString *)key LC_WARN_UNUSED_RESULT;

@end
