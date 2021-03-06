//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import "GLUEStyleable-Protocol.h"

@class GLUELabel, NSLayoutConstraint, NSString, UIImageView;

@interface SPTFreeTierTasteOnboardingArtistSearchInfoView : UICollectionReusableView <GLUEStyleable>
{
    UIImageView *_imageView;
    GLUELabel *_titleLabel;
    GLUELabel *_subtitleLabel;
    NSLayoutConstraint *_imageViewToTitleLabelMarginConstraint;
    NSLayoutConstraint *_imageViewHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *imageViewHeightConstraint; // @synthesize imageViewHeightConstraint=_imageViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageViewToTitleLabelMarginConstraint; // @synthesize imageViewToTitleLabelMarginConstraint=_imageViewToTitleLabelMarginConstraint;
@property(readonly, nonatomic) GLUELabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)activateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

