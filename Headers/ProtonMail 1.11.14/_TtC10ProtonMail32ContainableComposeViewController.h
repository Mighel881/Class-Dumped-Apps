//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC10ProtonMail21ComposeViewController.h"

#import "_TtP10ProtonMail15BannerRequester_-Protocol.h"

@interface _TtC10ProtonMail32ContainableComposeViewController : _TtC10ProtonMail21ComposeViewController <_TtP10ProtonMail15BannerRequester_>
{
    // Error parsing type: , name: latestErrorBanner
    // Error parsing type: , name: heightObservation
    // Error parsing type: , name: queueObservation
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)errorBannerToPresent;
- (void)addInlineAttachment:(id)arg1 data:(id)arg2;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)composeViewDidTapExpirationButton:(id)arg1;
- (void)composeViewHideExpirationView:(id)arg1;
- (void)caretMovedTo:(struct CGPoint)arg1;
- (void)dealloc;
- (void)removeStyleFromSelection;
- (void)viewDidLoad;

@end

