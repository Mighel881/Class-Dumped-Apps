//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class GLUELabel, NSLayoutConstraint, NSString, SPTBrowseUITopicStyle;

@interface SPTBrowseUITopicView : UIView <GLUEStyleable>
{
    SPTBrowseUITopicStyle *_style;
    GLUELabel *_titleLabel;
    UIView *_borderView;
    NSLayoutConstraint *_titleLeadingConstraint;
    NSLayoutConstraint *_titleTrailingConstraint;
}

+ (struct CGSize)sizeForTitle:(id)arg1 style:(id)arg2;
@property(retain, nonatomic) NSLayoutConstraint *titleTrailingConstraint; // @synthesize titleTrailingConstraint=_titleTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLeadingConstraint; // @synthesize titleLeadingConstraint=_titleLeadingConstraint;
@property(readonly, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) SPTBrowseUITopicStyle *style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)updateAppearance;
- (void)glue_applyStyle:(id)arg1;
@property(copy, nonatomic) NSString *title;
- (void)setupConstraints;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

