//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDKApprovalRequestAction-Protocol.h"

@class GDKApprovalRequestContext, NSString;
@protocol GDKApprovalsService, SSOIdentity;

@interface GDKChangeApproverAction : NSObject <GDKApprovalRequestAction>
{
    GDKApprovalRequestContext *_requestContext;
    id <SSOIdentity> _userIdentity;
    id <GDKApprovalsService> _approvalsService;
    NSString *_existingReviewerEmail;
}

@property(readonly, copy, nonatomic) NSString *existingReviewerEmail; // @synthesize existingReviewerEmail=_existingReviewerEmail;
@property(readonly, nonatomic) id <GDKApprovalsService> approvalsService; // @synthesize approvalsService=_approvalsService;
@property(readonly, nonatomic) id <SSOIdentity> userIdentity; // @synthesize userIdentity=_userIdentity;
@property(readonly, nonatomic) GDKApprovalRequestContext *requestContext; // @synthesize requestContext=_requestContext;
- (void).cxx_destruct;
- (void)performActionWithState:(id)arg1 reviewerEmails:(id)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithUserIdentity:(id)arg1 approvalsService:(id)arg2 approvalID:(id)arg3 existingReviewerEmail:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

