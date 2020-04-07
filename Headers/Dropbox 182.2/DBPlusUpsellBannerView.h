//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DBAlertBannerViewProtocol-Protocol.h"
#import "DBContentView-Protocol.h"

@class NSArray;
@protocol DBContentViewObject;

@interface DBPlusUpsellBannerView : UIView <DBAlertBannerViewProtocol, DBContentView>
{
    // Error parsing type: , name: innerBannerView
    // Error parsing type: , name: iconImageView
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: subtitleLabel
    // Error parsing type: , name: dismissButton
    // Error parsing type: , name: tapActionBlock
    // Error parsing type: , name: accessoryActionBlock
    // Error parsing type: , name: impressionBlock
    // Error parsing type: , name: $__lazy_storage_$_lazyAccessibilityElements
}

- (void).cxx_destruct;
@property(nonatomic, readonly) struct CGSize intrinsicContentSize;
@property(nonatomic, readonly) id <DBContentViewObject> contentViewObject;
- (void)contentViewObjectDidUpdate;
- (void)unbindFromContentViewObject;
- (void)bindToContentViewObject:(id)arg1;
- (void)bannerViewDidAppear;
- (void)didTapDismiss;
- (void)didTapBanner;
@property(nonatomic, copy) NSArray *accessibilityElements;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
