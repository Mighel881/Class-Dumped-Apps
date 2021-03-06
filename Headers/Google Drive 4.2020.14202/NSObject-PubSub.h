//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaObject-Protocol.h"

@class FBKVOController, NSDictionary, NSMutableDictionary, NSString;

@interface NSObject (PubSub) <JavaObject>
+ (id)getOrCreateExtraAttributes:(id)arg1;
+ (id)grw_objectByPerformingSelector:(SEL)arg1;
+ (const struct J2ObjcClassInfo *)__metadata;
- (_Bool)isSubscribedToPublisher:(id)arg1 forEventClass:(Class)arg2;
- (_Bool)isSubscribingToPublishersForEventClass:(Class)arg1;
- (_Bool)hasSubscriber:(id)arg1 forEventClass:(Class)arg2;
- (_Bool)hasSubscribersForEventClass:(Class)arg1;
- (_Bool)publishEvent:(id)arg1;
- (void)removeSubscriber:(id)arg1;
- (void)unsubscribeFromPublisher:(id)arg1;
- (void)unsubscribeFromAllPublishers;
- (void)removeAllSubscribers;
- (void)unsubscribeFromEventClass:(Class)arg1;
- (void)removeAllSubscribersForEventClass:(Class)arg1;
- (void)unsubscribeFromPublisher:(id)arg1 forEventClass:(Class)arg2;
- (void)removeSubscriber:(id)arg1 forEventClass:(Class)arg2 withIdentifier:(id)arg3;
- (void)removeSubscriber:(id)arg1 forEventClass:(Class)arg2;
- (void)addSubscriber:(id)arg1 forEventClass:(Class)arg2 usingBlock:(CDUnknownBlockType)arg3 withQueue:(id)arg4;
- (void)addSubscriber:(id)arg1 forEventClass:(Class)arg2 withIdentifier:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)addSubscriber:(id)arg1 forEventClass:(Class)arg2 usingBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSDictionary *readOnlyExtraAttributes;
@property(readonly, nonatomic) NSMutableDictionary *extraAttributes;
@property(retain, nonatomic) FBKVOController *KVOControllerNonRetaining;
@property(retain, nonatomic) FBKVOController *KVOController;
- (id)grw_objectByPerformingSelector:(SEL)arg1;
- (void)_java_lang_ref_original_release;
- (void)_java_lang_ref_original_dealloc;
- (void)__javaClone:(id)arg1;
- (void)java_finalize;
- (void)java_waitWithLong:(long long)arg1 withInt:(int)arg2;
- (void)java_waitWithLong:(long long)arg1;
- (void)java_wait;
- (void)java_notifyAll;
- (void)java_notify;
- (int)compareToWithId:(id)arg1;
- (id)java_getClass;
- (id)java_clone;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

