//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/ASMVoiceOverFocusTableViewCell.h>

@class ASMImageView, ASMMessage, NSLayoutConstraint, UILabel, UILayoutGuide;

@interface ASMMessageTableViewCell : ASMVoiceOverFocusTableViewCell
{
    ASMMessage *_bannerMessage;
    UILabel *_titleLabel;
    UILabel *_descriptionLabel;
    ASMImageView *_iconImageView;
    UILayoutGuide *_textContainer;
    unsigned long long _defaultAccessibilityTraits;
    NSLayoutConstraint *_textContainerLeadingConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *textContainerLeadingConstraint; // @synthesize textContainerLeadingConstraint=_textContainerLeadingConstraint;
@property(nonatomic) unsigned long long defaultAccessibilityTraits; // @synthesize defaultAccessibilityTraits=_defaultAccessibilityTraits;
@property(retain, nonatomic) UILayoutGuide *textContainer; // @synthesize textContainer=_textContainer;
@property(retain, nonatomic) ASMImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) ASMMessage *bannerMessage; // @synthesize bannerMessage=_bannerMessage;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)addLabelConstraints;
- (void)addSubviewConstraints;
- (void)addTextContainerLeadingConstraintToContentView;
- (void)addTextContainerConstraints;
- (void)createDescriptionLabelIfNil;
- (void)createTitleLabelIfNil;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
