//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWETextEditAlertView.h"

@class NSString;

@interface AWEAliasAlertView : AWETextEditAlertView
{
    _Bool _isQuickEdit;
    NSString *_userID;
}

@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(nonatomic) _Bool isQuickEdit; // @synthesize isQuickEdit=_isQuickEdit;
- (void).cxx_destruct;
- (void)trackEventWithActionType:(id)arg1;
- (void)clickConfirmBtn:(id)arg1;
- (void)clickCancelBtn:(id)arg1;
- (void)showOnView:(id)arg1;
- (void)_setupUI;
- (id)initWithFrame:(struct CGRect)arg1 isQuickEdit:(_Bool)arg2 userID:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end
