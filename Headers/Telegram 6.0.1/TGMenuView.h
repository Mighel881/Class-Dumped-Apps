//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <TelegramUI/TGMenuButtonViewDelegate-Protocol.h>
#import <TelegramUI/UIScrollViewDelegate-Protocol.h>

@class ASHandle, NSArray, NSDictionary, NSMutableArray, NSString, UIButton, UIImageView, UIScrollView;

@interface TGMenuView : UIView <TGMenuButtonViewDelegate, UIScrollViewDelegate>
{
    NSDictionary *_userInfo;
    UIScrollView *_buttonContainer;
    UIView *_buttonContainerContainer;
    UIButton *_leftPagerButton;
    UIButton *_rightPagerButton;
    UIImageView *_containerMaskView;
    _Bool _buttonHighlightDisabled;
    _Bool _multiline;
    _Bool _forceArrowOnTop;
    _Bool _forceCenter;
    _Bool _arrowOnTop;
    double _maxWidth;
    NSMutableArray *_buttonViews;
    NSMutableArray *_separatorViews;
    NSArray *_buttonDescriptions;
    double _arrowLocation;
    UIImageView *_arrowTopView;
    UIImageView *_arrowBottomView;
    ASHandle *_watcherHandle;
}

@property(retain, nonatomic) ASHandle *watcherHandle; // @synthesize watcherHandle=_watcherHandle;
@property(retain, nonatomic) UIImageView *arrowBottomView; // @synthesize arrowBottomView=_arrowBottomView;
@property(retain, nonatomic) UIImageView *arrowTopView; // @synthesize arrowTopView=_arrowTopView;
@property(nonatomic) _Bool arrowOnTop; // @synthesize arrowOnTop=_arrowOnTop;
@property(nonatomic) double arrowLocation; // @synthesize arrowLocation=_arrowLocation;
@property(retain, nonatomic) NSArray *buttonDescriptions; // @synthesize buttonDescriptions=_buttonDescriptions;
@property(retain, nonatomic) NSMutableArray *separatorViews; // @synthesize separatorViews=_separatorViews;
@property(retain, nonatomic) NSMutableArray *buttonViews; // @synthesize buttonViews=_buttonViews;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) _Bool forceCenter; // @synthesize forceCenter=_forceCenter;
@property(nonatomic) _Bool forceArrowOnTop; // @synthesize forceArrowOnTop=_forceArrowOnTop;
@property(nonatomic) _Bool multiline; // @synthesize multiline=_multiline;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool buttonHighlightDisabled; // @synthesize buttonHighlightDisabled=_buttonHighlightDisabled;
- (void).cxx_destruct;
- (void)pagerButtonPressed:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)buttonPressed:(id)arg1;
- (void)layoutSubviews;
- (void)hide:(CDUnknownBlockType)arg1;
- (void)showInView:(id)arg1 fromRect:(struct CGRect)arg2 animated:(_Bool)arg3;
- (void)showInView:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)sizeToFit;
- (void)sizeToFitToWidth:(double)arg1;
- (void)updateBackgrounds;
- (id)highlightMask;
- (void)menuButtonHighlighted;
- (void)setButtonsAndActions:(id)arg1 watcherHandle:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
