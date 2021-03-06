//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASTMenuBaseTableViewCell.h"

@class ASTShadowView, NSLayoutConstraint;

@interface ASTMenuShadowTableViewCell : ASTMenuBaseTableViewCell
{
    ASTShadowView *_shadowView;
    NSLayoutConstraint *_bottomLayoutConstraint;
    NSLayoutConstraint *_topLayoutConstraint;
    NSLayoutConstraint *_heightLayoutConstraint;
    _Bool _shadowOnTop;
    double _shadowElevation;
}

@property(nonatomic, getter=isShadowOnTop) _Bool shadowOnTop; // @synthesize shadowOnTop=_shadowOnTop;
@property(nonatomic) double shadowElevation; // @synthesize shadowElevation=_shadowElevation;
- (void).cxx_destruct;
- (_Bool)accessibilityElementsHidden;
- (void)updateConstraints;
- (void)setUpConstraints;
- (void)setUpDefaultStyles;
- (void)addCustomSubViews;

@end

