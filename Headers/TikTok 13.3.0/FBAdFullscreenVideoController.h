//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class FBAdVideoCallToActionButton, FBAdVideoDismissButton, FBMediaViewDefaultVideoRenderer, NSString, UIView;
@protocol FBAdFullscreenVideoControllerDelegate;

@interface FBAdFullscreenVideoController : UIViewController
{
    id <FBAdFullscreenVideoControllerDelegate> _delegate;
    NSString *_callToAction;
    FBAdVideoCallToActionButton *_callToActionButton;
    FBAdVideoDismissButton *_dismissButton;
    UIView *_originalSuperView;
    FBMediaViewDefaultVideoRenderer *_videoRenderer;
}

+ (void)initialize;
@property(nonatomic) __weak FBMediaViewDefaultVideoRenderer *videoRenderer; // @synthesize videoRenderer=_videoRenderer;
@property(nonatomic) __weak UIView *originalSuperView; // @synthesize originalSuperView=_originalSuperView;
@property(retain, nonatomic) FBAdVideoDismissButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) FBAdVideoCallToActionButton *callToActionButton; // @synthesize callToActionButton=_callToActionButton;
@property(copy, nonatomic) NSString *callToAction; // @synthesize callToAction=_callToAction;
@property(nonatomic) __weak id <FBAdFullscreenVideoControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)callToActionHit:(id)arg1 withEvent:(id)arg2;
- (void)dismiss:(id)arg1;
- (void)swapOutVideoView;
- (void)swapInVideoView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (_Bool)modalPresentationCapturesStatusBarAppearance;
- (_Bool)prefersStatusBarHidden;
- (id)initWithVideoRenderer:(id)arg1 callToAction:(id)arg2;

@end
