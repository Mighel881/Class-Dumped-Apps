//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Realm/RLMObjectBase.h>

@interface RLMSyncSubscriptionObject : RLMObjectBase
{
    struct Optional<realm::NotificationToken> _token;
    struct Object _obj;
}

+ (id)defaultPropertyValues;
+ (id)primaryKey;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)unsubscribe;
- (id)descriptionWithMaxDepth:(unsigned long long)arg1;
- (double)timeToLive;
- (id)expiresAt;
- (id)updatedAt;
- (id)createdAt;
- (id)error;
- (long long)state;
- (id)query;
- (id)name;

@end

