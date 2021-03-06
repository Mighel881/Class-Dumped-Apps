//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCATMenuItemCell-Protocol.h"

@class NSString, SCATModernMenuItem, UIActivityIndicatorView, UIImage, UIImageView;

@interface SCATModernMenuItemCell : UICollectionViewCell <SCATMenuItemCell>
{
    _Bool _shouldUseActivityIndicator;
    UIImageView *_backgroundBorderImageView;
    UIImageView *_pressedBackgroundBorderImageView;
    UIImage *_pressedBackgroundImage;
    UIImage *_defaultBackgroundImage;
    UIImage *_dimmedBackgroundImage;
    UIImageView *_iconImageView;
    double _iconImageAngle;
    UIImage *_dimmedIconImage;
    UIImage *_highVisBackgroundAndIconImage;
    SCATModernMenuItem *_menuItem;
    UIImage *_iconImage;
    UIActivityIndicatorView *_activityIndicatorView;
}

@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(nonatomic) _Bool shouldUseActivityIndicator; // @synthesize shouldUseActivityIndicator=_shouldUseActivityIndicator;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic) SCATModernMenuItem *menuItem; // @synthesize menuItem=_menuItem;
@property(retain, nonatomic) UIImage *highVisBackgroundAndIconImage; // @synthesize highVisBackgroundAndIconImage=_highVisBackgroundAndIconImage;
@property(retain, nonatomic) UIImage *dimmedIconImage; // @synthesize dimmedIconImage=_dimmedIconImage;
@property(nonatomic) double iconImageAngle; // @synthesize iconImageAngle=_iconImageAngle;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIImage *dimmedBackgroundImage; // @synthesize dimmedBackgroundImage=_dimmedBackgroundImage;
@property(retain, nonatomic) UIImage *defaultBackgroundImage; // @synthesize defaultBackgroundImage=_defaultBackgroundImage;
@property(retain, nonatomic) UIImage *pressedBackgroundImage; // @synthesize pressedBackgroundImage=_pressedBackgroundImage;
@property(retain, nonatomic) UIImageView *pressedBackgroundBorderImageView; // @synthesize pressedBackgroundBorderImageView=_pressedBackgroundBorderImageView;
@property(retain, nonatomic) UIImageView *backgroundBorderImageView; // @synthesize backgroundBorderImageView=_backgroundBorderImageView;
- (void).cxx_destruct;
- (void)resetCell;
- (_Bool)allowsDwellScanningToAbortAfterTimeout;
- (id)accessibilityLabel;
- (id)scatSpeakableDescription;
- (_Bool)scatIndicatesOwnFocus;
- (_Bool)scatShouldActivateDirectly;
- (_Bool)scatPerformAction:(int)arg1;
- (_Bool)scatSupportsAction:(int)arg1;
- (struct CGRect)scatFrame;
- (void)prepareForReuse;
- (void)didUpdateScatMenuItemStyle;
- (void)_setIconDimmed:(_Bool)arg1 asDimAsBorder:(_Bool)arg2 focused:(_Bool)arg3;
- (void)_setBorderDimmed:(_Bool)arg1 focused:(_Bool)arg2 hidden:(_Bool)arg3;
@property(readonly, copy) NSString *description;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

