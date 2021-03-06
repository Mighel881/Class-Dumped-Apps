//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilCollections_CheckedCollection.h"

#import "JavaIoSerializable-Protocol.h"
#import "JavaUtilQueue-Protocol.h"

@class NSString;
@protocol JavaUtilQueue;

@interface JavaUtilCollections_CheckedQueue : JavaUtilCollections_CheckedCollection <JavaUtilQueue, JavaIoSerializable>
{
    id <JavaUtilQueue> queue_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (_Bool)offerWithId:(id)arg1;
- (id)remove;
- (id)poll;
- (id)peek;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)element;
- (id)initWithJavaUtilQueue:(id)arg1 withIOSClass:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

