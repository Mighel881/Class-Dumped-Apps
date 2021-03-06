//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (GKSAutoLayout)
+ (id)gks_constraintsForVisualFormats:(id)arg1 metrics:(id)arg2 views:(id)arg3;
- (_Bool)gks_hasAmbiguousLayout;
- (id)gks_safeWidthAnchor;
- (id)gks_safeTrailingAnchor;
- (id)gks_safeLeadingAnchor;
- (id)gks_safeRightAnchor;
- (id)gks_safeLeftAnchor;
- (id)gks_safeBottomAnchor;
- (id)gks_safeTopAnchor;
- (void)gks_alignBottomsOfViews:(id)arg1;
- (void)gks_constrainToEqualWidth:(id)arg1;
- (void)constrainCenterofView:(id)arg1 toView:(id)arg2;
- (void)alignVerticalCentersOfSubviews:(id)arg1;
- (void)gks_bindSizeToSuperviewSize;
- (void)gks_alignWithSuperviewCenter:(id)arg1;
- (void)gks_verticallyAlignWithSuperviewCenter:(id)arg1;
- (void)gks_horizontallyAlignWithSuperviewCenter:(id)arg1;
- (void)gks_bindWidthToContainer:(id)arg1;
- (void)gks_addVisualFormatConstraints:(id)arg1 metrics:(id)arg2 views:(id)arg3;
- (void)gks_addConstraints:(id)arg1;
- (void)gks_addSubviews:(id)arg1;
- (void)gks_addSubview:(id)arg1;
@end

