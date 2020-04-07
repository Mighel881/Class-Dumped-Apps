//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEDouyinSSOLoginViewDelegate-Protocol.h"

@class AWEDouyinSSOLoginView, NSString;

@interface AWEDouyinSSOLoginViewController : UIViewController <AWEDouyinSSOLoginViewDelegate>
{
    NSString *_enterFrom;
    NSString *_enterMethod;
    AWEDouyinSSOLoginView *_platformView;
}

@property(retain, nonatomic) AWEDouyinSSOLoginView *platformView; // @synthesize platformView=_platformView;
@property(copy, nonatomic) NSString *enterMethod; // @synthesize enterMethod=_enterMethod;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
- (void).cxx_destruct;
- (_Bool)canSkipAlertAfterLoginFailWithError:(id)arg1;
- (void)trackShowForLoginPlatform:(unsigned long long)arg1;
- (void)loginWithPlatform:(unsigned long long)arg1;
- (void)showToastWithModel:(id)arg1 platform:(unsigned long long)arg2;
- (void)SSOLogin:(unsigned long long)arg1;
- (void)viewDidLoad;
- (unsigned long long)__AWEAccountUtilsContext__;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
