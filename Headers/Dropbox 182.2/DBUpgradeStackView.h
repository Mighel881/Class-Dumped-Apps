//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DBUpgradeViewProtocol-Protocol.h"

@class NSArray, UIScrollView;

@interface DBUpgradeStackView : UIView <DBUpgradeViewProtocol>
{
    UIScrollView *_scrollView;
    UIView *_contentView;
    NSArray *_views;
    NSArray *_topMargins;
    NSArray *_horizontalMargins;
    double _bottomMargin;
    long long _floatingSubscriptionDetailsViewBehavior;
    _Bool _hideNavBarWhenSubscriptionDetailsIsShown;
}

@property(readonly, nonatomic) _Bool hideNavBarWhenSubscriptionDetailsIsShown; // @synthesize hideNavBarWhenSubscriptionDetailsIsShown=_hideNavBarWhenSubscriptionDetailsIsShown;
@property(readonly, nonatomic) long long floatingSubscriptionDetailsViewBehavior; // @synthesize floatingSubscriptionDetailsViewBehavior=_floatingSubscriptionDetailsViewBehavior;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (struct CGSize)contentSize;
- (void)scrollContents;
- (void)db_setupConstraints;
- (void)db_setupViews;
- (id)initWithViews:(id)arg1 topMargins:(id)arg2 horizontalMargins:(id)arg3 bottomMargin:(double)arg4;

@end

