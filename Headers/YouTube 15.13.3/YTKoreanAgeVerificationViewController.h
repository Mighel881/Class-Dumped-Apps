//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/UIWebViewDelegate-Protocol.h>
#import <Module_Framework/YTKoreanAgeVerificationViewDelegate-Protocol.h>
#import <Module_Framework/YTResponder-Protocol.h>

@class GIMMe, NSString, SSOService, YTIPlayerKavRenderer;
@protocol YTIdentityProvider, YTKoreanAgeVerificationViewControllerDelegate, YTResponder;

@interface YTKoreanAgeVerificationViewController : UIViewController <YTResponder, UIWebViewDelegate, YTKoreanAgeVerificationViewDelegate>
{
    YTIPlayerKavRenderer *_renderer;
    id <YTIdentityProvider> _identityProvider;
    SSOService *_ssoService;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    id <YTKoreanAgeVerificationViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <YTKoreanAgeVerificationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (_Bool)shouldAutorotate;
- (void)loadURL:(id)arg1;
- (void)handleSSOFailureWithError:(id)arg1;
- (id)KAVView;
- (void)KAVViewDidComplete;
- (void)KAVViewDidCancel;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)startKoreanAgeVerification;
- (void)loadView;
- (id)initWithRenderer:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
