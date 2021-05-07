//
//  LCObject_Internal.h
//  paas
//
//  Created by Zhu Zeng on 3/6/13.
//  Copyright (c) 2013 LeanCloud. All rights reserved.
//

#import "LCObject.h"
#import "LCRequestOperation.h"
#import "LCRequestManager.h"

FOUNDATION_EXPORT NSString *const internalIdTag;

NS_INLINE
NSString *request_path(NSDictionary *request) {
    return request[@"path"];
}

NS_INLINE
NSString *request_method(NSDictionary *request) {
    return request[@"method"];
}

NS_INLINE
NSString *request_internal_id(NSDictionary *request) {
    return request[@"body"][internalIdTag];
}

NS_INLINE
NSString *request_object_id(NSDictionary *request) {
    return request[@"body"][@"objectId"];
}

@interface LCObject ()

@property (nonatomic,   copy) NSString *objectId;
@property (nonatomic,   copy) NSString *className;
@property (nonatomic, strong) NSDate *updatedAt;
@property (nonatomic, strong) NSDate *createdAt;

@property (nonatomic, strong) NSMutableDictionary *_localData;
@property (nonatomic, strong) NSMutableDictionary *_estimatedData;
@property (nonatomic, strong) NSMutableDictionary *_relationData;

@property (nonatomic,   copy) NSString *_uuid;
@property (nonatomic, assign) BOOL _isPointer;
@property (nonatomic, assign) BOOL _running;
@property (nonatomic, strong) LCRequestOperationQueue *_operationQueue;
@property (nonatomic, strong) LCRequestManager *_requestManager;

@property (nonatomic, assign) BOOL _submit;
@property (nonatomic, assign) BOOL _inSetter;
@property (nonatomic, assign) BOOL _hasDataForCloud;
@property (nonatomic, assign) BOOL _hasDataForInitial;

- (void)internalSyncLock:(void (^)(void))block;

-(NSMutableArray *)findArrayForKey:(NSString *)key
                inDictionary:(NSMutableDictionary *)dict
                      create:(BOOL)create;

-(void)addRelation:(LCObject *)object
            forKey:(NSString *)key
            submit:(BOOL)submit;
-(void)removeRelation:(LCObject *)object
               forKey:(NSString *)key;

-(NSError *)preSave;
-(void)postSave;

- (void)postDelete;

// override to provide custom post data for create, put and post.
-(NSMutableDictionary *)postData;
-(NSMutableDictionary  *)initialBodyData;

-(void)refreshHasDataForCloud;
-(NSMutableArray *)dataForCloud;
-(NSMutableArray *)jsonDataForCloudWithClear:(BOOL)clear;
-(NSDictionary *)headerMap;

// override to provide custom classname for restful.
-(NSString *)internalClassName;
-(NSString *)childClassNameForRelation:(NSString *)key;
-(NSString *)myObjectPath;

- (NSMutableArray *) buildSaveRequests;

-(BOOL)hasValidObjectId;

- (void)setObject:(id)object
           forKey:(NSString *)key
           submit:(BOOL)submit;

-(void)addSetRequest:(NSString *)key
              object:(NSObject *)object;

- (BOOL)saveWithOption:(LCSaveOption *)option
            eventually:(BOOL)eventually
          verifyBefore:(BOOL)verifyBefore
                 error:(NSError **)error;

-(void)removeLocalData;
-(void)addInternalId:(NSMutableDictionary *)dict;
-(void)addDefaultACL:(NSMutableDictionary *)dict;

/* 针对 save 或 update 请求的 method 和 path */
- (NSString *)initialRequestMethod;
- (NSString *)initialRequestPath;

/**
 Post process batch requests.

 Subclass can override this method to add custom logic.
 */
- (void)postProcessBatchRequests:(NSMutableArray *)requests;

/*
 * Indicate that whether a batch saving should include update requests.
 * Update requests are generated by modifying object. Some objects may should not include
 * modification when saving because of some prerequests not satisfied.
 * For example, if an user is not login, update that user will failed.
 * So, we should not include update requests when sign up user.
 */
- (BOOL)shouldIncludeUpdateRequests;

/**
 * Get snapshot of object.
 *
 * @return The snapshot of object
 */
- (NSDictionary *)snapshot;

/**
 * Check wether an object is dirty.
 *
 * @return true if object is dirty, for example, has been modified or expired, false otherwise.
 */
- (BOOL)isDirty;

@end
