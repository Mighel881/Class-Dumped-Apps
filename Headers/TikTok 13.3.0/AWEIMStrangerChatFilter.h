//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEUserMessage-Protocol.h"

@class NSString;

@interface AWEIMStrangerChatFilter : NSObject <AWEUserMessage>
{
}

+ (id)sharedInstance;
- (void)didFinishFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)p_syncFilterDict:(id)arg1;
- (id)filterSessionForLoginUserID:(id)arg1;
- (void)removeFilterSessionUserID:(id)arg1;
- (void)setFilterSessionUserID:(id)arg1;
- (id)strangerChatFilterKey;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
