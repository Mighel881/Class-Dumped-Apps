//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/YTPageStyling-Protocol.h>
#import <Module_Framework/YTUserMentionViewProtocol-Protocol.h>

@class NSString, UICollectionView;
@protocol YTUserMentionsViewDelegate;

@interface YTUserMentionsView : UIView <YTPageStyling, YTUserMentionViewProtocol>
{
    double _suggestedMentionsViewHeightOffset;
    UIView *_shadowLine;
    unsigned long long _displayStyle;
    long long _previousSuggestionCount;
    UICollectionView *_suggestedMentionsView;
    id <YTUserMentionsViewDelegate> _delegate;
}

@property(nonatomic) __weak id <YTUserMentionsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UICollectionView *suggestedMentionsView; // @synthesize suggestedMentionsView=_suggestedMentionsView;
- (void).cxx_destruct;
- (double)maximumSuggestedMentionsViewHeight;
- (double)initialSuggestedMentionsViewHeight;
- (double)suggestedMentionsViewHeight;
- (void)resetSuggestedUserMentionsWithAnimation;
- (void)dismissSuggestedUserMentionsWithAnimation;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)suggestedUserMentionsWillBeHidden;
- (void)maybeDismissSuggestedUserMentionsWithAnimation;
- (_Bool)scrollSuggestedMentionsViewWithScrollableViewHeightOffset:(double)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithUserMentionStyle:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
