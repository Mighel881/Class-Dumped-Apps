//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGAccountLinkingManaging-Protocol.h>
#import <FBSharedFramework/IGUserSessionObject-Protocol.h>

@class IGAccountLinkingInfo, IGUserStore, NSString;
@protocol IGAPIClient, IGAccountLinking;

@interface IGAccountLinkingManager : NSObject <IGAccountLinkingManaging, IGUserSessionObject>
{
    id <IGAPIClient> _networker;
    IGUserStore *_userStore;
    id <IGAccountLinking> _accountLinker;
    IGAccountLinkingInfo *_accountLinkingInfo;
}

- (void).cxx_destruct;
- (void)unlinkMainAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)getLinkedAccountGroupInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)prefetchLinkedAccountGroupInfo;
- (id)initWithNetworker:(id)arg1 userStore:(id)arg2 acountLinking:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

