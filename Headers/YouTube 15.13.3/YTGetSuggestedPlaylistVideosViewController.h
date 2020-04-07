//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTStyledViewController.h>

#import "YTGraftingViewController-Protocol.h"
#import "YTPageStyling-Protocol.h"
#import "YTTopController-Protocol.h"

@class GIMMe, NSMutableArray, NSString, QTMActivityIndicator, YTCommandResponderEvent, YTIButtonRenderer, YTICommand, YTInnerTubeCollectionViewController, YTQTMButton;
@protocol YTInnerTubeUIService, YTResponder;

@interface YTGetSuggestedPlaylistVideosViewController : YTStyledViewController <YTPageStyling, YTTopController, YTGraftingViewController>
{
    YTICommand *_model;
    id <YTInnerTubeUIService> _service;
    NSMutableArray *_selectedVideoIDs;
    YTInnerTubeCollectionViewController *_collectionViewController;
    YTQTMButton *_exitButton;
    YTQTMButton *_nextButton;
    YTICommand *_exitCommand;
    YTICommand *_nextCommand;
    YTIButtonRenderer *_exitButtonRenderer;
    long long _pageStyle;
    QTMActivityIndicator *_activityView;
}

- (void).cxx_destruct;
- (void)dismissModalWithDismissalBlock:(CDUnknownBlockType)arg1;
- (void)updateColorsForPageStyle:(long long)arg1;
- (id)selectedVideoIDs;
- (void)didTapExitButton:(id)arg1;
- (void)didTapNextButton:(id)arg1;
- (void)updateMetadataCount;
- (void)handleToggleMultiSelectVideoItemCommand:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loadCollectionViewController;
- (void)setUpHeader:(id)arg1;
- (void)pageStyleDidChange:(long long)arg1;
- (void)loadWithModel:(id)arg1;
- (id)navEndpoint;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak GIMMe *gimme;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
@property(retain, nonatomic) YTCommandResponderEvent *sourceEvent;
@property(readonly) Class superclass;

@end
