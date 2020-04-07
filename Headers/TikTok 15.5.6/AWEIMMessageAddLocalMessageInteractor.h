//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEIMInteractorObject.h"

@interface AWEIMMessageAddLocalMessageInteractor : AWEIMInteractorObject
{
    _Bool _isAlreadyExecuteAddFakeGroupGreetingMsg;
    _Bool _haveInsertedPushNoticeMsg;
}

@property(nonatomic) _Bool haveInsertedPushNoticeMsg; // @synthesize haveInsertedPushNoticeMsg=_haveInsertedPushNoticeMsg;
@property(nonatomic) _Bool isAlreadyExecuteAddFakeGroupGreetingMsg; // @synthesize isAlreadyExecuteAddFakeGroupGreetingMsg=_isAlreadyExecuteAddFakeGroupGreetingMsg;
- (void)addLocalMessageWithMessage:(id)arg1 insertIntoDB:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addLocalPushNoticeMsg;
- (void)addLocalGroupGreetingMsgWithMsg:(id)arg1;
- (void)tryAddActiveUserPrivacyTipsMsgWithUid:(id)arg1 flagCount:(long long)arg2;
- (void)addFakePrivateTipsMsg;
- (void)setCurrentAlreadyShowGroupGreetingMsg;
- (void)tryAddPushNoticeMsgInState:(unsigned long long)arg1;
- (void)tryAddGroupGreetingFromClientMsg;
- (void)tryAddPrivateTipsMsg;
- (void)viewDidLoad;
- (id)vcParent;

@end
