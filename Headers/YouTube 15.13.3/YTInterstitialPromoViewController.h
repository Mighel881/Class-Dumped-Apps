//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Module_Framework/YTFormattedStringLabelDelegate-Protocol.h>
#import <Module_Framework/YTGraftingViewController-Protocol.h>
#import <Module_Framework/YTInterstitialPromoViewDelegate-Protocol.h>
#import <Module_Framework/YTResponder-Protocol.h>

@class GIMMe, NSMutableArray, NSString, YTICommand, YTIInterstitialPromoRenderer, YTInterstitialPromoView, YTQTMButton;
@protocol YTResponder;

@interface YTInterstitialPromoViewController : UIViewController <YTFormattedStringLabelDelegate, YTGraftingViewController, YTResponder, YTInterstitialPromoViewDelegate>
{
    YTQTMButton *_actionButton;
    _Bool _promoThrottled;
    NSMutableArray *_thumbnailControllers;
    YTICommand *_navEndpoint;
    id <YTResponder> _parentResponder;
    id <YTResponder> _interstitialParentResponder;
    YTInterstitialPromoView *_interstitialPromoView;
    YTIInterstitialPromoRenderer *_renderer;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) YTIInterstitialPromoRenderer *renderer; // @synthesize renderer=_renderer;
@property(readonly, nonatomic) id <YTResponder> interstitialParentResponder; // @synthesize interstitialParentResponder=_interstitialParentResponder;
- (void).cxx_destruct;
- (void)resetViewImages;
- (void)loadViewImages;
@property(readonly, nonatomic) YTInterstitialPromoView *interstitialPromoView; // @synthesize interstitialPromoView=_interstitialPromoView;
- (void)notifyVisibilityToStateControllerAsVisible:(_Bool)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (id)navEndpoint;
- (void)cancelInterstitialPromoWithCompletion:(CDUnknownBlockType)arg1;
- (void)fireTapEndpointsFromButton:(id)arg1;
- (void)interstitialPromoView:(id)arg1 didTapDismissButton:(id)arg2;
- (void)interstitialPromoView:(id)arg1 didTapActionButton:(id)arg2;
- (void)formattedStringLabel:(id)arg1 didPressURL:(id)arg2;
- (void)formattedStringLabel:(id)arg1 didPressNavigationEndpoint:(id)arg2 linkText:(id)arg3;
- (void)dismissInterstitialPromoWithCompletionBlock:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)showInterstitialPromo:(id)arg1 enableClientImpressionThrottling:(_Bool)arg2 interstitialParentResponder:(id)arg3;
- (void)showInterstitialPromo:(id)arg1 interstitialParentResponder:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)loadView;
- (id)init;
- (unsigned long long)supportedInterfaceOrientations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
