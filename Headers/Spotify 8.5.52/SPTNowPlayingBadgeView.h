//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SPTThemableView-Protocol.h"

@class NSString, UIBezierPath, UILabel;
@protocol SPTThemableViewLayoutDelegate;

@interface SPTNowPlayingBadgeView : UIView <SPTThemableView>
{
    _Bool _highlighted;
    id <SPTThemableViewLayoutDelegate> layoutDelegate;
    unsigned long long _value;
    UILabel *_label;
}

@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) unsigned long long value; // @synthesize value=_value;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) __weak id <SPTThemableViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate;
- (void).cxx_destruct;
- (id)circleBezierPathWithRect:(struct CGRect)arg1;
@property(readonly, nonatomic) UIBezierPath *maskPath;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)applyThemeLayout;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
