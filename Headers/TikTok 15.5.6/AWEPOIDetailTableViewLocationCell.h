//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEPOIDetailTableViewCell.h"

@class UIImageView, UILabel, UIView;
@protocol AWEPOIDetailTableViewLocationCellDelegate;

@interface AWEPOIDetailTableViewLocationCell : AWEPOIDetailTableViewCell
{
    _Bool _hasPhoneNumber;
    _Bool _hasCompanyPage;
    _Bool _hasDistance;
    id <AWEPOIDetailTableViewLocationCellDelegate> _delegate;
    UIImageView *_mapIcon;
    UIImageView *_navigateIcon;
    UILabel *_locationLabel;
    UILabel *_distanceLabel;
    UIView *_callAreaContainerView;
    UIImageView *_callIcon;
    UIView *_callAreaSeparator;
    UIView *_companyAreaContainerView;
    UIImageView *_companyIcon;
    UIView *_companyAreaSeparator;
}

+ (double)locationLabelWidthForInfoWithPhoneNumber:(_Bool)arg1 withCompanyPage:(_Bool)arg2;
+ (id)attributedLocationTextForAddress:(id)arg1 distance:(id)arg2 hasPhoneNumber:(_Bool)arg3 hasCompanyPage:(_Bool)arg4;
+ (double)cellHeightForLocation:(id)arg1 distance:(id)arg2 hasPhoneNumber:(_Bool)arg3 hasCompanyPage:(_Bool)arg4;
@property(retain, nonatomic) UIView *companyAreaSeparator; // @synthesize companyAreaSeparator=_companyAreaSeparator;
@property(retain, nonatomic) UIImageView *companyIcon; // @synthesize companyIcon=_companyIcon;
@property(retain, nonatomic) UIView *companyAreaContainerView; // @synthesize companyAreaContainerView=_companyAreaContainerView;
@property(retain, nonatomic) UIView *callAreaSeparator; // @synthesize callAreaSeparator=_callAreaSeparator;
@property(retain, nonatomic) UIImageView *callIcon; // @synthesize callIcon=_callIcon;
@property(retain, nonatomic) UIView *callAreaContainerView; // @synthesize callAreaContainerView=_callAreaContainerView;
@property(nonatomic) _Bool hasDistance; // @synthesize hasDistance=_hasDistance;
@property(nonatomic) _Bool hasCompanyPage; // @synthesize hasCompanyPage=_hasCompanyPage;
@property(nonatomic) _Bool hasPhoneNumber; // @synthesize hasPhoneNumber=_hasPhoneNumber;
@property(retain, nonatomic) UILabel *distanceLabel; // @synthesize distanceLabel=_distanceLabel;
@property(retain, nonatomic) UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) UIImageView *navigateIcon; // @synthesize navigateIcon=_navigateIcon;
@property(retain, nonatomic) UIImageView *mapIcon; // @synthesize mapIcon=_mapIcon;
@property(nonatomic) __weak id <AWEPOIDetailTableViewLocationCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)hideContentViews;
- (double)p_mapIconOffset;
- (void)p_updateConstraints;
- (void)selfLongTap:(id)arg1;
- (void)handleTapOnNavigate:(id)arg1;
- (void)handleTapOnCompanyArea:(id)arg1;
- (void)handleTapOnCallArea:(id)arg1;
- (void)setAddress:(id)arg1 distance:(id)arg2;
- (void)setDistance:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)p_setupCompanyArea;
- (void)p_setupCallArea;
- (void)p_setupDistanceLabel;
- (void)p_setupLocationLabel;
- (void)p_setupMapIcon;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end
