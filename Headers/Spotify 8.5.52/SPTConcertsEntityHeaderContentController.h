//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTConcertsEntityHeaderViewModelDelegate-Protocol.h"
#import "SPTEntityHeaderContentController-Protocol.h"

@class GLUEButton, NSString, SPTConcertsEntityHeaderContentView, SPTConcertsEntityHeaderViewModel, SPTConcertsLogger;

@interface SPTConcertsEntityHeaderContentController : UIViewController <SPTConcertsEntityHeaderViewModelDelegate, SPTEntityHeaderContentController>
{
    SPTConcertsEntityHeaderViewModel *_viewModel;
    SPTConcertsLogger *_logger;
    GLUEButton *_findTicketsButton;
}

@property(retain, nonatomic) GLUEButton *findTicketsButton; // @synthesize findTicketsButton=_findTicketsButton;
@property(readonly, nonatomic) SPTConcertsLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTConcertsEntityHeaderViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)headerViewModel:(id)arg1 didUpdatePrimaryImage:(id)arg2 shouldAnimate:(_Bool)arg3;
- (void)updateContentForHeaderViewModel:(id)arg1;
- (double)entityHeaderViewControllerMinimumHeight:(id)arg1;
- (void)entityHeaderViewController:(id)arg1 didUpdateVisibleRect:(struct CGRect)arg2;
- (void)entityHeaderViewController:(id)arg1 didUpdateBounceOffsets:(struct UIEdgeInsets)arg2;
- (id)supplementaryViewForEntityHeaderViewController:(id)arg1;
- (void)handleFindTicketsTap;
- (void)updateContentViewUsingViewModel:(id)arg1;
- (void)updateContentViewStyleUsingViewModel:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
@property(readonly, nonatomic) SPTConcertsEntityHeaderContentView *contentView;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1 concertsLogger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

