//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEAccountBaseViewController.h"

#import "AWEQuickBindViewDelegate-Protocol.h"
#import "AWEUserMessage-Protocol.h"

@class AWEAccountPhoneNumber, AWEBindPhoneHelperInstance, AWEQuickBindView, NSString, UIButton;

@interface AWEQuickBindViewController : AWEAccountBaseViewController <AWEQuickBindViewDelegate, AWEUserMessage>
{
    CDUnknownBlockType _didFinishBindBlock;
    CDUnknownBlockType _didCancelBindBlock;
    AWEQuickBindView *_quickBindView;
    AWEAccountPhoneNumber *_phoneNumber;
    long long _carrierType;
    NSString *_platform;
    AWEBindPhoneHelperInstance *_bindHelper;
    unsigned long long _useType;
    UIButton *_skipButton;
    UIButton *_backButton;
}

@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIButton *skipButton; // @synthesize skipButton=_skipButton;
@property(nonatomic) unsigned long long useType; // @synthesize useType=_useType;
@property(retain, nonatomic) AWEBindPhoneHelperInstance *bindHelper; // @synthesize bindHelper=_bindHelper;
@property(copy, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(nonatomic) long long carrierType; // @synthesize carrierType=_carrierType;
@property(retain, nonatomic) AWEAccountPhoneNumber *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain, nonatomic) AWEQuickBindView *quickBindView; // @synthesize quickBindView=_quickBindView;
@property(copy, nonatomic) CDUnknownBlockType didCancelBindBlock; // @synthesize didCancelBindBlock=_didCancelBindBlock;
@property(copy, nonatomic) CDUnknownBlockType didFinishBindBlock; // @synthesize didFinishBindBlock=_didFinishBindBlock;
- (void).cxx_destruct;
- (void)_logWithEvent:(id)arg1 params:(id)arg2;
- (_Bool)_isPresented;
- (void)didFinishLogout;
- (void)backAction;
- (void)dismiss;
- (void)showBindViewController;
- (void)showBindViewControllerByQuickBindFailed:(_Bool)arg1;
- (unsigned long long)context;
- (void)requestQuickBindLogin;
- (void)requestQuickBind;
- (void)quickBindPhoneNumber;
- (void)showSkipAlertView;
- (_Bool)shouldReceiveTapToDismissKeyboardInPoint:(struct CGPoint)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithPhoneNumber:(id)arg1 carrierType:(long long)arg2 platform:(id)arg3 enterFrom:(id)arg4 useType:(unsigned long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

