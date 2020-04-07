//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HTSGuestInfoRenderer-Protocol.h"

@class HTSLiveInteractiveUserModel, HTSLivePKUserProfileView, NSString, UILabel;

@interface HTSLiveLinkMicPKGuestInfoView : UIView <HTSGuestInfoRenderer>
{
    HTSLiveInteractiveUserModel *_guest;
    CDUnknownBlockType _onUserViewClicked;
    HTSLivePKUserProfileView *_otherProfileView;
    UILabel *_tipLabel;
}

@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(nonatomic) __weak HTSLivePKUserProfileView *otherProfileView; // @synthesize otherProfileView=_otherProfileView;
@property(copy, nonatomic) CDUnknownBlockType onUserViewClicked; // @synthesize onUserViewClicked=_onUserViewClicked;
@property(readonly, nonatomic) HTSLiveInteractiveUserModel *guest; // @synthesize guest=_guest;
- (void).cxx_destruct;
- (void)updateWithGuest:(id)arg1;
- (void)setupViews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
