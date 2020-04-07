//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEFeedTableViewCellViewControllerProtocol-Protocol.h"
#import "AWEPlayVideoViewControllerContainerProtocol-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class AWEAwemeModel, AWEBulletScreenInteractionViewController, NSDictionary, NSString, UITapGestureRecognizer, UIView;
@protocol AWEAwemeDisplayViewController;

@interface AWEBulletScreenViewController : UIViewController <UIGestureRecognizerDelegate, AWEPlayVideoViewControllerContainerProtocol, AWEFeedTableViewCellViewControllerProtocol>
{
    _Bool _isEditing;
    _Bool _needsSetPureMode;
    _Bool _isValid;
    long long _indexPath;
    long long _mediaType;
    AWEAwemeModel *_model;
    NSString *_referString;
    NSDictionary *_logExtraDict;
    NSString *_enterFrom;
    NSString *_ruleId;
    NSString *_cityInfoString;
    NSString *_adEventName;
    long long _type;
    AWEBulletScreenInteractionViewController *_interactionController;
    UIViewController<AWEAwemeDisplayViewController> *_videoController;
    UIView *_headerForBulletScreen;
    double _defaultSeekToTime;
    NSString *_reactId;
    NSString *_previousPage;
    double _lastClickTimestamp;
    UITapGestureRecognizer *_tapGesture;
}

@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) double lastClickTimestamp; // @synthesize lastClickTimestamp=_lastClickTimestamp;
@property(copy, nonatomic) NSString *previousPage; // @synthesize previousPage=_previousPage;
@property(copy, nonatomic) NSString *reactId; // @synthesize reactId=_reactId;
@property(nonatomic) double defaultSeekToTime; // @synthesize defaultSeekToTime=_defaultSeekToTime;
@property(nonatomic) __weak UIView *headerForBulletScreen; // @synthesize headerForBulletScreen=_headerForBulletScreen;
@property(retain, nonatomic) UIViewController<AWEAwemeDisplayViewController> *videoController; // @synthesize videoController=_videoController;
@property(retain, nonatomic) AWEBulletScreenInteractionViewController *interactionController; // @synthesize interactionController=_interactionController;
@property(nonatomic) _Bool needsSetPureMode; // @synthesize needsSetPureMode=_needsSetPureMode;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *adEventName; // @synthesize adEventName=_adEventName;
@property(copy, nonatomic) NSString *cityInfoString; // @synthesize cityInfoString=_cityInfoString;
@property(copy, nonatomic) NSString *ruleId; // @synthesize ruleId=_ruleId;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(retain, nonatomic) NSDictionary *logExtraDict; // @synthesize logExtraDict=_logExtraDict;
@property(copy, nonatomic) NSString *referString; // @synthesize referString=_referString;
@property(retain, nonatomic) AWEAwemeModel *model; // @synthesize model=_model;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) long long indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (_Bool)rootViewTapGestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)updateHeaderForBulletScreen:(double)arg1 transform:(struct CGAffineTransform)arg2;
- (id)getPlayModeWithAutoPlayMode;
- (void)_silentUpdate;
- (void)_onVideoPlayerViewDoubleClicked:(id)arg1;
- (void)_onVideoPlayerViewSingleClicked:(id)arg1;
- (void)_onVideoPlayerViewClicked:(id)arg1;
- (void)showCommentPanelWithInsertIDs:(id)arg1;
- (_Bool)isCommentListShowing;
- (double)currentPlaybackTime;
- (void)pause;
- (void)stop;
- (void)pause:(id)arg1;
- (void)play:(id)arg1;
- (void)play;
- (void)reset;
- (id)transitionContext;
- (id)relatedViewControllerForPrefetch;
- (void)setAllUIElementsHidden:(_Bool)arg1 withAnimation:(_Bool)arg2;
- (void)doActionIfNotValidWithText:(id)arg1;
- (void)doActionIfNotValid;
- (_Bool)alertIfNotValidForAction:(long long)arg1;
- (_Bool)isScrolledAutomatically;
- (void)setIsScrolledAutomatically:(_Bool)arg1;
- (void)hideInteractionViews:(_Bool)arg1;
- (void)setPlayerViewFrame:(struct CGRect)arg1 clipsToBounds:(_Bool)arg2;
- (void)setPureModeBlock:(CDUnknownBlockType)arg1;
- (void)setPureMode:(_Bool)arg1 animateDuration:(double)arg2;
- (void)setPureMode:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setPureMode:(_Bool)arg1;
- (void)prepareForDisplay;
- (void)configureWithModel:(id)arg1;
- (void)setOriginEntryEnterMethod:(id)arg1;
- (void)resetRefreshFlag;
- (void)setClickEnter:(id)arg1;
- (void)initVideoController;
- (void)initInteractController;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
- (id)initWithMediaType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSDictionary *extTrackLog;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
