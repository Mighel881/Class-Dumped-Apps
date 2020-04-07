//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GLUEThemeObserver-Protocol.h"
#import "SPTNowPlayingTabViewModelDelegate-Protocol.h"

@class NSString, SPTNowPlayingTabLabel, SPTNowPlayingTabViewModel, UIStackView, UITapGestureRecognizer;
@protocol GLUETheme;

@interface SPTNowPlayingTabViewController : UIViewController <GLUEThemeObserver, SPTNowPlayingTabViewModelDelegate>
{
    id <GLUETheme> _theme;
    SPTNowPlayingTabLabel *_canvasTabLabel;
    SPTNowPlayingTabLabel *_coverArtLabel;
    SPTNowPlayingTabLabel *_lyricsTabLabel;
    UIStackView *_stackView;
    UITapGestureRecognizer *_canvasLabelTapRecognizer;
    UITapGestureRecognizer *_coverArtLabelTapRecognizer;
    UITapGestureRecognizer *_lyricsLabelTapRecognizer;
    SPTNowPlayingTabViewModel *_viewModel;
}

@property(readonly, nonatomic) SPTNowPlayingTabViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) UITapGestureRecognizer *lyricsLabelTapRecognizer; // @synthesize lyricsLabelTapRecognizer=_lyricsLabelTapRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *coverArtLabelTapRecognizer; // @synthesize coverArtLabelTapRecognizer=_coverArtLabelTapRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *canvasLabelTapRecognizer; // @synthesize canvasLabelTapRecognizer=_canvasLabelTapRecognizer;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(readonly, nonatomic) SPTNowPlayingTabLabel *lyricsTabLabel; // @synthesize lyricsTabLabel=_lyricsTabLabel;
@property(readonly, nonatomic) SPTNowPlayingTabLabel *coverArtLabel; // @synthesize coverArtLabel=_coverArtLabel;
@property(readonly, nonatomic) SPTNowPlayingTabLabel *canvasTabLabel; // @synthesize canvasTabLabel=_canvasTabLabel;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)tabViewModel:(id)arg1 didChangeSelectedTab:(long long)arg2;
- (void)tabViewModelDidChangeTabs:(id)arg1 canvasTabVisible:(_Bool)arg2 lyricsTabVisible:(_Bool)arg3;
- (void)selectTab:(long long)arg1;
- (void)lyricsLabelTapped;
- (void)coverArtLabelTapped;
- (void)canvasLabelTapped;
- (void)setLyricsTabVisible:(_Bool)arg1;
- (void)setCanvasTabVisible:(_Bool)arg1;
- (void)themeUpdated:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithTheme:(id)arg1 viewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
