//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SPTBaseViewModel, SPTInfoView, SPTProgressView, UIView;

@interface SPTProfileInfoViewController : UIViewController
{
    SPTBaseViewModel *_viewModel;
    SPTInfoView *_infoView;
    UIView *_infoContainerView;
    SPTProgressView *_progressView;
}

@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIView *infoContainerView; // @synthesize infoContainerView=_infoContainerView;
@property(retain, nonatomic) SPTInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) SPTBaseViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)viewWillLayoutSubviews;
- (void)hideProgressView;
- (void)showProgressViewWithDelay:(_Bool)arg1;
- (void)showProgressView;
- (void)retry:(id)arg1;
- (void)showOrHideInfoView:(_Bool)arg1;
- (void)hideInfoView;
- (void)showInfoViewForError:(id)arg1;
- (void)setUpInfoView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

@end
