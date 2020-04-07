//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEIMShareAndForwardToChatProtocol-Protocol.h"

@class AWEIMMessage, AWEShareContext, NSString;

@interface AWEIMShareAndForwardLiveImpl : NSObject <AWEIMShareAndForwardToChatProtocol>
{
    AWEShareContext *_shareContext;
    AWEIMMessage *_forwardMessage;
}

@property(retain, nonatomic) AWEIMMessage *forwardMessage; // @synthesize forwardMessage=_forwardMessage;
@property(retain, nonatomic) AWEShareContext *shareContext; // @synthesize shareContext=_shareContext;
- (void).cxx_destruct;
- (id)liveRoomModel;
- (void)configShareAlertTopView:(id)arg1 withCoverImageView:(id)arg2 contentLabel:(id)arg3;
- (void)configShareBottomInputViewWithCoverImageView:(id)arg1;
- (void)didSelectShareUser:(id)arg1 inVC:(id)arg2;
- (void)showCustomTipsAfterSendMessagesWithShareUserList:(id)arg1;
- (void)willTransferToShareListVC:(id)arg1;
- (id)shareMessage;
- (void)clearBusinessModelFromIMSetting;
- (void)saveBusinessModelToIMSetting;
- (id)businessModelFromIMSetting;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
