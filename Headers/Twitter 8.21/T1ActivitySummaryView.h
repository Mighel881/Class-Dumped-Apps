//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TFNTappableHighlightView, TFNTwitterAccount, UILabel;
@protocol T1ActivitySummaryViewDelegate, T1StatusViewModel;

@interface T1ActivitySummaryView : UIView
{
    TFNTappableHighlightView *_retweetsHighlightView;
    UILabel *_retweetsLabel;
    id _retweetsTarget;
    SEL _retweetsAction;
    TFNTappableHighlightView *_favoritesHighlightView;
    UILabel *_favoritesLabel;
    id _favoritesTarget;
    SEL _favoritesAction;
    TFNTappableHighlightView *_quoteTweetsHighlightView;
    UILabel *_quoteTweetsLabel;
    UIView *_separator;
    UIView *_accessibilityAnchorView;
    unsigned long long _favoriteCount;
    unsigned long long _retweetCount;
    TFNTwitterAccount *_account;
    id <T1StatusViewModel> _viewModel;
    unsigned long long _options;
    id <T1ActivitySummaryViewDelegate> _delegate;
    long long _style;
}

+ (double)activityDefaultVerticalSpacing;
+ (double)activityDefaultSpacing;
+ (struct CGSize)sizeForViewModel:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3 maximumWidth:(double)arg4;
- (void).cxx_destruct;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <T1ActivitySummaryViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) id <T1StatusViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void)_quotesAction;
- (void)_favoritesAction;
- (void)_retweetsAction;
- (id)viewForActionWithType:(long long)arg1;
- (struct CGRect)favoritesFrame;
- (void)setFavoritesTarget:(id)arg1 action:(SEL)arg2;
- (struct CGRect)retweetsFrame;
- (void)setRetweetsTarget:(id)arg1 action:(SEL)arg2;
- (_Bool)_t1_shouldShowCombinedQuoteCount;
- (_Bool)_t1_shouldShowStandaloneQuoteCount;
- (void)_updateStyle;
- (void)update;
- (struct CGPoint)_t1_layoutQuoteStat:(struct CGSize)arg1 anchor:(struct CGPoint)arg2;
- (struct CGPoint)_t1_layoutFavoriteStat:(struct CGSize)arg1 anchor:(struct CGPoint)arg2;
- (struct CGPoint)_t1_layoutRetweetStat:(struct CGSize)arg1 anchor:(struct CGPoint)arg2;
- (void)layoutSubviews;
- (void)setViewModel:(id)arg1 options:(unsigned long long)arg2 account:(id)arg3;
- (void)setFavoriteCount:(unsigned long long)arg1 retweetCount:(unsigned long long)arg2;
- (unsigned long long)quoteCount;
@property(readonly, nonatomic) unsigned long long retweetCount; // @synthesize retweetCount=_retweetCount;
@property(readonly, nonatomic) unsigned long long favoriteCount; // @synthesize favoriteCount=_favoriteCount;
- (id)accessibilityElements;
- (id)initWithFrame:(struct CGRect)arg1;

@end

