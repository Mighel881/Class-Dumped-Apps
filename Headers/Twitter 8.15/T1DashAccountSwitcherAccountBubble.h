//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1DashAccountSwitcherBubble.h>

@class T1DashAvatarContainerView, TFNTwitterAccount;

@interface T1DashAccountSwitcherAccountBubble : T1DashAccountSwitcherBubble
{
    TFNTwitterAccount *_account;
    T1DashAvatarContainerView *_avatarContainerView;
}

@property(retain, nonatomic) T1DashAvatarContainerView *avatarContainerView; // @synthesize avatarContainerView=_avatarContainerView;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;

@end
