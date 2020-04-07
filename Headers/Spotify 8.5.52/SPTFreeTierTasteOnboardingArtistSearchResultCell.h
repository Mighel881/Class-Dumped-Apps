//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "GLUEStyleable-Protocol.h"

@class GLUEImageView, GLUELabel, NSLayoutConstraint, NSString, SPTFreeTierTasteOnboardingArtistSearchResultCellStyle, UIView;

@interface SPTFreeTierTasteOnboardingArtistSearchResultCell : UICollectionViewCell <GLUEStyleable>
{
    _Bool _newlyCreated;
    GLUEImageView *_imageView;
    GLUELabel *_nameLabel;
    GLUELabel *_subtitleLabel;
    NSLayoutConstraint *_imageViewHeightConstraint;
    NSLayoutConstraint *_imageViewWidthConstraint;
    NSLayoutConstraint *_imageViewLeadingConstraint;
    NSLayoutConstraint *_imageViewToLabelWraperMarginConstraint;
    NSLayoutConstraint *_nameToSubtitlePaddingConstraint;
    NSLayoutConstraint *_nameBottomConstraint;
    NSLayoutConstraint *_subtitleBottomConstraint;
    UIView *_labelWrapperView;
    SPTFreeTierTasteOnboardingArtistSearchResultCellStyle *_style;
}

@property(retain, nonatomic) SPTFreeTierTasteOnboardingArtistSearchResultCellStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) UIView *labelWrapperView; // @synthesize labelWrapperView=_labelWrapperView;
@property(retain, nonatomic) NSLayoutConstraint *subtitleBottomConstraint; // @synthesize subtitleBottomConstraint=_subtitleBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *nameBottomConstraint; // @synthesize nameBottomConstraint=_nameBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *nameToSubtitlePaddingConstraint; // @synthesize nameToSubtitlePaddingConstraint=_nameToSubtitlePaddingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageViewToLabelWraperMarginConstraint; // @synthesize imageViewToLabelWraperMarginConstraint=_imageViewToLabelWraperMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageViewLeadingConstraint; // @synthesize imageViewLeadingConstraint=_imageViewLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageViewWidthConstraint; // @synthesize imageViewWidthConstraint=_imageViewWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageViewHeightConstraint; // @synthesize imageViewHeightConstraint=_imageViewHeightConstraint;
@property(readonly, nonatomic) GLUELabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) GLUELabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(readonly, nonatomic) GLUEImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic, getter=isNewlyCreated) _Bool newlyCreated; // @synthesize newlyCreated=_newlyCreated;
- (void).cxx_destruct;
- (void)setSubtitleHidden:(_Bool)arg1;
- (void)glue_applyStyle:(id)arg1;
- (void)activateConstraints;
- (void)setHighlighted:(_Bool)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
