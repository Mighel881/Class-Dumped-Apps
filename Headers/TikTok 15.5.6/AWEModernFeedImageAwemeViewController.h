//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEModernFeedBaseCellController.h"

@class UIImageView;

@interface AWEModernFeedImageAwemeViewController : AWEModernFeedBaseCellController
{
    UIImageView *_imageView;
    UIImageView *_imageTagView;
}

+ (void)__awe__codeRunnerRun_27;
@property(retain, nonatomic) UIImageView *imageTagView; // @synthesize imageTagView=_imageTagView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (id)transitionContext;
- (void)playerDidExitPureMode;
- (void)playerWillEnterPureMode;
- (void)updatePrivacyTagView;
- (id)contentView;
- (void)didResignActiveForReason:(unsigned long long)arg1;
- (void)didBecomeActiveForReason:(unsigned long long)arg1;
- (void)updateWithModel:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)didEndShowing;

@end
