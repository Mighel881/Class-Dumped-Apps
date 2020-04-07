//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWEAdEggViewProtocol-Protocol.h"

@class AWEAdWebViewController, BDImageView, LOTAnimationView, NSString, NSTimer, UIButton;
@protocol AWEAdEggModelProtocol;

@interface AWEAdEggView : UIView <AWEAdEggViewProtocol>
{
    id <AWEAdEggModelProtocol> _model;
    NSString *_eggType;
    NSString *_webURL;
    NSString *_openURL;
    NSString *_sourceURL;
    NSTimer *_autoDismissTimer;
    double _bindDataTime;
    double _maxWaitToShowTime;
    double _displayTime;
    AWEAdWebViewController *_webViewController;
    LOTAnimationView *_lottieView;
    BDImageView *_eggImageView;
    UIButton *_closeButton;
    CDUnknownBlockType _clickImageBlock;
    CDUnknownBlockType _dismissBlock;
}

@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
@property(copy, nonatomic) CDUnknownBlockType clickImageBlock; // @synthesize clickImageBlock=_clickImageBlock;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak BDImageView *eggImageView; // @synthesize eggImageView=_eggImageView;
@property(retain, nonatomic) LOTAnimationView *lottieView; // @synthesize lottieView=_lottieView;
@property(retain, nonatomic) AWEAdWebViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(nonatomic) double displayTime; // @synthesize displayTime=_displayTime;
@property(nonatomic) double maxWaitToShowTime; // @synthesize maxWaitToShowTime=_maxWaitToShowTime;
@property(nonatomic) double bindDataTime; // @synthesize bindDataTime=_bindDataTime;
@property(retain, nonatomic) NSTimer *autoDismissTimer; // @synthesize autoDismissTimer=_autoDismissTimer;
@property(retain, nonatomic) NSString *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(retain, nonatomic) NSString *openURL; // @synthesize openURL=_openURL;
@property(retain, nonatomic) NSString *webURL; // @synthesize webURL=_webURL;
@property(retain, nonatomic) NSString *eggType; // @synthesize eggType=_eggType;
@property(retain, nonatomic) id <AWEAdEggModelProtocol> model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)closeButtonClicked;
- (void)resetEggView;
- (void)clickImage;
- (_Bool)hasOvertime;
- (void)handleSingleTap:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)updateViewWithEggModel:(id)arg1 eggFrame:(struct CGRect)arg2 closeButtonFrame:(struct CGRect)arg3 maxWaitToShowTime:(double)arg4 completionBlock:(CDUnknownBlockType)arg5 clickImageBlock:(CDUnknownBlockType)arg6 dismissBlock:(CDUnknownBlockType)arg7 canViewBeClicked:(_Bool)arg8;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
